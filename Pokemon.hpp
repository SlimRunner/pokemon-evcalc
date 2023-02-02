#if !defined(POKEMON)
#define POKEMON

#include "Nature.hpp"
#include "Stats.hpp"

namespace Poke {

class Pokemon {
private:
  int m_level;
  const Nature m_nature;
  Nature m_mint;
  /*
  Moveset m_moveset;
  Ability m_ability;
  Characteristic m_character;
  */
public:
  iStats base;
  iStats IVs;
  iStats EVs;
  iStats fixmod;
  // bStats hyperT;

  // Pokemon();
  Pokemon(int lvl, Nature nat);
  Pokemon(int lvl, iStats base, iStats ivs, iStats evs, Nature nat);
  Pokemon(int lvl, iStats base, iStats ivs, iStats evs, iStats fixed,
          Nature nat);

  ~Pokemon();

  iStats getStats();
  iStats getMaxStats(int lvl);
  iStats getMinStats(int lvl);
};

const iStats BEST_IVS = iStats(31, 31, 31, 31, 31, 31);
const iStats MAX_EVS = iStats(252, 252, 252, 252, 252, 252);

} // namespace Poke

#endif // POKEMON
