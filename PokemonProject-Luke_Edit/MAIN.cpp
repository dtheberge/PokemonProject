// Pokemon Project
//Authors: Derryk Theberge and Luke McLaughlin
// Test Visual Studio

#include <iostream>
#include <string>
#include <vector>
#include <map>

#include "ATTACK.h"
#include "ITEM.h"
#include "NPC.h"
#include "PERSON.h"
#include "PLAYER.h"
#include "POKEMON.h"
#include "ENUMS.h"
#include "ATT_FUNCTS.h"

using namespace std;
using namespace ENUMS;
using namespace ATT_FUNCTS;

int NPC::NPC_Count = 0;

int main()
{
  // test
  std::map<string, string (*)(POKEMON Attacker, POKEMON Defender)> functions;

  //SPECIAL ATTACKS
  functions["Absorb"]         = &Absorb;
  functions["Acid"]           = &Acid;
  functions["Aurora_Beam"]    = &Aurora_Beam;
  functions["Blizzard"]       = &Blizzard;
  functions["Bubble"]         = &Bubble;
  functions["Bubble_Beam"]    = &Bubble_Beam;
  functions["Confusion"]      = &Confusion;
  functions["Dragon_Rage"]    = &Dragon_Rage;
  functions["Dream_Eater"]    = &Dream_Eater;
  functions["Ember"]          = &Ember;
  functions["Fire_Blast"]     = &Fire_Blast;
  functions["Fire_Spin"]      = &Fire_Spin;
  functions["Flamethrower"]   = &Flamethrower;
  functions["Gust"]           = &Gust;
  functions["Hydro_Pump"]     = &Hydro_Pump;
  functions["Hyper_Beam"]     = &Hyper_Beam;
  functions["Ice_Beam"]       = &Ice_Beam;
  functions["Mega_Drain"]     = &Mega_Drain;
  functions["Night_Shade"]    = &Night_Shade;
  functions["Petal_Dance"]    = &Petal_Dance;
  functions["Psybeam"]        = &Psybeam;
  functions["Psychic"]        = &Psychic;
  functions["Psywave"]        = &Psywave;
  functions["Razor_Wind"]     = &Razor_Wind;
  functions["Sludge"]         = &Sludge;
  functions["Smog"]           = &Smog;
  functions["Solar_Beam"]     = &Solar_Beam;
  functions["Sonic_Boom"]     = &Sonic_Boom;
  functions["Surf"]           = &Surf;
  functions["Swift"]          = &Swift;
  functions["Thunder"]        = &Thunder;
  functions["Thunder Shock"]  = &Thunder_Shock;
  functions["Thunderbolt"]    = &Thunderbolt;
  functions["Tri_Attack"]     = &Tri_Attack;
  functions["Water_Gun"]      = &Water_Gun;

  //PHYSICAL MOVES
  functions["Barrage"]        = &Barrage;
  functions["Bide"]           = &Bide;
  functions["Bind"]           = &Bind;
  functions["Bite"]           = &Bite;
  functions["Body Slam"]      = &Body_Slam;
  functions["Bone Club"]      = &Bone_Club;
  functions["Bonemerang"]     = &Bonemerang;
  functions["Clamp"]          = &Clamp;
  functions["Comet Punch"]    = &Comet_Punch;
  functions["Constrict"]      = &Constrict;
  functions["Counter"]        = &Counter;
  functions["Crabhammer"]     = &Crabhammer;
  functions["Cut"]            = &Cut;
  functions["Dig"]            = &Dig;
  functions["Dizzy Punch"]    = &Dizzy_Punch;
  functions["Double Kick"]    = &Double_Kick;
  functions["Double Slap"]    = &Double_Slap;
  functions["Double-Edge"]    = &Double_Edge;
  functions["Drill Peck"]     = &Drill_Peck;
  functions["Earthquake"]     = &Earthquake;
  functions["Egg Bomb"]       = &Egg_Bomb;
  functions["Explosion"]      = &Explosion;
  functions["Fire Punch"]     = &Fire_Punch;
  functions["Fissure"]        = &Fissure;
  functions["Fly"]            = &Fly;
  functions["Fury Attack"]    = &Fury_Attack;
  functions["Fury Swipes"]    = &Fury_Swipes;
  functions["Guillotine"]     = &Guillotine;
  functions["Headbutt"]       = &Headbutt;
  functions["High Jump Kick"] = &High_Jump_Kick;
  functions["Horn Attack"]    = &Horn_Attack;
  functions["Horn Drill"]     = &Horn_Drill;
  functions["Hyper Fang"]     = &Hyper_Fang;
  functions["Ice Punch"]      = &Ice_Punch;
  functions["Jump Kick"]      = &Jump_Kick;
  functions["Karate Chop"]    = &Karate_Chop;
  functions["Leech Life"]     = &Leech_Life;
  functions["Lick"]           = &Lick;
  functions["Low Kick"]       = &Low_Kick;
  functions["Mega Kick"]      = &Mega_Kick;
  functions["Mega Punch"]     = &Mega_Punch;
  functions["Pay Day"]        = &Pay_Day;
  functions["Peck"]           = &Peck;
  functions["Pin Missile"]    = &Pin_Missile;
  functions["Poison Sting"]   = &Poison_Sting;
  functions["Pound"]          = &Pound;
  functions["Quick Attack"]   = &Quick_Attack;
  functions["Rage"]           = &Rage;
  functions["Razor Leaf"]     = &Razor_Leaf;
  functions["Rock Slide"]     = &Rock_Slide;
  functions["Rock Throw"]     = &Rock_Throw;
  functions["Rolling Kick"]   = &Rolling_Kick;
  functions["Scratch"]        = &Scratch;
  functions["Seismic Toss"]   = &Seismic_Toss;
  functions["Self-Destruct"]  = &Self_Destruct;
  functions["Skull Bash"]     = &Skull_Bash;
  functions["Sky Attack"]     = &Sky_Attack;
  functions["Slam"]           = &Slam;
  functions["Slash"]          = &Slash;
  functions["Spike Cannon"]   = &Spike_Cannon;
  functions["Stomp"]          = &Stomp;
  functions["Strength"]       = &Strength;
  functions["Struggle"]       = &Struggle;
  functions["Submission"]     = &Submission;
  functions["Super Fang"]     = &Super_Fang;
  functions["Tackle"]         = &Tackle;
  functions["Barrage"]        = &Barrage;
  functions["Take Down"]      = &Take_Down;
  functions["Thrash"]         = &Thrash;
  functions["Thunder Punch"]  = &Thunder_Punch;
  functions["Twineedle"]      = &Twineedle;
  functions["Vine Whip"]      = &Vine_Whip;
  functions["Vise Grip"]      = &Vise_Grip;
  functions["Waterfall"]      = &Waterfall;
  functions["Wing Attack"]    = &Wing_Attack;
  functions["Wrap"]           = &Wrap;


  PLAYER USER("Glockinator");
  NPC Trainer;

  cout << "User Name: " << USER.get_Name() << endl;
  cout << "User Money: " << USER.get_Money() << endl;

  USER.set_Money(33);
  cout << "User Money after Transaction: " << USER.get_Money() << endl << endl;

  cout << "Trainer Name: " << Trainer.get_Name() << endl;
  cout << "Trainer Money: " << Trainer.get_Money() << endl << endl;

  POKEMON pokemon1;
  USER.add_Pocket(pokemon1);

  POKEMON temp = USER.get_Pocket(0);
  cout << "First Pokemon: " << temp.get_Name() << endl;
  cout << "Pokemon's Pokedex Number: " << temp.get_PokedexNumber() << endl;
  cout << "NPC Count: " << NPC::NPC_Count << endl << endl;


  string FunctionDesired;

  cout << "Enter the functions name wanted (Any of the Attacks (No error check)): ";
  cin >> FunctionDesired;

  auto iter = functions.find(FunctionDesired);
  cout << endl << (iter->second)(pokemon1, pokemon1) << endl << endl;





  return 0;
}
