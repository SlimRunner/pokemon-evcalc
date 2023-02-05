/**
 * https://bulbapedia.bulbagarden.net/wiki/List_of_Pok%C3%A9mon_by_base_stats_(Generation_IX)
 */

(function() {
  'use strict';
  const isWordC = s => /\w/.test(s);
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
  const tokenize = (pkName) => {
    const tokenName = pkName.replace(/./g, (match, offset) => {
      if (repMap.hasOwnProperty(match)) {
        return repMap[match];
      } else if (isWordC(match)) {
        return match;
      }
      console.warn(`${match} is not accounted for`);
      return match;
    });
    return tokenName;
  };

  const table = Array.from(document.querySelector("table.roundy").children[1].children);
  
  const eachStats = table.map(entry => {
    const cells = Array.from(entry.children);
    const pkName = cells[2].firstChild.textContent;
    const stats = cells.slice(3, 9).map(c => parseInt(c.textContent.trim()));
    const {0:HP, 1:Attack, 2:Defense, 3:SpAttack, 4:SpDefense, 5:Speed} = stats;
    if (cells[2].children.length === 1) {
      return {
        name: pkName,
        form: "Normal",
        stats: [
          HP,
          Attack,
          Defense,
          SpAttack,
          SpDefense,
          Speed
        ]
      };
    } else {
      const pkForm = cells[2].children[1].textContent.replaceAll(/[\(\)]/g, "");
      return {
        name: pkName,
        form: pkForm,
        stats: [
          HP,
          Attack,
          Defense,
          SpAttack,
          SpDefense,
          Speed
        ]
      };
    }
  });
  window.eachStats = eachStats;

  const pkUnique = new Map();
  for (const entry of eachStats) {
    if (!pkUnique.has(entry.name)) {
      pkUnique.set(entry.name, {"forms": []})
      pkUnique.get(entry.name).forms.push({form: (entry.form), stats: (entry.stats)})
    } else {
      pkUnique.get(entry.name).forms.push({form: (entry.form), stats: (entry.stats)})
    }
  }
  window.pkUnique = pkUnique;

  const pkStats = Array.from(pkUnique).map((p, i) => {
    return {
      id: i + 1,
      name: p[0],
      forms: p[1].forms
    }
  });
  window.pkStats = pkStats;

  const tb = n => "  ".repeat(n);
  const nl = "\n";
  const pokeItems = pkStats.map(pk => {
    const formItems = pk.forms.map(fm => {
      return `{"${fm.form}", {${fm.stats.join(", ")}}}`;
    }).join(`,${nl}${tb(2)}`);
    return `{PokeNames::${tokenize(pk.name)}, {${nl}${tb(2)}${formItems}}}`;
  }).join(`,${nl}${tb(1)}`);
  const cppStats = `StatMap pkStats = {${pokeItems}${nl}};`;
  window.cppStats = cppStats;
  // console.log(cppStats);
}());
