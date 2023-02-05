/*
https://bulbapedia.bulbagarden.net/wiki/List_of_Pok%C3%A9mon_by_National_Pok%C3%A9dex_number
*/

(function() {
  'use strict';
  const tables = Array.from(document.querySelectorAll("table.roundy"));
  const trimLeft = (s, l) => s.substring(0, s.length - l);
  const isWordC = s => /\w/.test(s);

  const matchDexNo = /#\d{4}/;
  const matchIdentifier = /^[a-zA-Z][a-zA-Z0-9]+$/;

  const spChars = new Set();
  const regNames = tables.map(
    reg => Array.from(
      reg.firstElementChild.children
    ).filter(
      entry => matchDexNo.test(entry.firstElementChild.textContent)
    ).map(entry => {
      const ID = parseInt(entry.firstElementChild.textContent.substring(1));
      let pkName = entry.children[2].firstElementChild.textContent;
      if (!matchIdentifier.test(pkName)) {
        for (const char of pkName) {
          if (!isWordC(char)) {
            // this is bad practice, but I don't
            // want to traverese this crap twice
            spChars.add(char);
          }
        }
      }
      return {
        id: ID,
        name: pkName
      };
    })
  );
  
  console.log(Array.from(spChars).map(c => `"${c}": ""`).join(",\n"));
  const symList = Array.from(spChars).join("");
  const repMap = {
    "♀": "_Girl",
    "♂": "_Boy",
    "'": "",
    ".": "",
    " ": "_",
    "-": "_",
    "é": "e",
    ":": ""
  };

  const tokenized = regNames.map(region => {
    return region.map(entry => {
      const {id: ID, name: pkName} = entry;
      const tokenName = pkName.replace(/./g, (match, offset) => {
        if (repMap.hasOwnProperty(match)) {
          return repMap[match];
        } else if (isWordC(match)) {
          return match;
        }
        console.warn(`${match} is not accounted for`);
        return match;
      });
      return {
        id: ID,
        name: pkName,
        token: tokenName
      };
    })
  });

  tokenized.forEach(region => {
    region.forEach(entry => {
      if (!matchIdentifier.test(entry.name)) {
        console.log(entry.token);
      }
    });
  });
  
  console.log(tokenized);
  window.tokenized = tokenized;

  const ndex = `enum class PokeNames {\n  ${tokenized.flat().map((e, i) => `${e.token} = ${e.id}`).join(",\n  ")}\n};`
  const gdexes = `const vector<>`
  window.enumout = ndex;
}());
