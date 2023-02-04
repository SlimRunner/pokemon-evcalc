#if !defined(NATURE)
#define NATURE

#include <string>

#include "Stats.hpp"

namespace Poke {

enum class NatureEnum {
  Hardy,
  Lonely,
  Brave,
  Adamant,
  Naughty,
  Bold,
  Docile,
  Relaxed,
  Impish,
  Lax,
  Timid,
  Hasty,
  Serious,
  Jolly,
  Naive,
  Modest,
  Mild,
  Quiet,
  Bashful,
  Rash,
  Calm,
  Gentle,
  Sassy,
  Careful,
  Quirky
};

class Nature {
private:
  NatureEnum m_nat;

public:
  Nature(NatureEnum);
  Nature(std::string);
  ~Nature();

  void change(NatureEnum);
  void change(std::string);

  iStats getStatMods();
};

} // namespace Poke

#endif // NATURE
