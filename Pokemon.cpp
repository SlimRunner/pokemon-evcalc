#include "Pokemon.hpp"
#include <cmath>

int calcHP(int base, int iv, int ev, int lvl) {
  return (2 * base + iv + ev / 4) * lvl / 100 + lvl + 10;
}

int calcOther(int base, int iv, int ev, int lvl, float nat) {
  return std::floor(((2 * base + iv + ev / 4) * lvl / 100 + 5) * nat);
}

namespace Poke {

Pokemon::Pokemon() : m_level(1), base(), IVs(), EVs() {}

Pokemon::Pokemon(int lvl) : m_level(lvl), base(), IVs(), EVs() {}

Pokemon::Pokemon(int lvl, Stats base, Stats ivs, Stats evs)
    : m_level(lvl), base(base), IVs(ivs), EVs(evs) {}

Pokemon::Pokemon(int lvl, Stats base, Stats ivs, Stats evs, Stats fixed)
    : m_level(lvl), base(base), IVs(ivs), EVs(evs), fixmod(fixed) {}

Pokemon::~Pokemon() {}

Stats Pokemon::getStats() {
  const float nat[5] = {1, 1, 1, 1, 1};
  return Stats(
      (!fixmod.hp ? calcHP(base.hp, IVs.hp, EVs.hp, m_level) : fixmod.hp),
      (!fixmod.atk ? calcOther(base.atk, IVs.atk, EVs.atk, m_level, nat[0])
                   : fixmod.atk),
      (!fixmod.def ? calcOther(base.def, IVs.def, EVs.def, m_level, nat[1])
                   : fixmod.def),
      (!fixmod.spAtk ? calcOther(base.spAtk, IVs.spAtk, EVs.spAtk, m_level, nat[2])
                     : fixmod.spAtk),
      (!fixmod.spDef ? calcOther(base.spDef, IVs.spDef, EVs.spDef, m_level, nat[3])
                     : fixmod.spDef),
      (!fixmod.spd ? calcOther(base.spd, IVs.spd, EVs.spd, m_level, nat[4])
                   : fixmod.spd));
}

} // namespace Poke
