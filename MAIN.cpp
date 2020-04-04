// Pokemon Project
//Authors: Derryk Theberge and Luke McLaughlin
 
#include <iostream>
#include <string>
#include <vector>
#include <unistd.h>         //For sleep()

#include "ATTACK.h"
#include "ITEM.h"
#include "NPC.h"
#include "PERSON.h"
#include "PLAYER.h"
#include "POKEMON.h"
#include "ENUMS.h"
#include "ATT_FUNCTS.h"
#include "INTERACTION.h"

using namespace std;
using namespace ENUMS;
using namespace ATT_FUNCTS;

//Initializing Static Members
int NPC::NPC_Count = 0;
map<int, string> POKEMON::Seen = {};

int main()
{
  INTERACTION pika;

  PLAYER USER("Glockinator");
  NPC Trainer;

  pika << "User Name: " << USER.get_Name() << "\n";
  pika << "User Money: " << to_string(USER.get_Money()) << "\n";

  sleep(1);
  USER.set_Money(33);

  pika << "User Money after Transaction: " << to_string(USER.get_Money()) << "\n\n";

  sleep(1);
  pika << "Trainer Name: " << Trainer.get_Name() << "\n";
  pika << "Trainer Money: " << to_string(Trainer.get_Money()) << "\n\n";

  POKEMON pokemon1;
  pika << Condition_string(pokemon1.get_CurrentCondition());

  USER.add_Party(pokemon1);

  sleep(1);
  POKEMON temp = USER.get_Party(0);
  pika << "\n" << "First Pokemon: " << temp.get_Name() << "\n";
  pika << "Pokemon's Pokedex Number: " << to_string(temp.get_PokedexNumber()) << "\n";
  pika << "NPC Count: " << to_string(NPC::NPC_Count) << "\n\n";

  int FunctionDesired;

  pika << "Enter the functions name wanted (Any of the Attacks (No error check)): ";
  cin >> FunctionDesired;

  ATT_FUNCT_CALL(FunctionDesired, pokemon1, pokemon1);

  pika << "\n\n";

  //pika << "Hello everyone what all have you been doing this day. It is really boring because of the Corona Virus";
  pika << "Hello everyone what all have you been doing this day. It is really boring because of the Corona Virus." << "\n" << "What's up dawg" << "\n";

  int PikachuAttack = pokemon1.get_ATK();
  pika << "Pikachu's OB_ATK Stat: " <<  to_string(PikachuAttack) << "\n";

  pokemon1.set_BattleStat("ATK", pokemon1.get_ATK());

  pika << "Pikachu's Battle Attack Stat: " <<  to_string(pokemon1.get_BattleStat("ATK")) << "\n";

  pokemon1.set_BattleStat("ATK", -5);
  pika << "Pikachu's Battle Attack Stat: " <<  to_string(pokemon1.get_BattleStat("ATK")) << "\n";

  pika << "\n\n" << "\n";
  POKEMON::get_Seen();

  return 0;
}
