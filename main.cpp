#include "argParser.hpp"
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

#define IO_USE                                                                 \
  using std::cout;                                                             \
  using std::cin;                                                              \
  using std::endl;                                                             \
  using std::string;

#define AP_USE                                                                 \
  using ArgParser::argmap;                                                     \
  using ArgParser::getArgs;                                                    \
  using ArgParser::hasKey;

int main(int argc, char const *argv[]) {
  IO_USE;
  AP_USE;
  argmap params = getArgs(argc, argv);
  for (auto const& pair : params) {
    cout << pair.first << ": [";
    bool first = true;
    for (auto const& item : pair.second) {
      cout << (first ? "" : ", ") << item;
      first = false;
    }
    cout << "]\n";
  }
  /*
  PokeData database("pokedata.db");
  std::string query = "A pokemon name"
  Pokemon pokemon(database, query);
  EvCalc calc(pokemon); // consider wrapping EvCalc in a parent class which can interact with terminal IO
  cin << ...;
  calc.pushEntry(...)
  auto estimate = calc.getEstimates()
  */
  return 0;
}