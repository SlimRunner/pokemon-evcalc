#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

#include "Pokemon.hpp"
#include "argParser.hpp"

#define IO_USE                                                                 \
  using std::cout;                                                             \
  using std::cin;                                                              \
  using std::endl;                                                             \
  using std::string;

#define AP_USE                                                                 \
  using ArgParser::argmap;                                                     \
  using ArgParser::getArgs;                                                    \
  using ArgParser::hasKey;

std::ostream &operator<<(std::ostream &stream, const Poke::Stats &stats) {
  stream << "HP: " << stats.hp << '\n'
         << "Attack: " << stats.atk << '\n'
         << "Defense: " << stats.def << '\n'
         << "Sp. Attack: " << stats.spAtk << '\n'
         << "Sp. Defense: " << stats.spDef << '\n'
         << "Speed: " << stats.spd << '\n';
  return stream;
}

int main(int argc, char const *argv[]) {
  IO_USE;
  AP_USE;
  argmap params = getArgs(argc, argv);
  for (auto const &pair : params) {
    cout << pair.first << ": [";
    bool first = true;
    for (auto const &item : pair.second) {
      cout << (first ? "" : ", ") << item;
      first = false;
    }
    cout << "]\n";
  }
  Poke::Pokemon pokemon(77, Poke::Stats(76, 110, 70, 81, 70, 123),
                        Poke::Stats(1, 18, 24, 3, 16, 31),
                        Poke::Stats(93, 129, 126, 48, 25, 89));
  cout << pokemon.getStats();
  /*
  PokeData database("pokedata.db");
  std::string query = "A pokemon name"
  Pokemon pokemon(database, query);
  EvCalc calc(pokemon); // consider wrapping EvCalc in a parent class which can
  interact with terminal IO cin << ...; calc.pushEntry(...) auto estimate =
  calc.getEstimates()
  */
  return 0;
}