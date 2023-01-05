#if !defined(ARG_PARSER)
#define ARG_PARSER

#include <map>
#include <string>
#include <vector>

namespace ArgParser {
using vecstring = std::vector<std::string>;
using argmap = std::map<std::string, vecstring>;
argmap getArgs(int, char const **);
bool hasKey(const std::string &, const argmap &);
} // namespace ArgParser

#endif // ARG_PARSER
