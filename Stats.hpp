#if !defined(STATS)
#define STATS

namespace Poke {

class Stats {
private:
public:
  const int hp;
  const int attack;
  const int defense;
  const int spAttack;
  const int spDefense;
  const int speed;

  Stats() : hp(0), attack(0), defense(0), spAttack(0), spDefense(0), speed(0) {
    /* nothing to do */
  }
  Stats(int h, int a, int d, int sa, int sd, int sp)
      : hp(h), attack(a), defense(d), spAttack(sa), spDefense(sd), speed(sp) {
    /* nothing to do */
  }
};

} // namespace Poke

#endif // STATS
