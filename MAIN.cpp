// Pokemon Project
// Authors: Derryk Theberge and Luke McLaughlin

#include <iostream>
#include<stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <unistd.h>         //For sleep()

#include "ATTACK.h"
#include "ITEM.h"
#include "NPC.h"
#include "PERSON.h"
#include "PLAYER.h"
#include "POKEMON.h"
#include "GAME_INFO.h"
#include "ATT_FUNCTS.h"
#include "INTERACTION.h"

using namespace std;
using namespace ATT_FUNCTS;

//Initializing Static Members
int POKEMON::NPCs_Defeated = 0;
int INTERACTION::Walk_Count = 0;
map<int, string> POKEMON::Seen = {};

int main()
{
  system("clear");

  INTERACTION delay;
  PLAYER USER;

  INTERACTION::Introduction(&USER);

  int choice;
  do
  {
    INTERACTION::Display_Menu(1);
    cout << "Enter your choice: ";
    cin >> choice;
    switch(choice)
    {
      case 1: INTERACTION::Walk(&USER);
              break;
      case 2: system("clear");
              INTERACTION::ASCII(18);
              INTERACTION::Bag(&USER);
              cin.ignore();
              INTERACTION::Continue();
              break;
      case 3: INTERACTION::Party(&USER);
              break;
      case 4: INTERACTION::Pokedex();
              break;
    }
  } while(POKEMON::NPCs_Defeated <= 10);

  delay << "\nYou have become all of the Trainers! ";

  return 0;
}