#include "Pokemon.hpp"
#include <cmath>

int calcHP(int base, int iv, int ev, int lvl) {
  return (2 * base + iv + ev / 4) * lvl / 100 + lvl + 10;
}

int calcOther(int base, int iv, int ev, int lvl, int nat) {
  return ((2 * base + iv + ev / 4) * lvl / 100 + 5) * nat / 10;
}

namespace Poke {

// Pokemon::Pokemon() : m_level(1), base(), IVs(), EVs() {}

Pokemon::Pokemon(int lvl, Nature nat)
    : m_level(lvl), m_nature(nat), m_mint(nat), base(), IVs(), EVs() {}

Pokemon::Pokemon(int lvl, iStats base, iStats ivs, iStats evs, Nature nat)
    : m_level(lvl), m_nature(nat), m_mint(nat), base(base), IVs(ivs), EVs(evs) {
}

Pokemon::Pokemon(int lvl, iStats base, iStats ivs, iStats evs, iStats fixed,
                 Nature nat)
    : m_level(lvl), m_nature(nat), m_mint(nat), base(base), IVs(ivs), EVs(evs),
      fixmod(fixed) {}

Pokemon::~Pokemon() {}

iStats Pokemon::getStats() {
  const iStats nat = m_mint.getStatMods();
  return iStats(
      (!fixmod.hp ? calcHP(base.hp, IVs.hp, EVs.hp, m_level) : fixmod.hp),
      (!fixmod.atk ? calcOther(base.atk, IVs.atk, EVs.atk, m_level, nat.atk)
                   : fixmod.atk),
      (!fixmod.def ? calcOther(base.def, IVs.def, EVs.def, m_level, nat.def)
                   : fixmod.def),
      (!fixmod.spAtk
           ? calcOther(base.spAtk, IVs.spAtk, EVs.spAtk, m_level, nat.spAtk)
           : fixmod.spAtk),
      (!fixmod.spDef
           ? calcOther(base.spDef, IVs.spDef, EVs.spDef, m_level, nat.spDef)
           : fixmod.spDef),
      (!fixmod.spd ? calcOther(base.spd, IVs.spd, EVs.spd, m_level, nat.spd)
                   : fixmod.spd));
}

iStats Pokemon::getMaxStats(int lvl) {
  const iStats nat = iStats(11, 11, 11, 11, 11, 11);
  return iStats(
      (!fixmod.hp ? calcHP(base.hp, BEST_IVS.hp, MAX_EVS.hp, lvl) : fixmod.hp),
      (!fixmod.atk
           ? calcOther(base.atk, BEST_IVS.atk, MAX_EVS.atk, lvl, nat.atk)
           : fixmod.atk),
      (!fixmod.def
           ? calcOther(base.def, BEST_IVS.def, MAX_EVS.def, lvl, nat.def)
           : fixmod.def),
      (!fixmod.spAtk ? calcOther(base.spAtk, BEST_IVS.spAtk, MAX_EVS.spAtk, lvl,
                                 nat.spAtk)
                     : fixmod.spAtk),
      (!fixmod.spDef ? calcOther(base.spDef, BEST_IVS.spDef, MAX_EVS.spDef, lvl,
                                 nat.spDef)
                     : fixmod.spDef),
      (!fixmod.spd
           ? calcOther(base.spd, BEST_IVS.spd, MAX_EVS.spd, lvl, nat.spd)
           : fixmod.spd));
}

iStats Pokemon::getMinStats(int lvl) {
  const iStats nat = iStats(9, 9, 9, 9, 9, 9);
  return iStats(
      (!fixmod.hp ? calcHP(base.hp, 0, 0, lvl) : fixmod.hp),
      (!fixmod.atk ? calcOther(base.atk, 0, 0, lvl, nat.atk) : fixmod.atk),
      (!fixmod.def ? calcOther(base.def, 0, 0, lvl, nat.def) : fixmod.def),
      (!fixmod.spAtk ? calcOther(base.spAtk, 0, 0, lvl, nat.spAtk)
                     : fixmod.spAtk),
      (!fixmod.spDef ? calcOther(base.spDef, 0, 0, lvl, nat.spDef)
                     : fixmod.spDef),
      (!fixmod.spd ? calcOther(base.spd, 0, 0, lvl, nat.spd) : fixmod.spd));
}

} // namespace Poke
