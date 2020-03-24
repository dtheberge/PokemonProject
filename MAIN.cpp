// Pokemon Project
//Authors: Derryk Theberge and Luke McLaughlin

#include <iostream>
#include <string>
#include <vector>

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

  int FunctionDesired;

  cout << "Enter the functions name wanted (Any of the Attacks (No error check)): ";
  cin >> FunctionDesired;

  ATT_FUNCT_CALL(FunctionDesired, pokemon1, pokemon1);

  cout << endl << endl;
  pokemon1.get_Seen();

  return 0;
}
