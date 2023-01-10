#if !defined(POKEMON)
#define POKEMON

#include "Stats.hpp"

namespace Poke {

class Pokemon {
private:
  int m_level;
  /*
  Moveset m_moveset;
  Ability m_ability;
  Characteristic m_character;
  */
public:
  Stats baseStats;
  Stats IVs;
  Stats EVs;
  Stats fixModifier;

  Pokemon();
  Pokemon(int lvl);
  Pokemon(int lvl, Stats base, Stats ivs, Stats evs);
  Pokemon(int lvl, Stats base, Stats ivs, Stats evs, Stats fixed);

  ~Pokemon();

  Stats getStats();
};

} // namespace Poke

#endif // POKEMON
