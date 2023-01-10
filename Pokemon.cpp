#include "Pokemon.hpp"
#include <cmath>

int calcHP(int base, int iv, int ev, int lvl) {
  return (2 * base + iv + ev / 4) * lvl / 100 + lvl + 10;
}

int calcOther(int base, int iv, int ev, int lvl, float nat) {
  return std::floor(((2 * base + iv + ev / 4) * lvl / 100 + 5) * nat);
}

namespace Poke {

Pokemon::Pokemon() : m_level(1), baseStats(), IVs(), EVs() {}

Pokemon::Pokemon(int lvl) : m_level(lvl), baseStats(), IVs(), EVs() {}

Pokemon::Pokemon(int lvl, Stats base, Stats ivs, Stats evs)
    : m_level(lvl), baseStats(base), IVs(ivs), EVs(evs) {}

Pokemon::Pokemon(int lvl, Stats base, Stats ivs, Stats evs, Stats fixed)
    : m_level(lvl), baseStats(base), IVs(ivs), EVs(evs), fixModifier(fixed) {}

Pokemon::~Pokemon() {}

Stats Pokemon::getStats() {
  const float nat = 1.1;
  return Stats(
      (!fixModifier.hp ? calcHP(baseStats.hp, IVs.hp, EVs.hp, m_level)
                       : fixModifier.hp),
      (!fixModifier.attack
           ? calcOther(baseStats.attack, IVs.attack, EVs.attack, m_level, nat)
           : fixModifier.attack),
      (!fixModifier.defense ? calcOther(baseStats.defense, IVs.defense,
                                        EVs.defense, m_level, nat)
                            : fixModifier.defense),
      (!fixModifier.spAttack ? calcOther(baseStats.spAttack, IVs.spAttack,
                                         EVs.spAttack, m_level, nat)
                             : fixModifier.spAttack),
      (!fixModifier.spDefense ? calcOther(baseStats.spDefense, IVs.spDefense,
                                          EVs.spDefense, m_level, nat)
                              : fixModifier.spDefense),
      (!fixModifier.speed
           ? calcOther(baseStats.speed, IVs.speed, EVs.speed, m_level, nat)
           : fixModifier.speed));
}

} // namespace Poke
