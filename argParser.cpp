#include "argParser.hpp"

namespace ArgParser {
argmap getArgs(int argc, char const *argv[]) {
  if (argc == 1) {
    return argmap();
  }
  argmap comms;
  bool parsing = false, first = true;
  std::string k;
  vecstring v;
  for (int i = 1; i < argc; ++i) {
    if (argv[i][0] == '-') {
      if (!first) {
        comms.emplace(k, v);
      }
      first = false;
      k = std::string(argv[i]);
      parsing = true;
    } else if (parsing) {
      v.push_back(std::string(argv[i]));
    }
  }
  comms.emplace(k, v);
  return comms;
}

bool hasKey(const std::string &key, const argmap &args) {
  return args.find(key) != args.end();
}
} // namespace ArgParser