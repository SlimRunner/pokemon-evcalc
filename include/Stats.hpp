#if !defined(STATS)
#define STATS

#include <array>
#include <stdexcept>
#include <string>

namespace Poke {

enum class StatNames { HP, Attack, Defense, SpAttack, SpDefense, Speed };

template <typename T> class Stats {
private:
public:
  const T hp;
  const T atk;
  const T def;
  const T spAtk;
  const T spDef;
  const T spd;

  Stats() : hp(0), atk(0), def(0), spAtk(0), spDef(0), spd(0) {
    /* nothing to do */
  }
  Stats(T h, T a, T d, T sa, T sd, T sp)
      : hp(h), atk(a), def(d), spAtk(sa), spDef(sd), spd(sp) {
    /* nothing to do */
  }
  Stats(std::array<T, 6> stats)
      : hp(stats[0]), atk(stats[1]), def(stats[2]), spAtk(stats[3]),
        spDef(stats[4]), spd(stats[5]) {
    /* nothing to do */
  }

  const T &operator[](const StatNames stname) const {
    switch (stname) {
    case StatNames::HP:
      return hp;
      break;
    case StatNames::Attack:
      return atk;
      break;
    case StatNames::Defense:
      return def;
      break;
    case StatNames::SpAttack:
      return spAtk;
      break;
    case StatNames::SpDefense:
      return spDef;
      break;
    case StatNames::Speed:
      return spd;
      break;

    default:
      // TODO: use custom exeptions
      throw std::invalid_argument("Stat index is not within enumeration.");
      break;
    }
  }

  const T &operator[](const std::string stname) const {
    std::string lowName = stname;
    switch (stname) {
    case "HP":
    case "hp":
      return hp;
      break;
    case "Attack":
    case "Atk":
      return atk;
      break;
    case "Defense":
    case "Def":
      return def;
      break;
    case "SpAttack":
    case "SpA":
      return spAtk;
      break;
    case "SpDefense":
    case "SpD":
      return spDef;
      break;
    case "Speed":
    case "Spd":
      return spd;
      break;

    default:
      // TODO: use custom exeptions
      throw std::invalid_argument("Undefined stat name");
      break;
    }
  }
};

using iStats = Stats<int>;
using bStats = Stats<bool>;

} // namespace Poke

#endif // STATS
