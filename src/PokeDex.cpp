#include "PokeDex.hpp"

#include <array>
#include <map>
#include <vector>
#include <string>
#include <utility>

namespace Poke {

using StatSeq = std::array<int, 6>;
using FormPair = std::pair<std::string, StatSeq>;
using FormCount = std::vector<FormPair>;
using StatMap = std::map<PokeNames, FormCount>;

StatMap pkStats = {
  {PokeNames::Bulbasaur, {
    {"Normal", {45, 49, 49, 65, 65, 45}}}},
  {PokeNames::Ivysaur, {
    {"Normal", {60, 62, 63, 80, 80, 60}}}},
  {PokeNames::Venusaur, {
    {"Normal", {80, 82, 83, 100, 100, 80}},
    {"Mega Venusaur", {80, 100, 123, 122, 120, 80}}}},
  {PokeNames::Charmander, {
    {"Normal", {39, 52, 43, 60, 50, 65}}}},
  {PokeNames::Charmeleon, {
    {"Normal", {58, 64, 58, 80, 65, 80}}}},
  {PokeNames::Charizard, {
    {"Normal", {78, 84, 78, 109, 85, 100}},
    {"Mega Charizard X", {78, 130, 111, 130, 85, 100}},
    {"Mega Charizard Y", {78, 104, 78, 159, 115, 100}}}},
  {PokeNames::Squirtle, {
    {"Normal", {44, 48, 65, 50, 64, 43}}}},
  {PokeNames::Wartortle, {
    {"Normal", {59, 63, 80, 65, 80, 58}}}},
  {PokeNames::Blastoise, {
    {"Normal", {79, 83, 100, 85, 105, 78}},
    {"Mega Blastoise", {79, 103, 120, 135, 115, 78}}}},
  {PokeNames::Caterpie, {
    {"Normal", {45, 30, 35, 20, 20, 45}}}},
  {PokeNames::Metapod, {
    {"Normal", {50, 20, 55, 25, 25, 30}}}},
  {PokeNames::Butterfree, {
    {"Normal", {60, 45, 50, 90, 80, 70}}}},
  {PokeNames::Weedle, {
    {"Normal", {40, 35, 30, 20, 20, 50}}}},
  {PokeNames::Kakuna, {
    {"Normal", {45, 25, 50, 25, 25, 35}}}},
  {PokeNames::Beedrill, {
    {"Normal", {65, 90, 40, 45, 80, 75}},
    {"Mega Beedrill", {65, 150, 40, 15, 80, 145}}}},
  {PokeNames::Pidgey, {
    {"Normal", {40, 45, 40, 35, 35, 56}}}},
  {PokeNames::Pidgeotto, {
    {"Normal", {63, 60, 55, 50, 50, 71}}}},
  {PokeNames::Pidgeot, {
    {"Normal", {83, 80, 75, 70, 70, 101}},
    {"Mega Pidgeot", {83, 80, 80, 135, 80, 121}}}},
  {PokeNames::Rattata, {
    {"Normal", {30, 56, 35, 25, 35, 72}},
    {"Alolan Rattata", {30, 56, 35, 25, 35, 72}}}},
  {PokeNames::Raticate, {
    {"Normal", {55, 81, 60, 50, 70, 97}},
    {"Alolan Raticate", {75, 71, 70, 40, 80, 77}}}},
  {PokeNames::Spearow, {
    {"Normal", {40, 60, 30, 31, 31, 70}}}},
  {PokeNames::Fearow, {
    {"Normal", {65, 90, 65, 61, 61, 100}}}},
  {PokeNames::Ekans, {
    {"Normal", {35, 60, 44, 40, 54, 55}}}},
  {PokeNames::Arbok, {
    {"Normal", {60, 95, 69, 65, 79, 80}}}},
  {PokeNames::Pikachu, {
    {"Normal", {35, 55, 40, 50, 50, 90}},
    {"Partner Pikachu", {45, 80, 50, 75, 60, 120}}}},
  {PokeNames::Raichu, {
    {"Normal", {60, 90, 55, 90, 80, 110}},
    {"Alolan Raichu", {60, 85, 50, 95, 85, 110}}}},
  {PokeNames::Sandshrew, {
    {"Normal", {50, 75, 85, 20, 30, 40}},
    {"Alolan Sandshrew", {50, 75, 90, 10, 35, 40}}}},
  {PokeNames::Sandslash, {
    {"Normal", {75, 100, 110, 45, 55, 65}},
    {"Alolan Sandslash", {75, 100, 120, 25, 65, 65}}}},
  {PokeNames::Nidoran_Girl, {
    {"Normal", {55, 47, 52, 40, 40, 41}}}},
  {PokeNames::Nidorina, {
    {"Normal", {70, 62, 67, 55, 55, 56}}}},
  {PokeNames::Nidoqueen, {
    {"Normal", {90, 92, 87, 75, 85, 76}}}},
  {PokeNames::Nidoran_Boy, {
    {"Normal", {46, 57, 40, 40, 40, 50}}}},
  {PokeNames::Nidorino, {
    {"Normal", {61, 72, 57, 55, 55, 65}}}},
  {PokeNames::Nidoking, {
    {"Normal", {81, 102, 77, 85, 75, 85}}}},
  {PokeNames::Clefairy, {
    {"Normal", {70, 45, 48, 60, 65, 35}}}},
  {PokeNames::Clefable, {
    {"Normal", {95, 70, 73, 95, 90, 60}}}},
  {PokeNames::Vulpix, {
    {"Normal", {38, 41, 40, 50, 65, 65}},
    {"Alolan Vulpix", {38, 41, 40, 50, 65, 65}}}},
  {PokeNames::Ninetales, {
    {"Normal", {73, 76, 75, 81, 100, 100}},
    {"Alolan Ninetales", {73, 67, 75, 81, 100, 109}}}},
  {PokeNames::Jigglypuff, {
    {"Normal", {115, 45, 20, 45, 25, 20}}}},
  {PokeNames::Wigglytuff, {
    {"Normal", {140, 70, 45, 85, 50, 45}}}},
  {PokeNames::Zubat, {
    {"Normal", {40, 45, 35, 30, 40, 55}}}},
  {PokeNames::Golbat, {
    {"Normal", {75, 80, 70, 65, 75, 90}}}},
  {PokeNames::Oddish, {
    {"Normal", {45, 50, 55, 75, 65, 30}}}},
  {PokeNames::Gloom, {
    {"Normal", {60, 65, 70, 85, 75, 40}}}},
  {PokeNames::Vileplume, {
    {"Normal", {75, 80, 85, 110, 90, 50}}}},
  {PokeNames::Paras, {
    {"Normal", {35, 70, 55, 45, 55, 25}}}},
  {PokeNames::Parasect, {
    {"Normal", {60, 95, 80, 60, 80, 30}}}},
  {PokeNames::Venonat, {
    {"Normal", {60, 55, 50, 40, 55, 45}}}},
  {PokeNames::Venomoth, {
    {"Normal", {70, 65, 60, 90, 75, 90}}}},
  {PokeNames::Diglett, {
    {"Normal", {10, 55, 25, 35, 45, 95}},
    {"Alolan Diglett", {10, 55, 30, 35, 45, 90}}}},
  {PokeNames::Dugtrio, {
    {"Normal", {35, 100, 50, 50, 70, 120}},
    {"Alolan Dugtrio", {35, 100, 60, 50, 70, 110}}}},
  {PokeNames::Meowth, {
    {"Normal", {40, 45, 35, 40, 40, 90}},
    {"Alolan Meowth", {40, 35, 35, 50, 40, 90}},
    {"Galarian Meowth", {50, 65, 55, 40, 40, 40}}}},
  {PokeNames::Persian, {
    {"Normal", {65, 70, 60, 65, 65, 115}},
    {"Alolan Persian", {65, 60, 60, 75, 65, 115}}}},
  {PokeNames::Psyduck, {
    {"Normal", {50, 52, 48, 65, 50, 55}}}},
  {PokeNames::Golduck, {
    {"Normal", {80, 82, 78, 95, 80, 85}}}},
  {PokeNames::Mankey, {
    {"Normal", {40, 80, 35, 35, 45, 70}}}},
  {PokeNames::Primeape, {
    {"Normal", {65, 105, 60, 60, 70, 95}}}},
  {PokeNames::Growlithe, {
    {"Normal", {55, 70, 45, 70, 50, 60}},
    {"Hisuian Growlithe", {60, 75, 45, 65, 50, 55}}}},
  {PokeNames::Arcanine, {
    {"Normal", {90, 110, 80, 100, 80, 95}},
    {"Hisuian Arcanine", {95, 115, 80, 95, 80, 90}}}},
  {PokeNames::Poliwag, {
    {"Normal", {40, 50, 40, 40, 40, 90}}}},
  {PokeNames::Poliwhirl, {
    {"Normal", {65, 65, 65, 50, 50, 90}}}},
  {PokeNames::Poliwrath, {
    {"Normal", {90, 95, 95, 70, 90, 70}}}},
  {PokeNames::Abra, {
    {"Normal", {25, 20, 15, 105, 55, 90}}}},
  {PokeNames::Kadabra, {
    {"Normal", {40, 35, 30, 120, 70, 105}}}},
  {PokeNames::Alakazam, {
    {"Normal", {55, 50, 45, 135, 95, 120}},
    {"Mega Alakazam", {55, 50, 65, 175, 105, 150}}}},
  {PokeNames::Machop, {
    {"Normal", {70, 80, 50, 35, 35, 35}}}},
  {PokeNames::Machoke, {
    {"Normal", {80, 100, 70, 50, 60, 45}}}},
  {PokeNames::Machamp, {
    {"Normal", {90, 130, 80, 65, 85, 55}}}},
  {PokeNames::Bellsprout, {
    {"Normal", {50, 75, 35, 70, 30, 40}}}},
  {PokeNames::Weepinbell, {
    {"Normal", {65, 90, 50, 85, 45, 55}}}},
  {PokeNames::Victreebel, {
    {"Normal", {80, 105, 65, 100, 70, 70}}}},
  {PokeNames::Tentacool, {
    {"Normal", {40, 40, 35, 50, 100, 70}}}},
  {PokeNames::Tentacruel, {
    {"Normal", {80, 70, 65, 80, 120, 100}}}},
  {PokeNames::Geodude, {
    {"Normal", {40, 80, 100, 30, 30, 20}},
    {"Alolan Geodude", {40, 80, 100, 30, 30, 20}}}},
  {PokeNames::Graveler, {
    {"Normal", {55, 95, 115, 45, 45, 35}},
    {"Alolan Graveler", {55, 95, 115, 45, 45, 35}}}},
  {PokeNames::Golem, {
    {"Normal", {80, 120, 130, 55, 65, 45}},
    {"Alolan Golem", {80, 120, 130, 55, 65, 45}}}},
  {PokeNames::Ponyta, {
    {"Normal", {50, 85, 55, 65, 65, 90}},
    {"Galarian Ponyta", {50, 85, 55, 65, 65, 90}}}},
  {PokeNames::Rapidash, {
    {"Normal", {65, 100, 70, 80, 80, 105}},
    {"Galarian Rapidash", {65, 100, 70, 80, 80, 105}}}},
  {PokeNames::Slowpoke, {
    {"Normal", {90, 65, 65, 40, 40, 15}},
    {"Galarian Slowpoke", {90, 65, 65, 40, 40, 15}}}},
  {PokeNames::Slowbro, {
    {"Normal", {95, 75, 110, 100, 80, 30}},
    {"Mega Slowbro", {95, 75, 180, 130, 80, 30}},
    {"Galarian Slowbro", {95, 100, 95, 100, 70, 30}}}},
  {PokeNames::Magnemite, {
    {"Normal", {25, 35, 70, 95, 55, 45}}}},
  {PokeNames::Magneton, {
    {"Normal", {50, 60, 95, 120, 70, 70}}}},
  {PokeNames::Farfetchd, {
    {"Normal", {52, 90, 55, 58, 62, 60}},
    {"Galarian Farfetch'd", {52, 95, 55, 58, 62, 55}}}},
  {PokeNames::Doduo, {
    {"Normal", {35, 85, 45, 35, 35, 75}}}},
  {PokeNames::Dodrio, {
    {"Normal", {60, 110, 70, 60, 60, 110}}}},
  {PokeNames::Seel, {
    {"Normal", {65, 45, 55, 45, 70, 45}}}},
  {PokeNames::Dewgong, {
    {"Normal", {90, 70, 80, 70, 95, 70}}}},
  {PokeNames::Grimer, {
    {"Normal", {80, 80, 50, 40, 50, 25}},
    {"Alolan Grimer", {80, 80, 50, 40, 50, 25}}}},
  {PokeNames::Muk, {
    {"Normal", {105, 105, 75, 65, 100, 50}},
    {"Alolan Muk", {105, 105, 75, 65, 100, 50}}}},
  {PokeNames::Shellder, {
    {"Normal", {30, 65, 100, 45, 25, 40}}}},
  {PokeNames::Cloyster, {
    {"Normal", {50, 95, 180, 85, 45, 70}}}},
  {PokeNames::Gastly, {
    {"Normal", {30, 35, 30, 100, 35, 80}}}},
  {PokeNames::Haunter, {
    {"Normal", {45, 50, 45, 115, 55, 95}}}},
  {PokeNames::Gengar, {
    {"Normal", {60, 65, 60, 130, 75, 110}},
    {"Mega Gengar", {60, 65, 80, 170, 95, 130}}}},
  {PokeNames::Onix, {
    {"Normal", {35, 45, 160, 30, 45, 70}}}},
  {PokeNames::Drowzee, {
    {"Normal", {60, 48, 45, 43, 90, 42}}}},
  {PokeNames::Hypno, {
    {"Normal", {85, 73, 70, 73, 115, 67}}}},
  {PokeNames::Krabby, {
    {"Normal", {30, 105, 90, 25, 25, 50}}}},
  {PokeNames::Kingler, {
    {"Normal", {55, 130, 115, 50, 50, 75}}}},
  {PokeNames::Voltorb, {
    {"Normal", {40, 30, 50, 55, 55, 100}},
    {"Hisuian Voltorb", {40, 30, 50, 55, 55, 100}}}},
  {PokeNames::Electrode, {
    {"Normal", {60, 50, 70, 80, 80, 150}},
    {"Hisuian Electrode", {60, 50, 70, 80, 80, 150}}}},
  {PokeNames::Exeggcute, {
    {"Normal", {60, 40, 80, 60, 45, 40}}}},
  {PokeNames::Exeggutor, {
    {"Normal", {95, 95, 85, 125, 75, 55}},
    {"Alolan Exeggutor", {95, 105, 85, 125, 75, 45}}}},
  {PokeNames::Cubone, {
    {"Normal", {50, 50, 95, 40, 50, 35}}}},
  {PokeNames::Marowak, {
    {"Normal", {60, 80, 110, 50, 80, 45}},
    {"Alolan Marowak", {60, 80, 110, 50, 80, 45}}}},
  {PokeNames::Hitmonlee, {
    {"Normal", {50, 120, 53, 35, 110, 87}}}},
  {PokeNames::Hitmonchan, {
    {"Normal", {50, 105, 79, 35, 110, 76}}}},
  {PokeNames::Lickitung, {
    {"Normal", {90, 55, 75, 60, 75, 30}}}},
  {PokeNames::Koffing, {
    {"Normal", {40, 65, 95, 60, 45, 35}}}},
  {PokeNames::Weezing, {
    {"Normal", {65, 90, 120, 85, 70, 60}},
    {"Galarian Weezing", {65, 90, 120, 85, 70, 60}}}},
  {PokeNames::Rhyhorn, {
    {"Normal", {80, 85, 95, 30, 30, 25}}}},
  {PokeNames::Rhydon, {
    {"Normal", {105, 130, 120, 45, 45, 40}}}},
  {PokeNames::Chansey, {
    {"Normal", {250, 5, 5, 35, 105, 50}}}},
  {PokeNames::Tangela, {
    {"Normal", {65, 55, 115, 100, 40, 60}}}},
  {PokeNames::Kangaskhan, {
    {"Normal", {105, 95, 80, 40, 80, 90}},
    {"Mega Kangaskhan", {105, 125, 100, 60, 100, 100}}}},
  {PokeNames::Horsea, {
    {"Normal", {30, 40, 70, 70, 25, 60}}}},
  {PokeNames::Seadra, {
    {"Normal", {55, 65, 95, 95, 45, 85}}}},
  {PokeNames::Goldeen, {
    {"Normal", {45, 67, 60, 35, 50, 63}}}},
  {PokeNames::Seaking, {
    {"Normal", {80, 92, 65, 65, 80, 68}}}},
  {PokeNames::Staryu, {
    {"Normal", {30, 45, 55, 70, 55, 85}}}},
  {PokeNames::Starmie, {
    {"Normal", {60, 75, 85, 100, 85, 115}}}},
  {PokeNames::Mr_Mime, {
    {"Normal", {40, 45, 65, 100, 120, 90}},
    {"Galarian Mr. Mime", {50, 65, 65, 90, 90, 100}}}},
  {PokeNames::Scyther, {
    {"Normal", {70, 110, 80, 55, 80, 105}}}},
  {PokeNames::Jynx, {
    {"Normal", {65, 50, 35, 115, 95, 95}}}},
  {PokeNames::Electabuzz, {
    {"Normal", {65, 83, 57, 95, 85, 105}}}},
  {PokeNames::Magmar, {
    {"Normal", {65, 95, 57, 100, 85, 93}}}},
  {PokeNames::Pinsir, {
    {"Normal", {65, 125, 100, 55, 70, 85}},
    {"Mega Pinsir", {65, 155, 120, 65, 90, 105}}}},
  {PokeNames::Tauros, {
    {"Normal", {75, 100, 95, 40, 70, 110}},
    {"Paldean Tauros Combat Breed", {75, 110, 105, 30, 70, 100}},
    {"Paldean Tauros Blaze Breed", {75, 110, 105, 30, 70, 100}},
    {"Paldean Tauros Aqua Breed", {75, 110, 105, 30, 70, 100}}}},
  {PokeNames::Magikarp, {
    {"Normal", {20, 10, 55, 15, 20, 80}}}},
  {PokeNames::Gyarados, {
    {"Normal", {95, 125, 79, 60, 100, 81}},
    {"Mega Gyarados", {95, 155, 109, 70, 130, 81}}}},
  {PokeNames::Lapras, {
    {"Normal", {130, 85, 80, 85, 95, 60}}}},
  {PokeNames::Ditto, {
    {"Normal", {48, 48, 48, 48, 48, 48}}}},
  {PokeNames::Eevee, {
    {"Normal", {55, 55, 50, 45, 65, 55}},
    {"Partner Eevee", {65, 75, 70, 65, 85, 75}}}},
  {PokeNames::Vaporeon, {
    {"Normal", {130, 65, 60, 110, 95, 65}}}},
  {PokeNames::Jolteon, {
    {"Normal", {65, 65, 60, 110, 95, 130}}}},
  {PokeNames::Flareon, {
    {"Normal", {65, 130, 60, 95, 110, 65}}}},
  {PokeNames::Porygon, {
    {"Normal", {65, 60, 70, 85, 75, 40}}}},
  {PokeNames::Omanyte, {
    {"Normal", {35, 40, 100, 90, 55, 35}}}},
  {PokeNames::Omastar, {
    {"Normal", {70, 60, 125, 115, 70, 55}}}},
  {PokeNames::Kabuto, {
    {"Normal", {30, 80, 90, 55, 45, 55}}}},
  {PokeNames::Kabutops, {
    {"Normal", {60, 115, 105, 65, 70, 80}}}},
  {PokeNames::Aerodactyl, {
    {"Normal", {80, 105, 65, 60, 75, 130}},
    {"Mega Aerodactyl", {80, 135, 85, 70, 95, 150}}}},
  {PokeNames::Snorlax, {
    {"Normal", {160, 110, 65, 65, 110, 30}}}},
  {PokeNames::Articuno, {
    {"Normal", {90, 85, 100, 95, 125, 85}},
    {"Galarian Articuno", {90, 85, 85, 125, 100, 95}}}},
  {PokeNames::Zapdos, {
    {"Normal", {90, 90, 85, 125, 90, 100}},
    {"Galarian Zapdos", {90, 125, 90, 85, 90, 100}}}},
  {PokeNames::Moltres, {
    {"Normal", {90, 100, 90, 125, 85, 90}},
    {"Galarian Moltres", {90, 85, 90, 100, 125, 90}}}},
  {PokeNames::Dratini, {
    {"Normal", {41, 64, 45, 50, 50, 50}}}},
  {PokeNames::Dragonair, {
    {"Normal", {61, 84, 65, 70, 70, 70}}}},
  {PokeNames::Dragonite, {
    {"Normal", {91, 134, 95, 100, 100, 80}}}},
  {PokeNames::Mewtwo, {
    {"Normal", {106, 110, 90, 154, 90, 130}},
    {"Mega Mewtwo X", {106, 190, 100, 154, 100, 130}},
    {"Mega Mewtwo Y", {106, 150, 70, 194, 120, 140}}}},
  {PokeNames::Mew, {
    {"Normal", {100, 100, 100, 100, 100, 100}}}},
  {PokeNames::Chikorita, {
    {"Normal", {45, 49, 65, 49, 65, 45}}}},
  {PokeNames::Bayleef, {
    {"Normal", {60, 62, 80, 63, 80, 60}}}},
  {PokeNames::Meganium, {
    {"Normal", {80, 82, 100, 83, 100, 80}}}},
  {PokeNames::Cyndaquil, {
    {"Normal", {39, 52, 43, 60, 50, 65}}}},
  {PokeNames::Quilava, {
    {"Normal", {58, 64, 58, 80, 65, 80}}}},
  {PokeNames::Typhlosion, {
    {"Normal", {78, 84, 78, 109, 85, 100}},
    {"Hisuian Typhlosion", {73, 84, 78, 119, 85, 95}}}},
  {PokeNames::Totodile, {
    {"Normal", {50, 65, 64, 44, 48, 43}}}},
  {PokeNames::Croconaw, {
    {"Normal", {65, 80, 80, 59, 63, 58}}}},
  {PokeNames::Feraligatr, {
    {"Normal", {85, 105, 100, 79, 83, 78}}}},
  {PokeNames::Sentret, {
    {"Normal", {35, 46, 34, 35, 45, 20}}}},
  {PokeNames::Furret, {
    {"Normal", {85, 76, 64, 45, 55, 90}}}},
  {PokeNames::Hoothoot, {
    {"Normal", {60, 30, 30, 36, 56, 50}}}},
  {PokeNames::Noctowl, {
    {"Normal", {100, 50, 50, 86, 96, 70}}}},
  {PokeNames::Ledyba, {
    {"Normal", {40, 20, 30, 40, 80, 55}}}},
  {PokeNames::Ledian, {
    {"Normal", {55, 35, 50, 55, 110, 85}}}},
  {PokeNames::Spinarak, {
    {"Normal", {40, 60, 40, 40, 40, 30}}}},
  {PokeNames::Ariados, {
    {"Normal", {70, 90, 70, 60, 70, 40}}}},
  {PokeNames::Crobat, {
    {"Normal", {85, 90, 80, 70, 80, 130}}}},
  {PokeNames::Chinchou, {
    {"Normal", {75, 38, 38, 56, 56, 67}}}},
  {PokeNames::Lanturn, {
    {"Normal", {125, 58, 58, 76, 76, 67}}}},
  {PokeNames::Pichu, {
    {"Normal", {20, 40, 15, 35, 35, 60}}}},
  {PokeNames::Cleffa, {
    {"Normal", {50, 25, 28, 45, 55, 15}}}},
  {PokeNames::Igglybuff, {
    {"Normal", {90, 30, 15, 40, 20, 15}}}},
  {PokeNames::Togepi, {
    {"Normal", {35, 20, 65, 40, 65, 20}}}},
  {PokeNames::Togetic, {
    {"Normal", {55, 40, 85, 80, 105, 40}}}},
  {PokeNames::Natu, {
    {"Normal", {40, 50, 45, 70, 45, 70}}}},
  {PokeNames::Xatu, {
    {"Normal", {65, 75, 70, 95, 70, 95}}}},
  {PokeNames::Mareep, {
    {"Normal", {55, 40, 40, 65, 45, 35}}}},
  {PokeNames::Flaaffy, {
    {"Normal", {70, 55, 55, 80, 60, 45}}}},
  {PokeNames::Ampharos, {
    {"Normal", {90, 75, 85, 115, 90, 55}},
    {"Mega Ampharos", {90, 95, 105, 165, 110, 45}}}},
  {PokeNames::Bellossom, {
    {"Normal", {75, 80, 95, 90, 100, 50}}}},
  {PokeNames::Marill, {
    {"Normal", {70, 20, 50, 20, 50, 40}}}},
  {PokeNames::Azumarill, {
    {"Normal", {100, 50, 80, 60, 80, 50}}}},
  {PokeNames::Sudowoodo, {
    {"Normal", {70, 100, 115, 30, 65, 30}}}},
  {PokeNames::Politoed, {
    {"Normal", {90, 75, 75, 90, 100, 70}}}},
  {PokeNames::Hoppip, {
    {"Normal", {35, 35, 40, 35, 55, 50}}}},
  {PokeNames::Skiploom, {
    {"Normal", {55, 45, 50, 45, 65, 80}}}},
  {PokeNames::Jumpluff, {
    {"Normal", {75, 55, 70, 55, 95, 110}}}},
  {PokeNames::Aipom, {
    {"Normal", {55, 70, 55, 40, 55, 85}}}},
  {PokeNames::Sunkern, {
    {"Normal", {30, 30, 30, 30, 30, 30}}}},
  {PokeNames::Sunflora, {
    {"Normal", {75, 75, 55, 105, 85, 30}}}},
  {PokeNames::Yanma, {
    {"Normal", {65, 65, 45, 75, 45, 95}}}},
  {PokeNames::Wooper, {
    {"Normal", {55, 45, 45, 25, 25, 15}},
    {"Paldean Wooper", {55, 45, 45, 25, 25, 15}}}},
  {PokeNames::Quagsire, {
    {"Normal", {95, 85, 85, 65, 65, 35}}}},
  {PokeNames::Espeon, {
    {"Normal", {65, 65, 60, 130, 95, 110}}}},
  {PokeNames::Umbreon, {
    {"Normal", {95, 65, 110, 60, 130, 65}}}},
  {PokeNames::Murkrow, {
    {"Normal", {60, 85, 42, 85, 42, 91}}}},
  {PokeNames::Slowking, {
    {"Normal", {95, 75, 80, 100, 110, 30}},
    {"Galarian Slowking", {95, 65, 80, 110, 110, 30}}}},
  {PokeNames::Misdreavus, {
    {"Normal", {60, 60, 60, 85, 85, 85}}}},
  {PokeNames::Unown, {
    {"Normal", {48, 72, 48, 72, 48, 48}}}},
  {PokeNames::Wobbuffet, {
    {"Normal", {190, 33, 58, 33, 58, 33}}}},
  {PokeNames::Girafarig, {
    {"Normal", {70, 80, 65, 90, 65, 85}}}},
  {PokeNames::Pineco, {
    {"Normal", {50, 65, 90, 35, 35, 15}}}},
  {PokeNames::Forretress, {
    {"Normal", {75, 90, 140, 60, 60, 40}}}},
  {PokeNames::Dunsparce, {
    {"Normal", {100, 70, 70, 65, 65, 45}}}},
  {PokeNames::Gligar, {
    {"Normal", {65, 75, 105, 35, 65, 85}}}},
  {PokeNames::Steelix, {
    {"Normal", {75, 85, 200, 55, 65, 30}},
    {"Mega Steelix", {75, 125, 230, 55, 95, 30}}}},
  {PokeNames::Snubbull, {
    {"Normal", {60, 80, 50, 40, 40, 30}}}},
  {PokeNames::Granbull, {
    {"Normal", {90, 120, 75, 60, 60, 45}}}},
  {PokeNames::Qwilfish, {
    {"Normal", {65, 95, 85, 55, 55, 85}},
    {"Hisuian Qwilfish", {65, 95, 85, 55, 55, 85}}}},
  {PokeNames::Scizor, {
    {"Normal", {70, 130, 100, 55, 80, 65}},
    {"Mega Scizor", {70, 150, 140, 65, 100, 75}}}},
  {PokeNames::Shuckle, {
    {"Normal", {20, 10, 230, 10, 230, 5}}}},
  {PokeNames::Heracross, {
    {"Normal", {80, 125, 75, 40, 95, 85}},
    {"Mega Heracross", {80, 185, 115, 40, 105, 75}}}},
  {PokeNames::Sneasel, {
    {"Normal", {55, 95, 55, 35, 75, 115}},
    {"Hisuian Sneasel", {55, 95, 55, 35, 75, 115}}}},
  {PokeNames::Teddiursa, {
    {"Normal", {60, 80, 50, 50, 50, 40}}}},
  {PokeNames::Ursaring, {
    {"Normal", {90, 130, 75, 75, 75, 55}}}},
  {PokeNames::Slugma, {
    {"Normal", {40, 40, 40, 70, 40, 20}}}},
  {PokeNames::Magcargo, {
    {"Normal", {60, 50, 120, 90, 80, 30}}}},
  {PokeNames::Swinub, {
    {"Normal", {50, 50, 40, 30, 30, 50}}}},
  {PokeNames::Piloswine, {
    {"Normal", {100, 100, 80, 60, 60, 50}}}},
  {PokeNames::Corsola, {
    {"Normal", {65, 55, 95, 65, 95, 35}},
    {"Galarian Corsola", {60, 55, 100, 65, 100, 30}}}},
  {PokeNames::Remoraid, {
    {"Normal", {35, 65, 35, 65, 35, 65}}}},
  {PokeNames::Octillery, {
    {"Normal", {75, 105, 75, 105, 75, 45}}}},
  {PokeNames::Delibird, {
    {"Normal", {45, 55, 45, 65, 45, 75}}}},
  {PokeNames::Mantine, {
    {"Normal", {85, 40, 70, 80, 140, 70}}}},
  {PokeNames::Skarmory, {
    {"Normal", {65, 80, 140, 40, 70, 70}}}},
  {PokeNames::Houndour, {
    {"Normal", {45, 60, 30, 80, 50, 65}}}},
  {PokeNames::Houndoom, {
    {"Normal", {75, 90, 50, 110, 80, 95}},
    {"Mega Houndoom", {75, 90, 90, 140, 90, 115}}}},
  {PokeNames::Kingdra, {
    {"Normal", {75, 95, 95, 95, 95, 85}}}},
  {PokeNames::Phanpy, {
    {"Normal", {90, 60, 60, 40, 40, 40}}}},
  {PokeNames::Donphan, {
    {"Normal", {90, 120, 120, 60, 60, 50}}}},
  {PokeNames::Porygon2, {
    {"Normal", {85, 80, 90, 105, 95, 60}}}},
  {PokeNames::Stantler, {
    {"Normal", {73, 95, 62, 85, 65, 85}}}},
  {PokeNames::Smeargle, {
    {"Normal", {55, 20, 35, 20, 45, 75}}}},
  {PokeNames::Tyrogue, {
    {"Normal", {35, 35, 35, 35, 35, 35}}}},
  {PokeNames::Hitmontop, {
    {"Normal", {50, 95, 95, 35, 110, 70}}}},
  {PokeNames::Smoochum, {
    {"Normal", {45, 30, 15, 85, 65, 65}}}},
  {PokeNames::Elekid, {
    {"Normal", {45, 63, 37, 65, 55, 95}}}},
  {PokeNames::Magby, {
    {"Normal", {45, 75, 37, 70, 55, 83}}}},
  {PokeNames::Miltank, {
    {"Normal", {95, 80, 105, 40, 70, 100}}}},
  {PokeNames::Blissey, {
    {"Normal", {255, 10, 10, 75, 135, 55}}}},
  {PokeNames::Raikou, {
    {"Normal", {90, 85, 75, 115, 100, 115}}}},
  {PokeNames::Entei, {
    {"Normal", {115, 115, 85, 90, 75, 100}}}},
  {PokeNames::Suicune, {
    {"Normal", {100, 75, 115, 90, 115, 85}}}},
  {PokeNames::Larvitar, {
    {"Normal", {50, 64, 50, 45, 50, 41}}}},
  {PokeNames::Pupitar, {
    {"Normal", {70, 84, 70, 65, 70, 51}}}},
  {PokeNames::Tyranitar, {
    {"Normal", {100, 134, 110, 95, 100, 61}},
    {"Mega Tyranitar", {100, 164, 150, 95, 120, 71}}}},
  {PokeNames::Lugia, {
    {"Normal", {106, 90, 130, 90, 154, 110}}}},
  {PokeNames::Ho_Oh, {
    {"Normal", {106, 130, 90, 110, 154, 90}}}},
  {PokeNames::Celebi, {
    {"Normal", {100, 100, 100, 100, 100, 100}}}},
  {PokeNames::Treecko, {
    {"Normal", {40, 45, 35, 65, 55, 70}}}},
  {PokeNames::Grovyle, {
    {"Normal", {50, 65, 45, 85, 65, 95}}}},
  {PokeNames::Sceptile, {
    {"Normal", {70, 85, 65, 105, 85, 120}},
    {"Mega Sceptile", {70, 110, 75, 145, 85, 145}}}},
  {PokeNames::Torchic, {
    {"Normal", {45, 60, 40, 70, 50, 45}}}},
  {PokeNames::Combusken, {
    {"Normal", {60, 85, 60, 85, 60, 55}}}},
  {PokeNames::Blaziken, {
    {"Normal", {80, 120, 70, 110, 70, 80}},
    {"Mega Blaziken", {80, 160, 80, 130, 80, 100}}}},
  {PokeNames::Mudkip, {
    {"Normal", {50, 70, 50, 50, 50, 40}}}},
  {PokeNames::Marshtomp, {
    {"Normal", {70, 85, 70, 60, 70, 50}}}},
  {PokeNames::Swampert, {
    {"Normal", {100, 110, 90, 85, 90, 60}},
    {"Mega Swampert", {100, 150, 110, 95, 110, 70}}}},
  {PokeNames::Poochyena, {
    {"Normal", {35, 55, 35, 30, 30, 35}}}},
  {PokeNames::Mightyena, {
    {"Normal", {70, 90, 70, 60, 60, 70}}}},
  {PokeNames::Zigzagoon, {
    {"Normal", {38, 30, 41, 30, 41, 60}},
    {"Galarian Zigzagoon", {38, 30, 41, 30, 41, 60}}}},
  {PokeNames::Linoone, {
    {"Normal", {78, 70, 61, 50, 61, 100}},
    {"Galarian Linoone", {78, 70, 61, 50, 61, 100}}}},
  {PokeNames::Wurmple, {
    {"Normal", {45, 45, 35, 20, 30, 20}}}},
  {PokeNames::Silcoon, {
    {"Normal", {50, 35, 55, 25, 25, 15}}}},
  {PokeNames::Beautifly, {
    {"Normal", {60, 70, 50, 100, 50, 65}}}},
  {PokeNames::Cascoon, {
    {"Normal", {50, 35, 55, 25, 25, 15}}}},
  {PokeNames::Dustox, {
    {"Normal", {60, 50, 70, 50, 90, 65}}}},
  {PokeNames::Lotad, {
    {"Normal", {40, 30, 30, 40, 50, 30}}}},
  {PokeNames::Lombre, {
    {"Normal", {60, 50, 50, 60, 70, 50}}}},
  {PokeNames::Ludicolo, {
    {"Normal", {80, 70, 70, 90, 100, 70}}}},
  {PokeNames::Seedot, {
    {"Normal", {40, 40, 50, 30, 30, 30}}}},
  {PokeNames::Nuzleaf, {
    {"Normal", {70, 70, 40, 60, 40, 60}}}},
  {PokeNames::Shiftry, {
    {"Normal", {90, 100, 60, 90, 60, 80}}}},
  {PokeNames::Taillow, {
    {"Normal", {40, 55, 30, 30, 30, 85}}}},
  {PokeNames::Swellow, {
    {"Normal", {60, 85, 60, 75, 50, 125}}}},
  {PokeNames::Wingull, {
    {"Normal", {40, 30, 30, 55, 30, 85}}}},
  {PokeNames::Pelipper, {
    {"Normal", {60, 50, 100, 95, 70, 65}}}},
  {PokeNames::Ralts, {
    {"Normal", {28, 25, 25, 45, 35, 40}}}},
  {PokeNames::Kirlia, {
    {"Normal", {38, 35, 35, 65, 55, 50}}}},
  {PokeNames::Gardevoir, {
    {"Normal", {68, 65, 65, 125, 115, 80}},
    {"Mega Gardevoir", {68, 85, 65, 165, 135, 100}}}},
  {PokeNames::Surskit, {
    {"Normal", {40, 30, 32, 50, 52, 65}}}},
  {PokeNames::Masquerain, {
    {"Normal", {70, 60, 62, 100, 82, 80}}}},
  {PokeNames::Shroomish, {
    {"Normal", {60, 40, 60, 40, 60, 35}}}},
  {PokeNames::Breloom, {
    {"Normal", {60, 130, 80, 60, 60, 70}}}},
  {PokeNames::Slakoth, {
    {"Normal", {60, 60, 60, 35, 35, 30}}}},
  {PokeNames::Vigoroth, {
    {"Normal", {80, 80, 80, 55, 55, 90}}}},
  {PokeNames::Slaking, {
    {"Normal", {150, 160, 100, 95, 65, 100}}}},
  {PokeNames::Nincada, {
    {"Normal", {31, 45, 90, 30, 30, 40}}}},
  {PokeNames::Ninjask, {
    {"Normal", {61, 90, 45, 50, 50, 160}}}},
  {PokeNames::Shedinja, {
    {"Normal", {1, 90, 45, 30, 30, 40}}}},
  {PokeNames::Whismur, {
    {"Normal", {64, 51, 23, 51, 23, 28}}}},
  {PokeNames::Loudred, {
    {"Normal", {84, 71, 43, 71, 43, 48}}}},
  {PokeNames::Exploud, {
    {"Normal", {104, 91, 63, 91, 73, 68}}}},
  {PokeNames::Makuhita, {
    {"Normal", {72, 60, 30, 20, 30, 25}}}},
  {PokeNames::Hariyama, {
    {"Normal", {144, 120, 60, 40, 60, 50}}}},
  {PokeNames::Azurill, {
    {"Normal", {50, 20, 40, 20, 40, 20}}}},
  {PokeNames::Nosepass, {
    {"Normal", {30, 45, 135, 45, 90, 30}}}},
  {PokeNames::Skitty, {
    {"Normal", {50, 45, 45, 35, 35, 50}}}},
  {PokeNames::Delcatty, {
    {"Normal", {70, 65, 65, 55, 55, 90}}}},
  {PokeNames::Sableye, {
    {"Normal", {50, 75, 75, 65, 65, 50}},
    {"Mega Sableye", {50, 85, 125, 85, 115, 20}}}},
  {PokeNames::Mawile, {
    {"Normal", {50, 85, 85, 55, 55, 50}},
    {"Mega Mawile", {50, 105, 125, 55, 95, 50}}}},
  {PokeNames::Aron, {
    {"Normal", {50, 70, 100, 40, 40, 30}}}},
  {PokeNames::Lairon, {
    {"Normal", {60, 90, 140, 50, 50, 40}}}},
  {PokeNames::Aggron, {
    {"Normal", {70, 110, 180, 60, 60, 50}},
    {"Mega Aggron", {70, 140, 230, 60, 80, 50}}}},
  {PokeNames::Meditite, {
    {"Normal", {30, 40, 55, 40, 55, 60}}}},
  {PokeNames::Medicham, {
    {"Normal", {60, 60, 75, 60, 75, 80}},
    {"Mega Medicham", {60, 100, 85, 80, 85, 100}}}},
  {PokeNames::Electrike, {
    {"Normal", {40, 45, 40, 65, 40, 65}}}},
  {PokeNames::Manectric, {
    {"Normal", {70, 75, 60, 105, 60, 105}},
    {"Mega Manectric", {70, 75, 80, 135, 80, 135}}}},
  {PokeNames::Plusle, {
    {"Normal", {60, 50, 40, 85, 75, 95}}}},
  {PokeNames::Minun, {
    {"Normal", {60, 40, 50, 75, 85, 95}}}},
  {PokeNames::Volbeat, {
    {"Normal", {65, 73, 75, 47, 85, 85}}}},
  {PokeNames::Illumise, {
    {"Normal", {65, 47, 75, 73, 85, 85}}}},
  {PokeNames::Roselia, {
    {"Normal", {50, 60, 45, 100, 80, 65}}}},
  {PokeNames::Gulpin, {
    {"Normal", {70, 43, 53, 43, 53, 40}}}},
  {PokeNames::Swalot, {
    {"Normal", {100, 73, 83, 73, 83, 55}}}},
  {PokeNames::Carvanha, {
    {"Normal", {45, 90, 20, 65, 20, 65}}}},
  {PokeNames::Sharpedo, {
    {"Normal", {70, 120, 40, 95, 40, 95}},
    {"Mega Sharpedo", {70, 140, 70, 110, 65, 105}}}},
  {PokeNames::Wailmer, {
    {"Normal", {130, 70, 35, 70, 35, 60}}}},
  {PokeNames::Wailord, {
    {"Normal", {170, 90, 45, 90, 45, 60}}}},
  {PokeNames::Numel, {
    {"Normal", {60, 60, 40, 65, 45, 35}}}},
  {PokeNames::Camerupt, {
    {"Normal", {70, 100, 70, 105, 75, 40}},
    {"Mega Camerupt", {70, 120, 100, 145, 105, 20}}}},
  {PokeNames::Torkoal, {
    {"Normal", {70, 85, 140, 85, 70, 20}}}},
  {PokeNames::Spoink, {
    {"Normal", {60, 25, 35, 70, 80, 60}}}},
  {PokeNames::Grumpig, {
    {"Normal", {80, 45, 65, 90, 110, 80}}}},
  {PokeNames::Spinda, {
    {"Normal", {60, 60, 60, 60, 60, 60}}}},
  {PokeNames::Trapinch, {
    {"Normal", {45, 100, 45, 45, 45, 10}}}},
  {PokeNames::Vibrava, {
    {"Normal", {50, 70, 50, 50, 50, 70}}}},
  {PokeNames::Flygon, {
    {"Normal", {80, 100, 80, 80, 80, 100}}}},
  {PokeNames::Cacnea, {
    {"Normal", {50, 85, 40, 85, 40, 35}}}},
  {PokeNames::Cacturne, {
    {"Normal", {70, 115, 60, 115, 60, 55}}}},
  {PokeNames::Swablu, {
    {"Normal", {45, 40, 60, 40, 75, 50}}}},
  {PokeNames::Altaria, {
    {"Normal", {75, 70, 90, 70, 105, 80}},
    {"Mega Altaria", {75, 110, 110, 110, 105, 80}}}},
  {PokeNames::Zangoose, {
    {"Normal", {73, 115, 60, 60, 60, 90}}}},
  {PokeNames::Seviper, {
    {"Normal", {73, 100, 60, 100, 60, 65}}}},
  {PokeNames::Lunatone, {
    {"Normal", {90, 55, 65, 95, 85, 70}}}},
  {PokeNames::Solrock, {
    {"Normal", {90, 95, 85, 55, 65, 70}}}},
  {PokeNames::Barboach, {
    {"Normal", {50, 48, 43, 46, 41, 60}}}},
  {PokeNames::Whiscash, {
    {"Normal", {110, 78, 73, 76, 71, 60}}}},
  {PokeNames::Corphish, {
    {"Normal", {43, 80, 65, 50, 35, 35}}}},
  {PokeNames::Crawdaunt, {
    {"Normal", {63, 120, 85, 90, 55, 55}}}},
  {PokeNames::Baltoy, {
    {"Normal", {40, 40, 55, 40, 70, 55}}}},
  {PokeNames::Claydol, {
    {"Normal", {60, 70, 105, 70, 120, 75}}}},
  {PokeNames::Lileep, {
    {"Normal", {66, 41, 77, 61, 87, 23}}}},
  {PokeNames::Cradily, {
    {"Normal", {86, 81, 97, 81, 107, 43}}}},
  {PokeNames::Anorith, {
    {"Normal", {45, 95, 50, 40, 50, 75}}}},
  {PokeNames::Armaldo, {
    {"Normal", {75, 125, 100, 70, 80, 45}}}},
  {PokeNames::Feebas, {
    {"Normal", {20, 15, 20, 10, 55, 80}}}},
  {PokeNames::Milotic, {
    {"Normal", {95, 60, 79, 100, 125, 81}}}},
  {PokeNames::Castform, {
    {"Normal", {70, 70, 70, 70, 70, 70}}}},
  {PokeNames::Kecleon, {
    {"Normal", {60, 90, 70, 60, 120, 40}}}},
  {PokeNames::Shuppet, {
    {"Normal", {44, 75, 35, 63, 33, 45}}}},
  {PokeNames::Banette, {
    {"Normal", {64, 115, 65, 83, 63, 65}},
    {"Mega Banette", {64, 165, 75, 93, 83, 75}}}},
  {PokeNames::Duskull, {
    {"Normal", {20, 40, 90, 30, 90, 25}}}},
  {PokeNames::Dusclops, {
    {"Normal", {40, 70, 130, 60, 130, 25}}}},
  {PokeNames::Tropius, {
    {"Normal", {99, 68, 83, 72, 87, 51}}}},
  {PokeNames::Chimecho, {
    {"Normal", {75, 50, 80, 95, 90, 65}}}},
  {PokeNames::Absol, {
    {"Normal", {65, 130, 60, 75, 60, 75}},
    {"Mega Absol", {65, 150, 60, 115, 60, 115}}}},
  {PokeNames::Wynaut, {
    {"Normal", {95, 23, 48, 23, 48, 23}}}},
  {PokeNames::Snorunt, {
    {"Normal", {50, 50, 50, 50, 50, 50}}}},
  {PokeNames::Glalie, {
    {"Normal", {80, 80, 80, 80, 80, 80}},
    {"Mega Glalie", {80, 120, 80, 120, 80, 100}}}},
  {PokeNames::Spheal, {
    {"Normal", {70, 40, 50, 55, 50, 25}}}},
  {PokeNames::Sealeo, {
    {"Normal", {90, 60, 70, 75, 70, 45}}}},
  {PokeNames::Walrein, {
    {"Normal", {110, 80, 90, 95, 90, 65}}}},
  {PokeNames::Clamperl, {
    {"Normal", {35, 64, 85, 74, 55, 32}}}},
  {PokeNames::Huntail, {
    {"Normal", {55, 104, 105, 94, 75, 52}}}},
  {PokeNames::Gorebyss, {
    {"Normal", {55, 84, 105, 114, 75, 52}}}},
  {PokeNames::Relicanth, {
    {"Normal", {100, 90, 130, 45, 65, 55}}}},
  {PokeNames::Luvdisc, {
    {"Normal", {43, 30, 55, 40, 65, 97}}}},
  {PokeNames::Bagon, {
    {"Normal", {45, 75, 60, 40, 30, 50}}}},
  {PokeNames::Shelgon, {
    {"Normal", {65, 95, 100, 60, 50, 50}}}},
  {PokeNames::Salamence, {
    {"Normal", {95, 135, 80, 110, 80, 100}},
    {"Mega Salamence", {95, 145, 130, 120, 90, 120}}}},
  {PokeNames::Beldum, {
    {"Normal", {40, 55, 80, 35, 60, 30}}}},
  {PokeNames::Metang, {
    {"Normal", {60, 75, 100, 55, 80, 50}}}},
  {PokeNames::Metagross, {
    {"Normal", {80, 135, 130, 95, 90, 70}},
    {"Mega Metagross", {80, 145, 150, 105, 110, 110}}}},
  {PokeNames::Regirock, {
    {"Normal", {80, 100, 200, 50, 100, 50}}}},
  {PokeNames::Regice, {
    {"Normal", {80, 50, 100, 100, 200, 50}}}},
  {PokeNames::Registeel, {
    {"Normal", {80, 75, 150, 75, 150, 50}}}},
  {PokeNames::Latias, {
    {"Normal", {80, 80, 90, 110, 130, 110}},
    {"Mega Latias", {80, 100, 120, 140, 150, 110}}}},
  {PokeNames::Latios, {
    {"Normal", {80, 90, 80, 130, 110, 110}},
    {"Mega Latios", {80, 130, 100, 160, 120, 110}}}},
  {PokeNames::Kyogre, {
    {"Normal", {100, 100, 90, 150, 140, 90}},
    {"Primal Kyogre", {100, 150, 90, 180, 160, 90}}}},
  {PokeNames::Groudon, {
    {"Normal", {100, 150, 140, 100, 90, 90}},
    {"Primal Groudon", {100, 180, 160, 150, 90, 90}}}},
  {PokeNames::Rayquaza, {
    {"Normal", {105, 150, 90, 150, 90, 95}},
    {"Mega Rayquaza", {105, 180, 100, 180, 100, 115}}}},
  {PokeNames::Jirachi, {
    {"Normal", {100, 100, 100, 100, 100, 100}}}},
  {PokeNames::Deoxys, {
    {"Normal Forme", {50, 150, 50, 150, 50, 150}},
    {"Attack Forme", {50, 180, 20, 180, 20, 150}},
    {"Defense Forme", {50, 70, 160, 70, 160, 90}},
    {"Speed Forme", {50, 95, 90, 95, 90, 180}}}},
  {PokeNames::Turtwig, {
    {"Normal", {55, 68, 64, 45, 55, 31}}}},
  {PokeNames::Grotle, {
    {"Normal", {75, 89, 85, 55, 65, 36}}}},
  {PokeNames::Torterra, {
    {"Normal", {95, 109, 105, 75, 85, 56}}}},
  {PokeNames::Chimchar, {
    {"Normal", {44, 58, 44, 58, 44, 61}}}},
  {PokeNames::Monferno, {
    {"Normal", {64, 78, 52, 78, 52, 81}}}},
  {PokeNames::Infernape, {
    {"Normal", {76, 104, 71, 104, 71, 108}}}},
  {PokeNames::Piplup, {
    {"Normal", {53, 51, 53, 61, 56, 40}}}},
  {PokeNames::Prinplup, {
    {"Normal", {64, 66, 68, 81, 76, 50}}}},
  {PokeNames::Empoleon, {
    {"Normal", {84, 86, 88, 111, 101, 60}}}},
  {PokeNames::Starly, {
    {"Normal", {40, 55, 30, 30, 30, 60}}}},
  {PokeNames::Staravia, {
    {"Normal", {55, 75, 50, 40, 40, 80}}}},
  {PokeNames::Staraptor, {
    {"Normal", {85, 120, 70, 50, 60, 100}}}},
  {PokeNames::Bidoof, {
    {"Normal", {59, 45, 40, 35, 40, 31}}}},
  {PokeNames::Bibarel, {
    {"Normal", {79, 85, 60, 55, 60, 71}}}},
  {PokeNames::Kricketot, {
    {"Normal", {37, 25, 41, 25, 41, 25}}}},
  {PokeNames::Kricketune, {
    {"Normal", {77, 85, 51, 55, 51, 65}}}},
  {PokeNames::Shinx, {
    {"Normal", {45, 65, 34, 40, 34, 45}}}},
  {PokeNames::Luxio, {
    {"Normal", {60, 85, 49, 60, 49, 60}}}},
  {PokeNames::Luxray, {
    {"Normal", {80, 120, 79, 95, 79, 70}}}},
  {PokeNames::Budew, {
    {"Normal", {40, 30, 35, 50, 70, 55}}}},
  {PokeNames::Roserade, {
    {"Normal", {60, 70, 65, 125, 105, 90}}}},
  {PokeNames::Cranidos, {
    {"Normal", {67, 125, 40, 30, 30, 58}}}},
  {PokeNames::Rampardos, {
    {"Normal", {97, 165, 60, 65, 50, 58}}}},
  {PokeNames::Shieldon, {
    {"Normal", {30, 42, 118, 42, 88, 30}}}},
  {PokeNames::Bastiodon, {
    {"Normal", {60, 52, 168, 47, 138, 30}}}},
  {PokeNames::Burmy, {
    {"Normal", {40, 29, 45, 29, 45, 36}}}},
  {PokeNames::Wormadam, {
    {"Plant Cloak", {60, 59, 85, 79, 105, 36}},
    {"Sandy Cloak", {60, 79, 105, 59, 85, 36}},
    {"Trash Cloak", {60, 69, 95, 69, 95, 36}}}},
  {PokeNames::Mothim, {
    {"Normal", {70, 94, 50, 94, 50, 66}}}},
  {PokeNames::Combee, {
    {"Normal", {30, 30, 42, 30, 42, 70}}}},
  {PokeNames::Vespiquen, {
    {"Normal", {70, 80, 102, 80, 102, 40}}}},
  {PokeNames::Pachirisu, {
    {"Normal", {60, 45, 70, 45, 90, 95}}}},
  {PokeNames::Buizel, {
    {"Normal", {55, 65, 35, 60, 30, 85}}}},
  {PokeNames::Floatzel, {
    {"Normal", {85, 105, 55, 85, 50, 115}}}},
  {PokeNames::Cherubi, {
    {"Normal", {45, 35, 45, 62, 53, 35}}}},
  {PokeNames::Cherrim, {
    {"Normal", {70, 60, 70, 87, 78, 85}}}},
  {PokeNames::Shellos, {
    {"Normal", {76, 48, 48, 57, 62, 34}}}},
  {PokeNames::Gastrodon, {
    {"Normal", {111, 83, 68, 92, 82, 39}}}},
  {PokeNames::Ambipom, {
    {"Normal", {75, 100, 66, 60, 66, 115}}}},
  {PokeNames::Drifloon, {
    {"Normal", {90, 50, 34, 60, 44, 70}}}},
  {PokeNames::Drifblim, {
    {"Normal", {150, 80, 44, 90, 54, 80}}}},
  {PokeNames::Buneary, {
    {"Normal", {55, 66, 44, 44, 56, 85}}}},
  {PokeNames::Lopunny, {
    {"Normal", {65, 76, 84, 54, 96, 105}},
    {"Mega Lopunny", {65, 136, 94, 54, 96, 135}}}},
  {PokeNames::Mismagius, {
    {"Normal", {60, 60, 60, 105, 105, 105}}}},
  {PokeNames::Honchkrow, {
    {"Normal", {100, 125, 52, 105, 52, 71}}}},
  {PokeNames::Glameow, {
    {"Normal", {49, 55, 42, 42, 37, 85}}}},
  {PokeNames::Purugly, {
    {"Normal", {71, 82, 64, 64, 59, 112}}}},
  {PokeNames::Chingling, {
    {"Normal", {45, 30, 50, 65, 50, 45}}}},
  {PokeNames::Stunky, {
    {"Normal", {63, 63, 47, 41, 41, 74}}}},
  {PokeNames::Skuntank, {
    {"Normal", {103, 93, 67, 71, 61, 84}}}},
  {PokeNames::Bronzor, {
    {"Normal", {57, 24, 86, 24, 86, 23}}}},
  {PokeNames::Bronzong, {
    {"Normal", {67, 89, 116, 79, 116, 33}}}},
  {PokeNames::Bonsly, {
    {"Normal", {50, 80, 95, 10, 45, 10}}}},
  {PokeNames::Mime_Jr, {
    {"Normal", {20, 25, 45, 70, 90, 60}}}},
  {PokeNames::Happiny, {
    {"Normal", {100, 5, 5, 15, 65, 30}}}},
  {PokeNames::Chatot, {
    {"Normal", {76, 65, 45, 92, 42, 91}}}},
  {PokeNames::Spiritomb, {
    {"Normal", {50, 92, 108, 92, 108, 35}}}},
  {PokeNames::Gible, {
    {"Normal", {58, 70, 45, 40, 45, 42}}}},
  {PokeNames::Gabite, {
    {"Normal", {68, 90, 65, 50, 55, 82}}}},
  {PokeNames::Garchomp, {
    {"Normal", {108, 130, 95, 80, 85, 102}},
    {"Mega Garchomp", {108, 170, 115, 120, 95, 92}}}},
  {PokeNames::Munchlax, {
    {"Normal", {135, 85, 40, 40, 85, 5}}}},
  {PokeNames::Riolu, {
    {"Normal", {40, 70, 40, 35, 40, 60}}}},
  {PokeNames::Lucario, {
    {"Normal", {70, 110, 70, 115, 70, 90}},
    {"Mega Lucario", {70, 145, 88, 140, 70, 112}}}},
  {PokeNames::Hippopotas, {
    {"Normal", {68, 72, 78, 38, 42, 32}}}},
  {PokeNames::Hippowdon, {
    {"Normal", {108, 112, 118, 68, 72, 47}}}},
  {PokeNames::Skorupi, {
    {"Normal", {40, 50, 90, 30, 55, 65}}}},
  {PokeNames::Drapion, {
    {"Normal", {70, 90, 110, 60, 75, 95}}}},
  {PokeNames::Croagunk, {
    {"Normal", {48, 61, 40, 61, 40, 50}}}},
  {PokeNames::Toxicroak, {
    {"Normal", {83, 106, 65, 86, 65, 85}}}},
  {PokeNames::Carnivine, {
    {"Normal", {74, 100, 72, 90, 72, 46}}}},
  {PokeNames::Finneon, {
    {"Normal", {49, 49, 56, 49, 61, 66}}}},
  {PokeNames::Lumineon, {
    {"Normal", {69, 69, 76, 69, 86, 91}}}},
  {PokeNames::Mantyke, {
    {"Normal", {45, 20, 50, 60, 120, 50}}}},
  {PokeNames::Snover, {
    {"Normal", {60, 62, 50, 62, 60, 40}}}},
  {PokeNames::Abomasnow, {
    {"Normal", {90, 92, 75, 92, 85, 60}},
    {"Mega Abomasnow", {90, 132, 105, 132, 105, 30}}}},
  {PokeNames::Weavile, {
    {"Normal", {70, 120, 65, 45, 85, 125}}}},
  {PokeNames::Magnezone, {
    {"Normal", {70, 70, 115, 130, 90, 60}}}},
  {PokeNames::Lickilicky, {
    {"Normal", {110, 85, 95, 80, 95, 50}}}},
  {PokeNames::Rhyperior, {
    {"Normal", {115, 140, 130, 55, 55, 40}}}},
  {PokeNames::Tangrowth, {
    {"Normal", {100, 100, 125, 110, 50, 50}}}},
  {PokeNames::Electivire, {
    {"Normal", {75, 123, 67, 95, 85, 95}}}},
  {PokeNames::Magmortar, {
    {"Normal", {75, 95, 67, 125, 95, 83}}}},
  {PokeNames::Togekiss, {
    {"Normal", {85, 50, 95, 120, 115, 80}}}},
  {PokeNames::Yanmega, {
    {"Normal", {86, 76, 86, 116, 56, 95}}}},
  {PokeNames::Leafeon, {
    {"Normal", {65, 110, 130, 60, 65, 95}}}},
  {PokeNames::Glaceon, {
    {"Normal", {65, 60, 110, 130, 95, 65}}}},
  {PokeNames::Gliscor, {
    {"Normal", {75, 95, 125, 45, 75, 95}}}},
  {PokeNames::Mamoswine, {
    {"Normal", {110, 130, 80, 70, 60, 80}}}},
  {PokeNames::Porygon_Z, {
    {"Normal", {85, 80, 70, 135, 75, 90}}}},
  {PokeNames::Gallade, {
    {"Normal", {68, 125, 65, 65, 115, 80}},
    {"Mega Gallade", {68, 165, 95, 65, 115, 110}}}},
  {PokeNames::Probopass, {
    {"Normal", {60, 55, 145, 75, 150, 40}}}},
  {PokeNames::Dusknoir, {
    {"Normal", {45, 100, 135, 65, 135, 45}}}},
  {PokeNames::Froslass, {
    {"Normal", {70, 80, 70, 80, 70, 110}}}},
  {PokeNames::Rotom, {
    {"Normal", {50, 50, 77, 95, 77, 91}},
    {"Heat Rotom", {50, 65, 107, 105, 107, 86}},
    {"Wash Rotom", {50, 65, 107, 105, 107, 86}},
    {"Frost Rotom", {50, 65, 107, 105, 107, 86}},
    {"Fan Rotom", {50, 65, 107, 105, 107, 86}},
    {"Mow Rotom", {50, 65, 107, 105, 107, 86}}}},
  {PokeNames::Uxie, {
    {"Normal", {75, 75, 130, 75, 130, 95}}}},
  {PokeNames::Mesprit, {
    {"Normal", {80, 105, 105, 105, 105, 80}}}},
  {PokeNames::Azelf, {
    {"Normal", {75, 125, 70, 125, 70, 115}}}},
  {PokeNames::Dialga, {
    {"Normal", {100, 120, 120, 150, 100, 90}},
    {"Origin Forme", {100, 100, 120, 150, 120, 90}}}},
  {PokeNames::Palkia, {
    {"Normal", {90, 120, 100, 150, 120, 100}},
    {"Origin Forme", {90, 100, 100, 150, 120, 120}}}},
  {PokeNames::Heatran, {
    {"Normal", {91, 90, 106, 130, 106, 77}}}},
  {PokeNames::Regigigas, {
    {"Normal", {110, 160, 110, 80, 110, 100}}}},
  {PokeNames::Giratina, {
    {"Altered Forme", {150, 100, 120, 100, 120, 90}},
    {"Origin Forme", {150, 120, 100, 120, 100, 90}}}},
  {PokeNames::Cresselia, {
    {"Normal", {120, 70, 110, 75, 120, 85}}}},
  {PokeNames::Phione, {
    {"Normal", {80, 80, 80, 80, 80, 80}}}},
  {PokeNames::Manaphy, {
    {"Normal", {100, 100, 100, 100, 100, 100}}}},
  {PokeNames::Darkrai, {
    {"Normal", {70, 90, 90, 135, 90, 125}}}},
  {PokeNames::Shaymin, {
    {"Land Forme", {100, 100, 100, 100, 100, 100}},
    {"Sky Forme", {100, 103, 75, 120, 75, 127}}}},
  {PokeNames::Arceus, {
    {"Normal", {120, 120, 120, 120, 120, 120}}}},
  {PokeNames::Victini, {
    {"Normal", {100, 100, 100, 100, 100, 100}}}},
  {PokeNames::Snivy, {
    {"Normal", {45, 45, 55, 45, 55, 63}}}},
  {PokeNames::Servine, {
    {"Normal", {60, 60, 75, 60, 75, 83}}}},
  {PokeNames::Serperior, {
    {"Normal", {75, 75, 95, 75, 95, 113}}}},
  {PokeNames::Tepig, {
    {"Normal", {65, 63, 45, 45, 45, 45}}}},
  {PokeNames::Pignite, {
    {"Normal", {90, 93, 55, 70, 55, 55}}}},
  {PokeNames::Emboar, {
    {"Normal", {110, 123, 65, 100, 65, 65}}}},
  {PokeNames::Oshawott, {
    {"Normal", {55, 55, 45, 63, 45, 45}}}},
  {PokeNames::Dewott, {
    {"Normal", {75, 75, 60, 83, 60, 60}}}},
  {PokeNames::Samurott, {
    {"Normal", {95, 100, 85, 108, 70, 70}},
    {"Hisuian Samurott", {90, 108, 80, 100, 65, 85}}}},
  {PokeNames::Patrat, {
    {"Normal", {45, 55, 39, 35, 39, 42}}}},
  {PokeNames::Watchog, {
    {"Normal", {60, 85, 69, 60, 69, 77}}}},
  {PokeNames::Lillipup, {
    {"Normal", {45, 60, 45, 25, 45, 55}}}},
  {PokeNames::Herdier, {
    {"Normal", {65, 80, 65, 35, 65, 60}}}},
  {PokeNames::Stoutland, {
    {"Normal", {85, 110, 90, 45, 90, 80}}}},
  {PokeNames::Purrloin, {
    {"Normal", {41, 50, 37, 50, 37, 66}}}},
  {PokeNames::Liepard, {
    {"Normal", {64, 88, 50, 88, 50, 106}}}},
  {PokeNames::Pansage, {
    {"Normal", {50, 53, 48, 53, 48, 64}}}},
  {PokeNames::Simisage, {
    {"Normal", {75, 98, 63, 98, 63, 101}}}},
  {PokeNames::Pansear, {
    {"Normal", {50, 53, 48, 53, 48, 64}}}},
  {PokeNames::Simisear, {
    {"Normal", {75, 98, 63, 98, 63, 101}}}},
  {PokeNames::Panpour, {
    {"Normal", {50, 53, 48, 53, 48, 64}}}},
  {PokeNames::Simipour, {
    {"Normal", {75, 98, 63, 98, 63, 101}}}},
  {PokeNames::Munna, {
    {"Normal", {76, 25, 45, 67, 55, 24}}}},
  {PokeNames::Musharna, {
    {"Normal", {116, 55, 85, 107, 95, 29}}}},
  {PokeNames::Pidove, {
    {"Normal", {50, 55, 50, 36, 30, 43}}}},
  {PokeNames::Tranquill, {
    {"Normal", {62, 77, 62, 50, 42, 65}}}},
  {PokeNames::Unfezant, {
    {"Normal", {80, 115, 80, 65, 55, 93}}}},
  {PokeNames::Blitzle, {
    {"Normal", {45, 60, 32, 50, 32, 76}}}},
  {PokeNames::Zebstrika, {
    {"Normal", {75, 100, 63, 80, 63, 116}}}},
  {PokeNames::Roggenrola, {
    {"Normal", {55, 75, 85, 25, 25, 15}}}},
  {PokeNames::Boldore, {
    {"Normal", {70, 105, 105, 50, 40, 20}}}},
  {PokeNames::Gigalith, {
    {"Normal", {85, 135, 130, 60, 80, 25}}}},
  {PokeNames::Woobat, {
    {"Normal", {65, 45, 43, 55, 43, 72}}}},
  {PokeNames::Swoobat, {
    {"Normal", {67, 57, 55, 77, 55, 114}}}},
  {PokeNames::Drilbur, {
    {"Normal", {60, 85, 40, 30, 45, 68}}}},
  {PokeNames::Excadrill, {
    {"Normal", {110, 135, 60, 50, 65, 88}}}},
  {PokeNames::Audino, {
    {"Normal", {103, 60, 86, 60, 86, 50}},
    {"Mega Audino", {103, 60, 126, 80, 126, 50}}}},
  {PokeNames::Timburr, {
    {"Normal", {75, 80, 55, 25, 35, 35}}}},
  {PokeNames::Gurdurr, {
    {"Normal", {85, 105, 85, 40, 50, 40}}}},
  {PokeNames::Conkeldurr, {
    {"Normal", {105, 140, 95, 55, 65, 45}}}},
  {PokeNames::Tympole, {
    {"Normal", {50, 50, 40, 50, 40, 64}}}},
  {PokeNames::Palpitoad, {
    {"Normal", {75, 65, 55, 65, 55, 69}}}},
  {PokeNames::Seismitoad, {
    {"Normal", {105, 95, 75, 85, 75, 74}}}},
  {PokeNames::Throh, {
    {"Normal", {120, 100, 85, 30, 85, 45}}}},
  {PokeNames::Sawk, {
    {"Normal", {75, 125, 75, 30, 75, 85}}}},
  {PokeNames::Sewaddle, {
    {"Normal", {45, 53, 70, 40, 60, 42}}}},
  {PokeNames::Swadloon, {
    {"Normal", {55, 63, 90, 50, 80, 42}}}},
  {PokeNames::Leavanny, {
    {"Normal", {75, 103, 80, 70, 80, 92}}}},
  {PokeNames::Venipede, {
    {"Normal", {30, 45, 59, 30, 39, 57}}}},
  {PokeNames::Whirlipede, {
    {"Normal", {40, 55, 99, 40, 79, 47}}}},
  {PokeNames::Scolipede, {
    {"Normal", {60, 100, 89, 55, 69, 112}}}},
  {PokeNames::Cottonee, {
    {"Normal", {40, 27, 60, 37, 50, 66}}}},
  {PokeNames::Whimsicott, {
    {"Normal", {60, 67, 85, 77, 75, 116}}}},
  {PokeNames::Petilil, {
    {"Normal", {45, 35, 50, 70, 50, 30}}}},
  {PokeNames::Lilligant, {
    {"Normal", {70, 60, 75, 110, 75, 90}},
    {"Hisuian Lilligant", {70, 105, 75, 50, 75, 105}}}},
  {PokeNames::Basculin, {
    {"Normal", {70, 92, 65, 80, 55, 98}}}},
  {PokeNames::Sandile, {
    {"Normal", {50, 72, 35, 35, 35, 65}}}},
  {PokeNames::Krokorok, {
    {"Normal", {60, 82, 45, 45, 45, 74}}}},
  {PokeNames::Krookodile, {
    {"Normal", {95, 117, 80, 65, 70, 92}}}},
  {PokeNames::Darumaka, {
    {"Normal", {70, 90, 45, 15, 45, 50}},
    {"Galarian Darumaka", {70, 90, 45, 15, 45, 50}}}},
  {PokeNames::Darmanitan, {
    {"Standard Mode", {105, 140, 55, 30, 55, 95}},
    {"Zen Mode", {105, 30, 105, 140, 105, 55}},
    {"Galarian Standard Mode", {105, 140, 55, 30, 55, 95}},
    {"Galarian Zen Mode", {105, 160, 55, 30, 55, 135}}}},
  {PokeNames::Maractus, {
    {"Normal", {75, 86, 67, 106, 67, 60}}}},
  {PokeNames::Dwebble, {
    {"Normal", {50, 65, 85, 35, 35, 55}}}},
  {PokeNames::Crustle, {
    {"Normal", {70, 105, 125, 65, 75, 45}}}},
  {PokeNames::Scraggy, {
    {"Normal", {50, 75, 70, 35, 70, 48}}}},
  {PokeNames::Scrafty, {
    {"Normal", {65, 90, 115, 45, 115, 58}}}},
  {PokeNames::Sigilyph, {
    {"Normal", {72, 58, 80, 103, 80, 97}}}},
  {PokeNames::Yamask, {
    {"Normal", {38, 30, 85, 55, 65, 30}},
    {"Galarian Yamask", {38, 55, 85, 30, 65, 30}}}},
  {PokeNames::Cofagrigus, {
    {"Normal", {58, 50, 145, 95, 105, 30}}}},
  {PokeNames::Tirtouga, {
    {"Normal", {54, 78, 103, 53, 45, 22}}}},
  {PokeNames::Carracosta, {
    {"Normal", {74, 108, 133, 83, 65, 32}}}},
  {PokeNames::Archen, {
    {"Normal", {55, 112, 45, 74, 45, 70}}}},
  {PokeNames::Archeops, {
    {"Normal", {75, 140, 65, 112, 65, 110}}}},
  {PokeNames::Trubbish, {
    {"Normal", {50, 50, 62, 40, 62, 65}}}},
  {PokeNames::Garbodor, {
    {"Normal", {80, 95, 82, 60, 82, 75}}}},
  {PokeNames::Zorua, {
    {"Normal", {40, 65, 40, 80, 40, 65}},
    {"Hisuian Zorua", {35, 60, 40, 85, 40, 70}}}},
  {PokeNames::Zoroark, {
    {"Normal", {60, 105, 60, 120, 60, 105}},
    {"Hisuian Zoroark", {55, 100, 60, 125, 60, 110}}}},
  {PokeNames::Minccino, {
    {"Normal", {55, 50, 40, 40, 40, 75}}}},
  {PokeNames::Cinccino, {
    {"Normal", {75, 95, 60, 65, 60, 115}}}},
  {PokeNames::Gothita, {
    {"Normal", {45, 30, 50, 55, 65, 45}}}},
  {PokeNames::Gothorita, {
    {"Normal", {60, 45, 70, 75, 85, 55}}}},
  {PokeNames::Gothitelle, {
    {"Normal", {70, 55, 95, 95, 110, 65}}}},
  {PokeNames::Solosis, {
    {"Normal", {45, 30, 40, 105, 50, 20}}}},
  {PokeNames::Duosion, {
    {"Normal", {65, 40, 50, 125, 60, 30}}}},
  {PokeNames::Reuniclus, {
    {"Normal", {110, 65, 75, 125, 85, 30}}}},
  {PokeNames::Ducklett, {
    {"Normal", {62, 44, 50, 44, 50, 55}}}},
  {PokeNames::Swanna, {
    {"Normal", {75, 87, 63, 87, 63, 98}}}},
  {PokeNames::Vanillite, {
    {"Normal", {36, 50, 50, 65, 60, 44}}}},
  {PokeNames::Vanillish, {
    {"Normal", {51, 65, 65, 80, 75, 59}}}},
  {PokeNames::Vanilluxe, {
    {"Normal", {71, 95, 85, 110, 95, 79}}}},
  {PokeNames::Deerling, {
    {"Normal", {60, 60, 50, 40, 50, 75}}}},
  {PokeNames::Sawsbuck, {
    {"Normal", {80, 100, 70, 60, 70, 95}}}},
  {PokeNames::Emolga, {
    {"Normal", {55, 75, 60, 75, 60, 103}}}},
  {PokeNames::Karrablast, {
    {"Normal", {50, 75, 45, 40, 45, 60}}}},
  {PokeNames::Escavalier, {
    {"Normal", {70, 135, 105, 60, 105, 20}}}},
  {PokeNames::Foongus, {
    {"Normal", {69, 55, 45, 55, 55, 15}}}},
  {PokeNames::Amoonguss, {
    {"Normal", {114, 85, 70, 85, 80, 30}}}},
  {PokeNames::Frillish, {
    {"Normal", {55, 40, 50, 65, 85, 40}}}},
  {PokeNames::Jellicent, {
    {"Normal", {100, 60, 70, 85, 105, 60}}}},
  {PokeNames::Alomomola, {
    {"Normal", {165, 75, 80, 40, 45, 65}}}},
  {PokeNames::Joltik, {
    {"Normal", {50, 47, 50, 57, 50, 65}}}},
  {PokeNames::Galvantula, {
    {"Normal", {70, 77, 60, 97, 60, 108}}}},
  {PokeNames::Ferroseed, {
    {"Normal", {44, 50, 91, 24, 86, 10}}}},
  {PokeNames::Ferrothorn, {
    {"Normal", {74, 94, 131, 54, 116, 20}}}},
  {PokeNames::Klink, {
    {"Normal", {40, 55, 70, 45, 60, 30}}}},
  {PokeNames::Klang, {
    {"Normal", {60, 80, 95, 70, 85, 50}}}},
  {PokeNames::Klinklang, {
    {"Normal", {60, 100, 115, 70, 85, 90}}}},
  {PokeNames::Tynamo, {
    {"Normal", {35, 55, 40, 45, 40, 60}}}},
  {PokeNames::Eelektrik, {
    {"Normal", {65, 85, 70, 75, 70, 40}}}},
  {PokeNames::Eelektross, {
    {"Normal", {85, 115, 80, 105, 80, 50}}}},
  {PokeNames::Elgyem, {
    {"Normal", {55, 55, 55, 85, 55, 30}}}},
  {PokeNames::Beheeyem, {
    {"Normal", {75, 75, 75, 125, 95, 40}}}},
  {PokeNames::Litwick, {
    {"Normal", {50, 30, 55, 65, 55, 20}}}},
  {PokeNames::Lampent, {
    {"Normal", {60, 40, 60, 95, 60, 55}}}},
  {PokeNames::Chandelure, {
    {"Normal", {60, 55, 90, 145, 90, 80}}}},
  {PokeNames::Axew, {
    {"Normal", {46, 87, 60, 30, 40, 57}}}},
  {PokeNames::Fraxure, {
    {"Normal", {66, 117, 70, 40, 50, 67}}}},
  {PokeNames::Haxorus, {
    {"Normal", {76, 147, 90, 60, 70, 97}}}},
  {PokeNames::Cubchoo, {
    {"Normal", {55, 70, 40, 60, 40, 40}}}},
  {PokeNames::Beartic, {
    {"Normal", {95, 130, 80, 70, 80, 50}}}},
  {PokeNames::Cryogonal, {
    {"Normal", {80, 50, 50, 95, 135, 105}}}},
  {PokeNames::Shelmet, {
    {"Normal", {50, 40, 85, 40, 65, 25}}}},
  {PokeNames::Accelgor, {
    {"Normal", {80, 70, 40, 100, 60, 145}}}},
  {PokeNames::Stunfisk, {
    {"Normal", {109, 66, 84, 81, 99, 32}},
    {"Galarian Stunfisk", {109, 81, 99, 66, 84, 32}}}},
  {PokeNames::Mienfoo, {
    {"Normal", {45, 85, 50, 55, 50, 65}}}},
  {PokeNames::Mienshao, {
    {"Normal", {65, 125, 60, 95, 60, 105}}}},
  {PokeNames::Druddigon, {
    {"Normal", {77, 120, 90, 60, 90, 48}}}},
  {PokeNames::Golett, {
    {"Normal", {59, 74, 50, 35, 50, 35}}}},
  {PokeNames::Golurk, {
    {"Normal", {89, 124, 80, 55, 80, 55}}}},
  {PokeNames::Pawniard, {
    {"Normal", {45, 85, 70, 40, 40, 60}}}},
  {PokeNames::Bisharp, {
    {"Normal", {65, 125, 100, 60, 70, 70}}}},
  {PokeNames::Bouffalant, {
    {"Normal", {95, 110, 95, 40, 95, 55}}}},
  {PokeNames::Rufflet, {
    {"Normal", {70, 83, 50, 37, 50, 60}}}},
  {PokeNames::Braviary, {
    {"Normal", {100, 123, 75, 57, 75, 80}},
    {"Hisuian Braviary", {110, 83, 70, 112, 70, 65}}}},
  {PokeNames::Vullaby, {
    {"Normal", {70, 55, 75, 45, 65, 60}}}},
  {PokeNames::Mandibuzz, {
    {"Normal", {110, 65, 105, 55, 95, 80}}}},
  {PokeNames::Heatmor, {
    {"Normal", {85, 97, 66, 105, 66, 65}}}},
  {PokeNames::Durant, {
    {"Normal", {58, 109, 112, 48, 48, 109}}}},
  {PokeNames::Deino, {
    {"Normal", {52, 65, 50, 45, 50, 38}}}},
  {PokeNames::Zweilous, {
    {"Normal", {72, 85, 70, 65, 70, 58}}}},
  {PokeNames::Hydreigon, {
    {"Normal", {92, 105, 90, 125, 90, 98}}}},
  {PokeNames::Larvesta, {
    {"Normal", {55, 85, 55, 50, 55, 60}}}},
  {PokeNames::Volcarona, {
    {"Normal", {85, 60, 65, 135, 105, 100}}}},
  {PokeNames::Cobalion, {
    {"Normal", {91, 90, 129, 90, 72, 108}}}},
  {PokeNames::Terrakion, {
    {"Normal", {91, 129, 90, 72, 90, 108}}}},
  {PokeNames::Virizion, {
    {"Normal", {91, 90, 72, 90, 129, 108}}}},
  {PokeNames::Tornadus, {
    {"Incarnate Forme", {79, 115, 70, 125, 80, 111}},
    {"Therian Forme", {79, 100, 80, 110, 90, 121}}}},
  {PokeNames::Thundurus, {
    {"Incarnate Forme", {79, 115, 70, 125, 80, 111}},
    {"Therian Forme", {79, 105, 70, 145, 80, 101}}}},
  {PokeNames::Reshiram, {
    {"Normal", {100, 120, 100, 150, 120, 90}}}},
  {PokeNames::Zekrom, {
    {"Normal", {100, 150, 120, 120, 100, 90}}}},
  {PokeNames::Landorus, {
    {"Incarnate Forme", {89, 125, 90, 115, 80, 101}},
    {"Therian Forme", {89, 145, 90, 105, 80, 91}}}},
  {PokeNames::Kyurem, {
    {"Normal", {125, 130, 90, 130, 90, 95}},
    {"Black Kyurem", {125, 170, 100, 120, 90, 95}},
    {"White Kyurem", {125, 120, 90, 170, 100, 95}}}},
  {PokeNames::Keldeo, {
    {"Normal", {91, 72, 90, 129, 90, 108}}}},
  {PokeNames::Meloetta, {
    {"Aria Forme", {100, 77, 77, 128, 128, 90}},
    {"Pirouette Forme", {100, 128, 90, 77, 77, 128}}}},
  {PokeNames::Genesect, {
    {"Normal", {71, 120, 95, 120, 95, 99}}}},
  {PokeNames::Chespin, {
    {"Normal", {56, 61, 65, 48, 45, 38}}}},
  {PokeNames::Quilladin, {
    {"Normal", {61, 78, 95, 56, 58, 57}}}},
  {PokeNames::Chesnaught, {
    {"Normal", {88, 107, 122, 74, 75, 64}}}},
  {PokeNames::Fennekin, {
    {"Normal", {40, 45, 40, 62, 60, 60}}}},
  {PokeNames::Braixen, {
    {"Normal", {59, 59, 58, 90, 70, 73}}}},
  {PokeNames::Delphox, {
    {"Normal", {75, 69, 72, 114, 100, 104}}}},
  {PokeNames::Froakie, {
    {"Normal", {41, 56, 40, 62, 44, 71}}}},
  {PokeNames::Frogadier, {
    {"Normal", {54, 63, 52, 83, 56, 97}}}},
  {PokeNames::Greninja, {
    {"Normal", {72, 95, 67, 103, 71, 122}},
    {"Ash-Greninja", {72, 145, 67, 153, 71, 132}}}},
  {PokeNames::Bunnelby, {
    {"Normal", {38, 36, 38, 32, 36, 57}}}},
  {PokeNames::Diggersby, {
    {"Normal", {85, 56, 77, 50, 77, 78}}}},
  {PokeNames::Fletchling, {
    {"Normal", {45, 50, 43, 40, 38, 62}}}},
  {PokeNames::Fletchinder, {
    {"Normal", {62, 73, 55, 56, 52, 84}}}},
  {PokeNames::Talonflame, {
    {"Normal", {78, 81, 71, 74, 69, 126}}}},
  {PokeNames::Scatterbug, {
    {"Normal", {38, 35, 40, 27, 25, 35}}}},
  {PokeNames::Spewpa, {
    {"Normal", {45, 22, 60, 27, 30, 29}}}},
  {PokeNames::Vivillon, {
    {"Normal", {80, 52, 50, 90, 50, 89}}}},
  {PokeNames::Litleo, {
    {"Normal", {62, 50, 58, 73, 54, 72}}}},
  {PokeNames::Pyroar, {
    {"Normal", {86, 68, 72, 109, 66, 106}}}},
  {PokeNames::Flabebe, {
    {"Normal", {44, 38, 39, 61, 79, 42}}}},
  {PokeNames::Floette, {
    {"Normal", {54, 45, 47, 75, 98, 52}}}},
  {PokeNames::Florges, {
    {"Normal", {78, 65, 68, 112, 154, 75}}}},
  {PokeNames::Skiddo, {
    {"Normal", {66, 65, 48, 62, 57, 52}}}},
  {PokeNames::Gogoat, {
    {"Normal", {123, 100, 62, 97, 81, 68}}}},
  {PokeNames::Pancham, {
    {"Normal", {67, 82, 62, 46, 48, 43}}}},
  {PokeNames::Pangoro, {
    {"Normal", {95, 124, 78, 69, 71, 58}}}},
  {PokeNames::Furfrou, {
    {"Normal", {75, 80, 60, 65, 90, 102}}}},
  {PokeNames::Espurr, {
    {"Normal", {62, 48, 54, 63, 60, 68}}}},
  {PokeNames::Meowstic, {
    {"Normal", {74, 48, 76, 83, 81, 104}}}},
  {PokeNames::Honedge, {
    {"Normal", {45, 80, 100, 35, 37, 28}}}},
  {PokeNames::Doublade, {
    {"Normal", {59, 110, 150, 45, 49, 35}}}},
  {PokeNames::Aegislash, {
    {"Shield Forme", {60, 50, 140, 50, 140, 60}},
    {"Blade Forme", {60, 140, 50, 140, 50, 60}}}},
  {PokeNames::Spritzee, {
    {"Normal", {78, 52, 60, 63, 65, 23}}}},
  {PokeNames::Aromatisse, {
    {"Normal", {101, 72, 72, 99, 89, 29}}}},
  {PokeNames::Swirlix, {
    {"Normal", {62, 48, 66, 59, 57, 49}}}},
  {PokeNames::Slurpuff, {
    {"Normal", {82, 80, 86, 85, 75, 72}}}},
  {PokeNames::Inkay, {
    {"Normal", {53, 54, 53, 37, 46, 45}}}},
  {PokeNames::Malamar, {
    {"Normal", {86, 92, 88, 68, 75, 73}}}},
  {PokeNames::Binacle, {
    {"Normal", {42, 52, 67, 39, 56, 50}}}},
  {PokeNames::Barbaracle, {
    {"Normal", {72, 105, 115, 54, 86, 68}}}},
  {PokeNames::Skrelp, {
    {"Normal", {50, 60, 60, 60, 60, 30}}}},
  {PokeNames::Dragalge, {
    {"Normal", {65, 75, 90, 97, 123, 44}}}},
  {PokeNames::Clauncher, {
    {"Normal", {50, 53, 62, 58, 63, 44}}}},
  {PokeNames::Clawitzer, {
    {"Normal", {71, 73, 88, 120, 89, 59}}}},
  {PokeNames::Helioptile, {
    {"Normal", {44, 38, 33, 61, 43, 70}}}},
  {PokeNames::Heliolisk, {
    {"Normal", {62, 55, 52, 109, 94, 109}}}},
  {PokeNames::Tyrunt, {
    {"Normal", {58, 89, 77, 45, 45, 48}}}},
  {PokeNames::Tyrantrum, {
    {"Normal", {82, 121, 119, 69, 59, 71}}}},
  {PokeNames::Amaura, {
    {"Normal", {77, 59, 50, 67, 63, 46}}}},
  {PokeNames::Aurorus, {
    {"Normal", {123, 77, 72, 99, 92, 58}}}},
  {PokeNames::Sylveon, {
    {"Normal", {95, 65, 65, 110, 130, 60}}}},
  {PokeNames::Hawlucha, {
    {"Normal", {78, 92, 75, 74, 63, 118}}}},
  {PokeNames::Dedenne, {
    {"Normal", {67, 58, 57, 81, 67, 101}}}},
  {PokeNames::Carbink, {
    {"Normal", {50, 50, 150, 50, 150, 50}}}},
  {PokeNames::Goomy, {
    {"Normal", {45, 50, 35, 55, 75, 40}}}},
  {PokeNames::Sliggoo, {
    {"Normal", {68, 75, 53, 83, 113, 60}},
    {"Hisuian Sliggoo", {58, 75, 83, 83, 113, 40}}}},
  {PokeNames::Goodra, {
    {"Normal", {90, 100, 70, 110, 150, 80}},
    {"Hisuian Goodra", {80, 100, 100, 110, 150, 60}}}},
  {PokeNames::Klefki, {
    {"Normal", {57, 80, 91, 80, 87, 75}}}},
  {PokeNames::Phantump, {
    {"Normal", {43, 70, 48, 50, 60, 38}}}},
  {PokeNames::Trevenant, {
    {"Normal", {85, 110, 76, 65, 82, 56}}}},
  {PokeNames::Pumpkaboo, {
    {"Small Size", {44, 66, 70, 44, 55, 56}},
    {"Average Size", {49, 66, 70, 44, 55, 51}},
    {"Large Size", {54, 66, 70, 44, 55, 46}},
    {"Super Size", {59, 66, 70, 44, 55, 41}}}},
  {PokeNames::Gourgeist, {
    {"Small Size", {55, 85, 122, 58, 75, 99}},
    {"Average Size", {65, 90, 122, 58, 75, 84}},
    {"Large Size", {75, 95, 122, 58, 75, 69}},
    {"Super Size", {85, 100, 122, 58, 75, 54}}}},
  {PokeNames::Bergmite, {
    {"Normal", {55, 69, 85, 32, 35, 28}}}},
  {PokeNames::Avalugg, {
    {"Normal", {95, 117, 184, 44, 46, 28}},
    {"Hisuian Avalugg", {95, 127, 184, 34, 36, 38}}}},
  {PokeNames::Noibat, {
    {"Normal", {40, 30, 35, 45, 40, 55}}}},
  {PokeNames::Noivern, {
    {"Normal", {85, 70, 80, 97, 80, 123}}}},
  {PokeNames::Xerneas, {
    {"Normal", {126, 131, 95, 131, 98, 99}}}},
  {PokeNames::Yveltal, {
    {"Normal", {126, 131, 95, 131, 98, 99}}}},
  {PokeNames::Zygarde, {
    {"50% Forme", {108, 100, 121, 81, 95, 95}},
    {"10% Forme", {54, 100, 71, 61, 85, 115}},
    {"Complete Forme", {216, 100, 121, 91, 95, 85}}}},
  {PokeNames::Diancie, {
    {"Normal", {50, 100, 150, 100, 150, 50}},
    {"Mega Diancie", {50, 160, 110, 160, 110, 110}}}},
  {PokeNames::Hoopa, {
    {"Hoopa Confined", {80, 110, 60, 150, 130, 70}},
    {"Hoopa Unbound", {80, 160, 60, 170, 130, 80}}}},
  {PokeNames::Volcanion, {
    {"Normal", {80, 110, 120, 130, 90, 70}}}},
  {PokeNames::Rowlet, {
    {"Normal", {68, 55, 55, 50, 50, 42}}}},
  {PokeNames::Dartrix, {
    {"Normal", {78, 75, 75, 70, 70, 52}}}},
  {PokeNames::Decidueye, {
    {"Normal", {78, 107, 75, 100, 100, 70}},
    {"Hisuian Decidueye", {88, 112, 80, 95, 95, 60}}}},
  {PokeNames::Litten, {
    {"Normal", {45, 65, 40, 60, 40, 70}}}},
  {PokeNames::Torracat, {
    {"Normal", {65, 85, 50, 80, 50, 90}}}},
  {PokeNames::Incineroar, {
    {"Normal", {95, 115, 90, 80, 90, 60}}}},
  {PokeNames::Popplio, {
    {"Normal", {50, 54, 54, 66, 56, 40}}}},
  {PokeNames::Brionne, {
    {"Normal", {60, 69, 69, 91, 81, 50}}}},
  {PokeNames::Primarina, {
    {"Normal", {80, 74, 74, 126, 116, 60}}}},
  {PokeNames::Pikipek, {
    {"Normal", {35, 75, 30, 30, 30, 65}}}},
  {PokeNames::Trumbeak, {
    {"Normal", {55, 85, 50, 40, 50, 75}}}},
  {PokeNames::Toucannon, {
    {"Normal", {80, 120, 75, 75, 75, 60}}}},
  {PokeNames::Yungoos, {
    {"Normal", {48, 70, 30, 30, 30, 45}}}},
  {PokeNames::Gumshoos, {
    {"Normal", {88, 110, 60, 55, 60, 45}}}},
  {PokeNames::Grubbin, {
    {"Normal", {47, 62, 45, 55, 45, 46}}}},
  {PokeNames::Charjabug, {
    {"Normal", {57, 82, 95, 55, 75, 36}}}},
  {PokeNames::Vikavolt, {
    {"Normal", {77, 70, 90, 145, 75, 43}}}},
  {PokeNames::Crabrawler, {
    {"Normal", {47, 82, 57, 42, 47, 63}}}},
  {PokeNames::Crabominable, {
    {"Normal", {97, 132, 77, 62, 67, 43}}}},
  {PokeNames::Oricorio, {
    {"Normal", {75, 70, 70, 98, 70, 93}}}},
  {PokeNames::Cutiefly, {
    {"Normal", {40, 45, 40, 55, 40, 84}}}},
  {PokeNames::Ribombee, {
    {"Normal", {60, 55, 60, 95, 70, 124}}}},
  {PokeNames::Rockruff, {
    {"Normal", {45, 65, 40, 30, 40, 60}}}},
  {PokeNames::Lycanroc, {
    {"Midday Form", {75, 115, 65, 55, 65, 112}},
    {"Midnight Form", {85, 115, 75, 55, 75, 82}},
    {"Dusk Form", {75, 117, 65, 55, 65, 110}}}},
  {PokeNames::Wishiwashi, {
    {"Solo Form", {45, 20, 20, 25, 25, 40}},
    {"School Form", {45, 140, 130, 140, 135, 30}}}},
  {PokeNames::Mareanie, {
    {"Normal", {50, 53, 62, 43, 52, 45}}}},
  {PokeNames::Toxapex, {
    {"Normal", {50, 63, 152, 53, 142, 35}}}},
  {PokeNames::Mudbray, {
    {"Normal", {70, 100, 70, 45, 55, 45}}}},
  {PokeNames::Mudsdale, {
    {"Normal", {100, 125, 100, 55, 85, 35}}}},
  {PokeNames::Dewpider, {
    {"Normal", {38, 40, 52, 40, 72, 27}}}},
  {PokeNames::Araquanid, {
    {"Normal", {68, 70, 92, 50, 132, 42}}}},
  {PokeNames::Fomantis, {
    {"Normal", {40, 55, 35, 50, 35, 35}}}},
  {PokeNames::Lurantis, {
    {"Normal", {70, 105, 90, 80, 90, 45}}}},
  {PokeNames::Morelull, {
    {"Normal", {40, 35, 55, 65, 75, 15}}}},
  {PokeNames::Shiinotic, {
    {"Normal", {60, 45, 80, 90, 100, 30}}}},
  {PokeNames::Salandit, {
    {"Normal", {48, 44, 40, 71, 40, 77}}}},
  {PokeNames::Salazzle, {
    {"Normal", {68, 64, 60, 111, 60, 117}}}},
  {PokeNames::Stufful, {
    {"Normal", {70, 75, 50, 45, 50, 50}}}},
  {PokeNames::Bewear, {
    {"Normal", {120, 125, 80, 55, 60, 60}}}},
  {PokeNames::Bounsweet, {
    {"Normal", {42, 30, 38, 30, 38, 32}}}},
  {PokeNames::Steenee, {
    {"Normal", {52, 40, 48, 40, 48, 62}}}},
  {PokeNames::Tsareena, {
    {"Normal", {72, 120, 98, 50, 98, 72}}}},
  {PokeNames::Comfey, {
    {"Normal", {51, 52, 90, 82, 110, 100}}}},
  {PokeNames::Oranguru, {
    {"Normal", {90, 60, 80, 90, 110, 60}}}},
  {PokeNames::Passimian, {
    {"Normal", {100, 120, 90, 40, 60, 80}}}},
  {PokeNames::Wimpod, {
    {"Normal", {25, 35, 40, 20, 30, 80}}}},
  {PokeNames::Golisopod, {
    {"Normal", {75, 125, 140, 60, 90, 40}}}},
  {PokeNames::Sandygast, {
    {"Normal", {55, 55, 80, 70, 45, 15}}}},
  {PokeNames::Palossand, {
    {"Normal", {85, 75, 110, 100, 75, 35}}}},
  {PokeNames::Pyukumuku, {
    {"Normal", {55, 60, 130, 30, 130, 5}}}},
  {PokeNames::Type_Null, {
    {"Normal", {95, 95, 95, 95, 95, 59}}}},
  {PokeNames::Silvally, {
    {"Normal", {95, 95, 95, 95, 95, 95}}}},
  {PokeNames::Minior, {
    {"Meteor Form", {60, 60, 100, 60, 100, 60}},
    {"Core", {60, 100, 60, 100, 60, 120}}}},
  {PokeNames::Komala, {
    {"Normal", {65, 115, 65, 75, 95, 65}}}},
  {PokeNames::Turtonator, {
    {"Normal", {60, 78, 135, 91, 85, 36}}}},
  {PokeNames::Togedemaru, {
    {"Normal", {65, 98, 63, 40, 73, 96}}}},
  {PokeNames::Mimikyu, {
    {"Normal", {55, 90, 80, 50, 105, 96}}}},
  {PokeNames::Bruxish, {
    {"Normal", {68, 105, 70, 70, 70, 92}}}},
  {PokeNames::Drampa, {
    {"Normal", {78, 60, 85, 135, 91, 36}}}},
  {PokeNames::Dhelmise, {
    {"Normal", {70, 131, 100, 86, 90, 40}}}},
  {PokeNames::Jangmo_o, {
    {"Normal", {45, 55, 65, 45, 45, 45}}}},
  {PokeNames::Hakamo_o, {
    {"Normal", {55, 75, 90, 65, 70, 65}}}},
  {PokeNames::Kommo_o, {
    {"Normal", {75, 110, 125, 100, 105, 85}}}},
  {PokeNames::Tapu_Koko, {
    {"Normal", {70, 115, 85, 95, 75, 130}}}},
  {PokeNames::Tapu_Lele, {
    {"Normal", {70, 85, 75, 130, 115, 95}}}},
  {PokeNames::Tapu_Bulu, {
    {"Normal", {70, 130, 115, 85, 95, 75}}}},
  {PokeNames::Tapu_Fini, {
    {"Normal", {70, 75, 115, 95, 130, 85}}}},
  {PokeNames::Cosmog, {
    {"Normal", {43, 29, 31, 29, 31, 37}}}},
  {PokeNames::Cosmoem, {
    {"Normal", {43, 29, 131, 29, 131, 37}}}},
  {PokeNames::Solgaleo, {
    {"Normal", {137, 137, 107, 113, 89, 97}}}},
  {PokeNames::Lunala, {
    {"Normal", {137, 113, 89, 137, 107, 97}}}},
  {PokeNames::Nihilego, {
    {"Normal", {109, 53, 47, 127, 131, 103}}}},
  {PokeNames::Buzzwole, {
    {"Normal", {107, 139, 139, 53, 53, 79}}}},
  {PokeNames::Pheromosa, {
    {"Normal", {71, 137, 37, 137, 37, 151}}}},
  {PokeNames::Xurkitree, {
    {"Normal", {83, 89, 71, 173, 71, 83}}}},
  {PokeNames::Celesteela, {
    {"Normal", {97, 101, 103, 107, 101, 61}}}},
  {PokeNames::Kartana, {
    {"Normal", {59, 181, 131, 59, 31, 109}}}},
  {PokeNames::Guzzlord, {
    {"Normal", {223, 101, 53, 97, 53, 43}}}},
  {PokeNames::Necrozma, {
    {"Normal", {97, 107, 101, 127, 89, 79}},
    {"Dusk Mane Necrozma", {97, 157, 127, 113, 109, 77}},
    {"Dawn Wings Necrozma", {97, 113, 109, 157, 127, 77}},
    {"Ultra Necrozma", {97, 167, 97, 167, 97, 129}}}},
  {PokeNames::Magearna, {
    {"Normal", {80, 95, 115, 130, 115, 65}}}},
  {PokeNames::Marshadow, {
    {"Normal", {90, 125, 80, 90, 90, 125}}}},
  {PokeNames::Poipole, {
    {"Normal", {67, 73, 67, 73, 67, 73}}}},
  {PokeNames::Naganadel, {
    {"Normal", {73, 73, 73, 127, 73, 121}}}},
  {PokeNames::Stakataka, {
    {"Normal", {61, 131, 211, 53, 101, 13}}}},
  {PokeNames::Blacephalon, {
    {"Normal", {53, 127, 53, 151, 79, 107}}}},
  {PokeNames::Zeraora, {
    {"Normal", {88, 112, 75, 102, 80, 143}}}},
  {PokeNames::Meltan, {
    {"Normal", {46, 65, 65, 55, 35, 34}}}},
  {PokeNames::Melmetal, {
    {"Normal", {135, 143, 143, 80, 65, 34}}}},
  {PokeNames::Grookey, {
    {"Normal", {50, 65, 50, 40, 40, 65}}}},
  {PokeNames::Thwackey, {
    {"Normal", {70, 85, 70, 55, 60, 80}}}},
  {PokeNames::Rillaboom, {
    {"Normal", {100, 125, 90, 60, 70, 85}}}},
  {PokeNames::Scorbunny, {
    {"Normal", {50, 71, 40, 40, 40, 69}}}},
  {PokeNames::Raboot, {
    {"Normal", {65, 86, 60, 55, 60, 94}}}},
  {PokeNames::Cinderace, {
    {"Normal", {80, 116, 75, 65, 75, 119}}}},
  {PokeNames::Sobble, {
    {"Normal", {50, 40, 40, 70, 40, 70}}}},
  {PokeNames::Drizzile, {
    {"Normal", {65, 60, 55, 95, 55, 90}}}},
  {PokeNames::Inteleon, {
    {"Normal", {70, 85, 65, 125, 65, 120}}}},
  {PokeNames::Skwovet, {
    {"Normal", {70, 55, 55, 35, 35, 25}}}},
  {PokeNames::Greedent, {
    {"Normal", {120, 95, 95, 55, 75, 20}}}},
  {PokeNames::Rookidee, {
    {"Normal", {38, 47, 35, 33, 35, 57}}}},
  {PokeNames::Corvisquire, {
    {"Normal", {68, 67, 55, 43, 55, 77}}}},
  {PokeNames::Corviknight, {
    {"Normal", {98, 87, 105, 53, 85, 67}}}},
  {PokeNames::Blipbug, {
    {"Normal", {25, 20, 20, 25, 45, 45}}}},
  {PokeNames::Dottler, {
    {"Normal", {50, 35, 80, 50, 90, 30}}}},
  {PokeNames::Orbeetle, {
    {"Normal", {60, 45, 110, 80, 120, 90}}}},
  {PokeNames::Nickit, {
    {"Normal", {40, 28, 28, 47, 52, 50}}}},
  {PokeNames::Thievul, {
    {"Normal", {70, 58, 58, 87, 92, 90}}}},
  {PokeNames::Gossifleur, {
    {"Normal", {40, 40, 60, 40, 60, 10}}}},
  {PokeNames::Eldegoss, {
    {"Normal", {60, 50, 90, 80, 120, 60}}}},
  {PokeNames::Wooloo, {
    {"Normal", {42, 40, 55, 40, 45, 48}}}},
  {PokeNames::Dubwool, {
    {"Normal", {72, 80, 100, 60, 90, 88}}}},
  {PokeNames::Chewtle, {
    {"Normal", {50, 64, 50, 38, 38, 44}}}},
  {PokeNames::Drednaw, {
    {"Normal", {90, 115, 90, 48, 68, 74}}}},
  {PokeNames::Yamper, {
    {"Normal", {59, 45, 50, 40, 50, 26}}}},
  {PokeNames::Boltund, {
    {"Normal", {69, 90, 60, 90, 60, 121}}}},
  {PokeNames::Rolycoly, {
    {"Normal", {30, 40, 50, 40, 50, 30}}}},
  {PokeNames::Carkol, {
    {"Normal", {80, 60, 90, 60, 70, 50}}}},
  {PokeNames::Coalossal, {
    {"Normal", {110, 80, 120, 80, 90, 30}}}},
  {PokeNames::Applin, {
    {"Normal", {40, 40, 80, 40, 40, 20}}}},
  {PokeNames::Flapple, {
    {"Normal", {70, 110, 80, 95, 60, 70}}}},
  {PokeNames::Appletun, {
    {"Normal", {110, 85, 80, 100, 80, 30}}}},
  {PokeNames::Silicobra, {
    {"Normal", {52, 57, 75, 35, 50, 46}}}},
  {PokeNames::Sandaconda, {
    {"Normal", {72, 107, 125, 65, 70, 71}}}},
  {PokeNames::Cramorant, {
    {"Normal", {70, 85, 55, 85, 95, 85}}}},
  {PokeNames::Arrokuda, {
    {"Normal", {41, 63, 40, 40, 30, 66}}}},
  {PokeNames::Barraskewda, {
    {"Normal", {61, 123, 60, 60, 50, 136}}}},
  {PokeNames::Toxel, {
    {"Normal", {40, 38, 35, 54, 35, 40}}}},
  {PokeNames::Toxtricity, {
    {"Normal", {75, 98, 70, 114, 70, 75}}}},
  {PokeNames::Sizzlipede, {
    {"Normal", {50, 65, 45, 50, 50, 45}}}},
  {PokeNames::Centiskorch, {
    {"Normal", {100, 115, 65, 90, 90, 65}}}},
  {PokeNames::Clobbopus, {
    {"Normal", {50, 68, 60, 50, 50, 32}}}},
  {PokeNames::Grapploct, {
    {"Normal", {80, 118, 90, 70, 80, 42}}}},
  {PokeNames::Sinistea, {
    {"Normal", {40, 45, 45, 74, 54, 50}}}},
  {PokeNames::Polteageist, {
    {"Normal", {60, 65, 65, 134, 114, 70}}}},
  {PokeNames::Hatenna, {
    {"Normal", {42, 30, 45, 56, 53, 39}}}},
  {PokeNames::Hattrem, {
    {"Normal", {57, 40, 65, 86, 73, 49}}}},
  {PokeNames::Hatterene, {
    {"Normal", {57, 90, 95, 136, 103, 29}}}},
  {PokeNames::Impidimp, {
    {"Normal", {45, 45, 30, 55, 40, 50}}}},
  {PokeNames::Morgrem, {
    {"Normal", {65, 60, 45, 75, 55, 70}}}},
  {PokeNames::Grimmsnarl, {
    {"Normal", {95, 120, 65, 95, 75, 60}}}},
  {PokeNames::Obstagoon, {
    {"Normal", {93, 90, 101, 60, 81, 95}}}},
  {PokeNames::Perrserker, {
    {"Normal", {70, 110, 100, 50, 60, 50}}}},
  {PokeNames::Cursola, {
    {"Normal", {60, 95, 50, 145, 130, 30}}}},
  {PokeNames::Sirfetchd, {
    {"Normal", {62, 135, 95, 68, 82, 65}}}},
  {PokeNames::Mr_Rime, {
    {"Normal", {80, 85, 75, 110, 100, 70}}}},
  {PokeNames::Runerigus, {
    {"Normal", {58, 95, 145, 50, 105, 30}}}},
  {PokeNames::Milcery, {
    {"Normal", {45, 40, 40, 50, 61, 34}}}},
  {PokeNames::Alcremie, {
    {"Normal", {65, 60, 75, 110, 121, 64}}}},
  {PokeNames::Falinks, {
    {"Normal", {65, 100, 100, 70, 60, 75}}}},
  {PokeNames::Pincurchin, {
    {"Normal", {48, 101, 95, 91, 85, 15}}}},
  {PokeNames::Snom, {
    {"Normal", {30, 25, 35, 45, 30, 20}}}},
  {PokeNames::Frosmoth, {
    {"Normal", {70, 65, 60, 125, 90, 65}}}},
  {PokeNames::Stonjourner, {
    {"Normal", {100, 125, 135, 20, 20, 70}}}},
  {PokeNames::Eiscue, {
    {"Ice Face", {75, 80, 110, 65, 90, 50}},
    {"Noice Face", {75, 80, 70, 65, 50, 130}}}},
  {PokeNames::Indeedee, {
    {"Male", {60, 65, 55, 105, 95, 95}},
    {"Female", {70, 55, 65, 95, 105, 85}}}},
  {PokeNames::Morpeko, {
    {"Normal", {58, 95, 58, 70, 58, 97}}}},
  {PokeNames::Cufant, {
    {"Normal", {72, 80, 49, 40, 49, 40}}}},
  {PokeNames::Copperajah, {
    {"Normal", {122, 130, 69, 80, 69, 30}}}},
  {PokeNames::Dracozolt, {
    {"Normal", {90, 100, 90, 80, 70, 75}}}},
  {PokeNames::Arctozolt, {
    {"Normal", {90, 100, 90, 90, 80, 55}}}},
  {PokeNames::Dracovish, {
    {"Normal", {90, 90, 100, 70, 80, 75}}}},
  {PokeNames::Arctovish, {
    {"Normal", {90, 90, 100, 80, 90, 55}}}},
  {PokeNames::Duraludon, {
    {"Normal", {70, 95, 115, 120, 50, 85}}}},
  {PokeNames::Dreepy, {
    {"Normal", {28, 60, 30, 40, 30, 82}}}},
  {PokeNames::Drakloak, {
    {"Normal", {68, 80, 50, 60, 50, 102}}}},
  {PokeNames::Dragapult, {
    {"Normal", {88, 120, 75, 100, 75, 142}}}},
  {PokeNames::Zacian, {
    {"Hero of Many Battles", {92, 120, 115, 80, 115, 138}},
    {"Crowned Sword", {92, 150, 115, 80, 115, 148}}}},
  {PokeNames::Zamazenta, {
    {"Hero of Many Battles", {92, 120, 115, 80, 115, 138}},
    {"Crowned Shield", {92, 120, 140, 80, 140, 128}}}},
  {PokeNames::Eternatus, {
    {"Normal", {140, 85, 95, 145, 95, 130}},
    {"Eternamax Eternatus", {255, 115, 250, 125, 250, 130}}}},
  {PokeNames::Kubfu, {
    {"Normal", {60, 90, 60, 53, 50, 72}}}},
  {PokeNames::Urshifu, {
    {"Normal", {100, 130, 100, 63, 60, 97}}}},
  {PokeNames::Zarude, {
    {"Normal", {105, 120, 105, 70, 95, 105}}}},
  {PokeNames::Regieleki, {
    {"Normal", {80, 100, 50, 100, 50, 200}}}},
  {PokeNames::Regidrago, {
    {"Normal", {200, 100, 50, 100, 50, 80}}}},
  {PokeNames::Glastrier, {
    {"Normal", {100, 145, 130, 65, 110, 30}}}},
  {PokeNames::Spectrier, {
    {"Normal", {100, 65, 60, 145, 80, 130}}}},
  {PokeNames::Calyrex, {
    {"Normal", {100, 80, 80, 80, 80, 80}},
    {"Ice Rider Calyrex", {100, 165, 150, 85, 130, 50}},
    {"Shadow Rider Calyrex", {100, 85, 80, 165, 100, 150}}}},
  {PokeNames::Wyrdeer, {
    {"Normal", {103, 105, 72, 105, 75, 65}}}},
  {PokeNames::Kleavor, {
    {"Normal", {70, 135, 95, 45, 70, 85}}}},
  {PokeNames::Ursaluna, {
    {"Normal", {130, 140, 105, 45, 80, 50}}}},
  {PokeNames::Basculegion, {
    {"Male", {120, 112, 65, 80, 75, 78}},
    {"Female", {120, 92, 65, 100, 75, 78}}}},
  {PokeNames::Sneasler, {
    {"Normal", {80, 130, 60, 40, 80, 120}}}},
  {PokeNames::Overqwil, {
    {"Normal", {85, 115, 95, 65, 65, 85}}}},
  {PokeNames::Enamorus, {
    {"Incarnate Forme", {74, 115, 70, 135, 80, 106}},
    {"Therian Forme", {74, 115, 110, 135, 100, 46}}}},
  {PokeNames::Sprigatito, {
    {"Normal", {40, 61, 54, 45, 45, 65}}}},
  {PokeNames::Floragato, {
    {"Normal", {61, 80, 63, 60, 63, 83}}}},
  {PokeNames::Meowscarada, {
    {"Normal", {76, 110, 70, 81, 70, 123}}}},
  {PokeNames::Fuecoco, {
    {"Normal", {67, 45, 59, 63, 40, 36}}}},
  {PokeNames::Crocalor, {
    {"Normal", {81, 55, 78, 90, 58, 49}}}},
  {PokeNames::Skeledirge, {
    {"Normal", {104, 75, 100, 110, 75, 66}}}},
  {PokeNames::Quaxly, {
    {"Normal", {55, 65, 45, 50, 45, 50}}}},
  {PokeNames::Quaxwell, {
    {"Normal", {70, 85, 65, 65, 60, 65}}}},
  {PokeNames::Quaquaval, {
    {"Normal", {85, 120, 80, 85, 75, 85}}}},
  {PokeNames::Lechonk, {
    {"Normal", {54, 45, 40, 35, 45, 35}}}},
  {PokeNames::Oinkologne, {
    {"Male", {110, 100, 75, 59, 80, 65}},
    {"Female", {115, 90, 70, 59, 90, 65}}}},
  {PokeNames::Tarountula, {
    {"Normal", {35, 41, 45, 29, 40, 20}}}},
  {PokeNames::Spidops, {
    {"Normal", {60, 79, 92, 52, 86, 35}}}},
  {PokeNames::Nymble, {
    {"Normal", {33, 46, 40, 21, 25, 45}}}},
  {PokeNames::Lokix, {
    {"Normal", {71, 102, 78, 52, 55, 92}}}},
  {PokeNames::Pawmi, {
    {"Normal", {45, 50, 20, 40, 25, 60}}}},
  {PokeNames::Pawmo, {
    {"Normal", {60, 75, 40, 50, 40, 85}}}},
  {PokeNames::Pawmot, {
    {"Normal", {70, 115, 70, 70, 60, 105}}}},
  {PokeNames::Tandemaus, {
    {"Normal", {50, 50, 45, 40, 45, 75}}}},
  {PokeNames::Maushold, {
    {"Normal", {74, 75, 70, 65, 75, 111}}}},
  {PokeNames::Fidough, {
    {"Normal", {37, 55, 70, 30, 55, 65}}}},
  {PokeNames::Dachsbun, {
    {"Normal", {57, 80, 115, 50, 80, 95}}}},
  {PokeNames::Smoliv, {
    {"Normal", {41, 35, 45, 58, 51, 30}}}},
  {PokeNames::Dolliv, {
    {"Normal", {52, 53, 60, 78, 78, 33}}}},
  {PokeNames::Arboliva, {
    {"Normal", {78, 69, 90, 125, 109, 39}}}},
  {PokeNames::Squawkabilly, {
    {"Normal", {82, 96, 51, 45, 51, 92}}}},
  {PokeNames::Nacli, {
    {"Normal", {55, 55, 75, 35, 35, 25}}}},
  {PokeNames::Naclstack, {
    {"Normal", {60, 60, 100, 35, 65, 35}}}},
  {PokeNames::Garganacl, {
    {"Normal", {100, 100, 130, 45, 90, 35}}}},
  {PokeNames::Charcadet, {
    {"Normal", {40, 50, 40, 50, 40, 35}}}},
  {PokeNames::Armarouge, {
    {"Normal", {85, 60, 100, 125, 80, 75}}}},
  {PokeNames::Ceruledge, {
    {"Normal", {75, 125, 80, 60, 100, 85}}}},
  {PokeNames::Tadbulb, {
    {"Normal", {61, 31, 41, 59, 35, 45}}}},
  {PokeNames::Bellibolt, {
    {"Normal", {109, 64, 91, 103, 83, 45}}}},
  {PokeNames::Wattrel, {
    {"Normal", {40, 40, 35, 55, 40, 70}}}},
  {PokeNames::Kilowattrel, {
    {"Normal", {70, 70, 60, 105, 60, 125}}}},
  {PokeNames::Maschiff, {
    {"Normal", {60, 78, 60, 40, 51, 51}}}},
  {PokeNames::Mabosstiff, {
    {"Normal", {80, 120, 90, 60, 70, 85}}}},
  {PokeNames::Shroodle, {
    {"Normal", {40, 65, 35, 40, 35, 75}}}},
  {PokeNames::Grafaiai, {
    {"Normal", {63, 95, 65, 80, 72, 110}}}},
  {PokeNames::Bramblin, {
    {"Normal", {40, 65, 30, 45, 35, 60}}}},
  {PokeNames::Brambleghast, {
    {"Normal", {55, 115, 70, 80, 70, 90}}}},
  {PokeNames::Toedscool, {
    {"Normal", {40, 40, 35, 50, 100, 70}}}},
  {PokeNames::Toedscruel, {
    {"Normal", {80, 70, 65, 80, 120, 100}}}},
  {PokeNames::Klawf, {
    {"Normal", {70, 100, 115, 35, 55, 75}}}},
  {PokeNames::Capsakid, {
    {"Normal", {50, 62, 40, 62, 40, 50}}}},
  {PokeNames::Scovillain, {
    {"Normal", {65, 108, 65, 108, 65, 75}}}},
  {PokeNames::Rellor, {
    {"Normal", {41, 50, 60, 31, 58, 30}}}},
  {PokeNames::Rabsca, {
    {"Normal", {75, 50, 85, 115, 100, 45}}}},
  {PokeNames::Flittle, {
    {"Normal", {30, 35, 30, 55, 30, 75}}}},
  {PokeNames::Espathra, {
    {"Normal", {95, 60, 60, 101, 60, 105}}}},
  {PokeNames::Tinkatink, {
    {"Normal", {50, 45, 45, 35, 64, 58}}}},
  {PokeNames::Tinkatuff, {
    {"Normal", {65, 55, 55, 45, 82, 78}}}},
  {PokeNames::Tinkaton, {
    {"Normal", {85, 75, 77, 70, 105, 94}}}},
  {PokeNames::Wiglett, {
    {"Normal", {10, 55, 25, 35, 25, 95}}}},
  {PokeNames::Wugtrio, {
    {"Normal", {35, 100, 50, 50, 70, 120}}}},
  {PokeNames::Bombirdier, {
    {"Normal", {70, 103, 85, 60, 85, 82}}}},
  {PokeNames::Finizen, {
    {"Normal", {70, 45, 40, 45, 40, 75}}}},
  {PokeNames::Palafin, {
    {"Zero", {100, 70, 72, 53, 62, 100}},
    {"Hero", {100, 160, 97, 106, 87, 100}}}},
  {PokeNames::Varoom, {
    {"Normal", {45, 70, 63, 30, 45, 47}}}},
  {PokeNames::Revavroom, {
    {"Normal", {80, 119, 90, 54, 67, 90}}}},
  {PokeNames::Cyclizar, {
    {"Normal", {70, 95, 65, 85, 65, 121}}}},
  {PokeNames::Orthworm, {
    {"Normal", {70, 85, 145, 60, 55, 65}}}},
  {PokeNames::Glimmet, {
    {"Normal", {48, 35, 42, 105, 60, 60}}}},
  {PokeNames::Glimmora, {
    {"Normal", {83, 55, 90, 130, 81, 86}}}},
  {PokeNames::Greavard, {
    {"Normal", {50, 61, 60, 30, 55, 34}}}},
  {PokeNames::Houndstone, {
    {"Normal", {72, 101, 100, 50, 97, 68}}}},
  {PokeNames::Flamigo, {
    {"Normal", {82, 115, 74, 75, 64, 90}}}},
  {PokeNames::Cetoddle, {
    {"Normal", {108, 68, 45, 30, 40, 43}}}},
  {PokeNames::Cetitan, {
    {"Normal", {170, 113, 65, 45, 55, 73}}}},
  {PokeNames::Veluza, {
    {"Normal", {90, 102, 73, 78, 65, 70}}}},
  {PokeNames::Dondozo, {
    {"Normal", {150, 100, 115, 65, 65, 35}}}},
  {PokeNames::Tatsugiri, {
    {"Normal", {68, 50, 60, 120, 95, 82}}}},
  {PokeNames::Annihilape, {
    {"Normal", {110, 115, 80, 50, 90, 90}}}},
  {PokeNames::Clodsire, {
    {"Normal", {130, 75, 60, 45, 100, 20}}}},
  {PokeNames::Farigiraf, {
    {"Normal", {120, 90, 70, 110, 70, 60}}}},
  {PokeNames::Dudunsparce, {
    {"Normal", {125, 100, 80, 85, 75, 55}}}},
  {PokeNames::Kingambit, {
    {"Normal", {100, 135, 120, 60, 85, 50}}}},
  {PokeNames::Great_Tusk, {
    {"Normal", {115, 131, 131, 53, 53, 87}}}},
  {PokeNames::Scream_Tail, {
    {"Normal", {115, 65, 99, 65, 115, 111}}}},
  {PokeNames::Brute_Bonnet, {
    {"Normal", {111, 127, 99, 79, 99, 55}}}},
  {PokeNames::Flutter_Mane, {
    {"Normal", {55, 55, 55, 135, 135, 135}}}},
  {PokeNames::Slither_Wing, {
    {"Normal", {85, 135, 79, 85, 105, 81}}}},
  {PokeNames::Sandy_Shocks, {
    {"Normal", {85, 81, 97, 121, 85, 101}}}},
  {PokeNames::Iron_Treads, {
    {"Normal", {90, 112, 120, 72, 70, 106}}}},
  {PokeNames::Iron_Bundle, {
    {"Normal", {56, 80, 114, 124, 60, 136}}}},
  {PokeNames::Iron_Hands, {
    {"Normal", {154, 140, 108, 50, 68, 50}}}},
  {PokeNames::Iron_Jugulis, {
    {"Normal", {94, 80, 86, 122, 80, 108}}}},
  {PokeNames::Iron_Moth, {
    {"Normal", {80, 70, 60, 140, 110, 110}}}},
  {PokeNames::Iron_Thorns, {
    {"Normal", {100, 134, 110, 70, 84, 72}}}},
  {PokeNames::Frigibax, {
    {"Normal", {65, 75, 45, 35, 45, 55}}}},
  {PokeNames::Arctibax, {
    {"Normal", {90, 95, 66, 45, 65, 62}}}},
  {PokeNames::Baxcalibur, {
    {"Normal", {115, 145, 92, 75, 86, 87}}}},
  {PokeNames::Gimmighoul, {
    {"Chest Form", {45, 30, 70, 75, 70, 10}},
    {"Roaming Form", {45, 30, 25, 75, 45, 80}}}},
  {PokeNames::Gholdengo, {
    {"Normal", {87, 60, 95, 133, 91, 84}}}},
  {PokeNames::Wo_Chien, {
    {"Normal", {85, 85, 100, 95, 135, 70}}}},
  {PokeNames::Chien_Pao, {
    {"Normal", {80, 120, 80, 90, 65, 135}}}},
  {PokeNames::Ting_Lu, {
    {"Normal", {155, 110, 125, 55, 80, 45}}}},
  {PokeNames::Chi_Yu, {
    {"Normal", {55, 80, 80, 135, 120, 100}}}},
  {PokeNames::Roaring_Moon, {
    {"Normal", {105, 139, 71, 55, 101, 119}}}},
  {PokeNames::Iron_Valiant, {
    {"Normal", {74, 130, 90, 120, 60, 116}}}},
  {PokeNames::Koraidon, {
    {"Normal", {100, 135, 115, 85, 100, 135}}}},
  {PokeNames::Miraidon, {
    {"Normal", {100, 85, 100, 135, 115, 135}}}}
};

iStats getStatsByPokemon(PokeNames pkQuery) {
  FormCount pokemon = pkStats.at(pkQuery);
  return iStats(pokemon.at(0).second);
}

} // namespace Poke
