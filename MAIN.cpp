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

  cout << "User Name: " << USER.get_Name() << endl;
  cout << "User Money: " << USER.get_Money() << endl;

  sleep(1);
  USER.set_Money(33);
  cout << "User Money after Transaction: " << USER.get_Money() << endl << endl;

  sleep(1);
  cout << "Trainer Name: " << Trainer.get_Name() << endl;
  cout << "Trainer Money: " << Trainer.get_Money() << endl << endl;

  POKEMON pokemon1;
  USER.add_Party(pokemon1);

  sleep(1);
  POKEMON temp = USER.get_Party(0);
  cout << "First Pokemon: " << temp.get_Name() << endl;
  cout << "Pokemon's Pokedex Number: " << temp.get_PokedexNumber() << endl;
  cout << "NPC Count: " << NPC::NPC_Count << endl << endl;

  int FunctionDesired;

  cout << "Enter the functions name wanted (Any of the Attacks (No error check)): ";
  cin >> FunctionDesired;

  ATT_FUNCT_CALL(FunctionDesired, pokemon1, pokemon1);

  cout << endl << endl;

  //cout << "Hello everyone what all have you been doing this day. It is really boring because of the Corona Virus";
  pika << "Hello everyone what all have you been doing this day. It is really boring because of the Corona Virus." << "What's up dawg";

  int PikachuAttack = pokemon1.get_ATK();
  cout << "Pikachu's OB_ATK Stat: " <<  PikachuAttack << endl;

  pokemon1.set_BattleStat("ATK", pokemon1.get_ATK());

  cout << "Pikachu's Battle Attack Stat: " <<  pokemon1.get_BattleStat("ATK") << endl;

  pokemon1.set_BattleStat("ATK", -5);
  cout << "Pikachu's Battle Attack Stat: " <<  pokemon1.get_BattleStat("ATK") << endl;

  cout << endl << endl << endl;
  POKEMON::get_Seen();

  return 0;


}
