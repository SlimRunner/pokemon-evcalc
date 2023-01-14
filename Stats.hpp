#if !defined(STATS)
#define STATS

namespace Poke {

class Stats {
private:
public:
  const int hp;
  const int atk;
  const int def;
  const int spAtk;
  const int spDef;
  const int spd;

  Stats() : hp(0), atk(0), def(0), spAtk(0), spDef(0), spd(0) {
    /* nothing to do */
  }
  Stats(int h, int a, int d, int sa, int sd, int sp)
      : hp(h), atk(a), def(d), spAtk(sa), spDef(sd), spd(sp) {
    /* nothing to do */
  }
};

} // namespace Poke

#endif // STATS
