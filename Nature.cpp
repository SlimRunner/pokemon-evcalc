#include "Nature.hpp"

#include <array>
#include <map>
#include <stdexcept>
#include <utility>

namespace Poke {

const std::map<std::string, NatureEnum> NAT_PAIRS = {
    {"Hardy", NatureEnum::Hardy},     {"Lonely", NatureEnum::Lonely},
    {"Brave", NatureEnum::Brave},     {"Adamant", NatureEnum::Adamant},
    {"Naughty", NatureEnum::Naughty}, {"Bold", NatureEnum::Bold},
    {"Docile", NatureEnum::Docile},   {"Relaxed", NatureEnum::Relaxed},
    {"Impish", NatureEnum::Impish},   {"Lax", NatureEnum::Lax},
    {"Timid", NatureEnum::Timid},     {"Hasty", NatureEnum::Hasty},
    {"Serious", NatureEnum::Serious}, {"Jolly", NatureEnum::Jolly},
    {"Naive", NatureEnum::Naive},     {"Modest", NatureEnum::Modest},
    {"Mild", NatureEnum::Mild},       {"Quiet", NatureEnum::Quiet},
    {"Bashful", NatureEnum::Bashful}, {"Rash", NatureEnum::Rash},
    {"Calm", NatureEnum::Calm},       {"Gentle", NatureEnum::Gentle},
    {"Sassy", NatureEnum::Sassy},     {"Careful", NatureEnum::Careful},
    {"Quirky", NatureEnum::Quirky}};

using StatPairs = std::pair<StatNames, StatNames>;
const std::map<NatureEnum, StatPairs> NAT_MODS = {
    {NatureEnum::Lonely, {StatNames::Attack, StatNames::Defense}},
    {NatureEnum::Brave, {StatNames::Attack, StatNames::Speed}},
    {NatureEnum::Adamant, {StatNames::Attack, StatNames::SpAttack}},
    {NatureEnum::Naughty, {StatNames::Attack, StatNames::SpDefense}},
    {NatureEnum::Bold, {StatNames::Defense, StatNames::Attack}},
    {NatureEnum::Relaxed, {StatNames::Defense, StatNames::Speed}},
    {NatureEnum::Impish, {StatNames::Defense, StatNames::SpAttack}},
    {NatureEnum::Lax, {StatNames::Defense, StatNames::SpDefense}},
    {NatureEnum::Timid, {StatNames::Speed, StatNames::Attack}},
    {NatureEnum::Hasty, {StatNames::Speed, StatNames::Defense}},
    {NatureEnum::Jolly, {StatNames::Speed, StatNames::SpAttack}},
    {NatureEnum::Naive, {StatNames::Speed, StatNames::SpDefense}},
    {NatureEnum::Modest, {StatNames::SpAttack, StatNames::Attack}},
    {NatureEnum::Mild, {StatNames::SpAttack, StatNames::Defense}},
    {NatureEnum::Quiet, {StatNames::SpAttack, StatNames::Speed}},
    {NatureEnum::Rash, {StatNames::SpAttack, StatNames::SpDefense}},
    {NatureEnum::Calm, {StatNames::SpDefense, StatNames::Attack}},
    {NatureEnum::Gentle, {StatNames::SpDefense, StatNames::Defense}},
    {NatureEnum::Sassy, {StatNames::SpDefense, StatNames::Speed}},
    {NatureEnum::Careful, {StatNames::SpDefense, StatNames::SpAttack}}};

Nature::Nature(NatureEnum nat) : m_nat(nat) {}

Nature::Nature(std::string nat) { this->change(nat); }

Nature::~Nature() {}

void Nature::change(NatureEnum nat) { m_nat = nat; }

void Nature::change(std::string nat) {
  auto natPtr = NAT_PAIRS.find(nat);
  if (natPtr != NAT_PAIRS.end()) {
    m_nat = natPtr->second;
  }
  throw std::invalid_argument("Undefined nature");
}

iStats Nature::getStatMods() {
  std::array<int, 6> blist;
  const auto iMods = NAT_MODS.find(m_nat);
  const auto voidM = NAT_MODS.end();
  const StatNames pkBuff = (iMods == voidM ? StatNames::HP : iMods->second.first);
  const StatNames pkNerf = (iMods == voidM ? StatNames::HP : iMods->second.second);
  for (std::size_t i = 0; i < blist.size(); ++i) {
    auto index = static_cast<StatNames>(i);
    if (index == pkBuff) {
      blist.at(i) = 11;
    } else if (index == pkNerf) {
      blist.at(i) = 9;
    } else {
      blist.at(i) = 10;
    }
  }
  blist.at(0) = 0;

  return iStats(blist[0], blist[1], blist[2], blist[3], blist[4], blist[5]);
}

} // namespace Poke
