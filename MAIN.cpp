// Pokemon Project
//Authors: Derryk Theberge and Luke McLaughlin

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

  std::map<string, string (*)()> functions;

   functions["Absorb"]        = &Absorb;
   functions["Acid"]          = &Acid;
   functions["Aurora_Beam"]   = &Aurora_Beam;
   functions["Blizzard"]      = &Blizzard;
   functions["Bubble"]        = &Bubble;
   functions["Bubble_Beam"]   = &Bubble_Beam;
   functions["Confusion"]     = &Confusion;
   functions["Dragon_Rage"]   = &Dragon_Rage;
   functions["Dream_Eater"]   = &Dream_Eater;
   functions["Ember"]         = &Ember;
   functions["Fire_Blast"]    = &Fire_Blast;
   functions["Fire_Spin"]     = &Fire_Spin;
   functions["Flamethrower"]  = &Flamethrower;
   functions["Gust"]          = &Gust;
   functions["Hydro_Pump"]    = &Hydro_Pump;
   functions["Hyper_Beam"]    = &Hyper_Beam;
   functions["Ice_Beam"]      = &Ice_Beam;
   functions["Mega_Drain"]    = &Mega_Drain;
   functions["Night_Shade"]   = &Night_Shade;
   functions["Petal_Dance"]   = &Petal_Dance;
   functions["Psybeam"]       = &Psybeam;
   functions["Psychic"]       = &Psychic;
   functions["Psywave"]       = &Psywave;
   functions["Razor_Wind"]    = &Razor_Wind;
   functions["Sludge"]        = &Sludge;
   functions["Smog"]          = &Smog;
   functions["Solar_Beam"]    = &Solar_Beam;
   functions["Sonic_Boom"]    = &Sonic_Boom;
   functions["Surf"]          = &Surf;
   functions["Swift"]         = &Swift;
   functions["Thunder"]       = &Thunder;
   functions["Thunder Shock"] = &Thunder_Shock;
   functions["Thunderbolt"]   = &Thunderbolt;
   functions["Tri_Attack"]    = &Tri_Attack;
   functions["Water_Gun"]     = &Water_Gun;

   functions["Bide"] = &Bide;
   functions["Bide"] = &Bide;
   functions["Bide"] = &Bide;
   functions["Bide"] = &Bide;
   functions["Bide"] = &Bide;
   functions["Bide"] = &Bide;

   functions["Barrage"] = &Barrage;
   functions["Bide"] = &Bide;
   functions["Bide"] = &Bide;
   functions["Bide"] = &Bide;
   functions["Bide"] = &Bide;
   functions["Bide"] = &Bide;
   functions["Bide"] = &Bide;
   functions["Bide"] = &Bide;
   functions["Bide"] = &Bide;
   functions["Bide"] = &Bide;

   functions["Barrage"] = &Barrage;
   functions["Bide"] = &Bide;
   functions["Bide"] = &Bide;
   functions["Bide"] = &Bide;
   functions["Bide"] = &Bide;
   functions["Bide"] = &Bide;
   functions["Bide"] = &Bide;
   functions["Bide"] = &Bide;
   functions["Bide"] = &Bide;
   functions["Bide"] = &Bide;

   functions["Barrage"] = &Barrage;
   functions["Bide"] = &Bide;
   functions["Bide"] = &Bide;
   functions["Bide"] = &Bide;
   functions["Bide"] = &Bide;
   functions["Bide"] = &Bide;
   functions["Bide"] = &Bide;
   functions["Bide"] = &Bide;
   functions["Bide"] = &Bide;
   functions["Bide"] = &Bide;

   functions["Barrage"] = &Barrage;
   functions["Bide"] = &Bide;
   functions["Bide"] = &Bide;
   functions["Bide"] = &Bide;
   functions["Bide"] = &Bide;
   functions["Bide"] = &Bide;
   functions["Bide"] = &Bide;
   functions["Bide"] = &Bide;
   functions["Bide"] = &Bide;
   functions["Bide"] = &Bide;

   functions["Barrage"] = &Barrage;
   functions["Bide"] = &Bide;
   functions["Bide"] = &Bide;
   functions["Bide"] = &Bide;
   functions["Bide"] = &Bide;
   functions["Bide"] = &Bide;
   functions["Bide"] = &Bide;
   functions["Bide"] = &Bide;
   functions["Bide"] = &Bide;
   functions["Bide"] = &Bide;

   functions["Barrage"] = &Barrage;
   functions["Bide"] = &Bide;
   functions["Bide"] = &Bide;
   functions["Bide"] = &Bide;
   functions["Bide"] = &Bide;
   functions["Bide"] = &Bide;
   functions["Bide"] = &Bide;
   functions["Bide"] = &Bide;
   functions["Bide"] = &Bide;
   functions["Bide"] = &Bide;

   functions["Barrage"] = &Barrage;
   functions["Bide"] = &Bide;
   functions["Bide"] = &Bide;
   functions["Bide"] = &Bide;
   functions["Bide"] = &Bide;
   functions["Bide"] = &Bide;
   functions["Bide"] = &Bide;
   functions["Bide"] = &Bide;
   functions["Bide"] = &Bide;
   functions["Bide"] = &Bide;


   string FunctionDesired;

   cout << "Enter the functions name wanted (Barrage or Bide): ";
   cin >> FunctionDesired;

   auto iter = functions.find(FunctionDesired);
   cout << endl << (iter->second)() << endl << endl;



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
  cout << "NPC Count: " << NPC::NPC_Count;

  return 0;
}
