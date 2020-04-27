#ifndef INTERACTION_H
#define INTERACTION_H

#include <iostream>
#include <iomanip>
#include <string>
#include <bits/stdc++.h>
#include <chrono>         //For Specifying Time
#include <thread>         //Helps Control the Processes
#include <stdio.h>
#include <ctype.h>

#include "PERSON.h"
#include "NPC.h"
#include "PLAYER.h"
#include "POKEMON.h"

using namespace std;

class INTERACTION {

  private:

  public:
    static int Walk_Count;

    INTERACTION& operator<<(const string& text);
    static void Continue();

    static void Introduction(PLAYER*);
    static void Starter(PLAYER*);

    static void Walk(PLAYER* USER);
      static void Trainer(PLAYER* USER);
      static void Wild_Pokemon(PLAYER* USER);
      static void Item_Found(PLAYER* USER);

    //BATTLE FUNCTIONS
    static int Turn_Choice(int KO, PLAYER* USER, NPC* Opponent);
    static int Determine_Order(int User_Choice, int& NPC_Choice, int KO, PLAYER* USER, NPC* Opponent);
    static void Trainer_Turn(int Turn_Choice, int& Turn_Order, int& Automiss, int& KO, PLAYER* USER, NPC* Opponent);
    static void KO_Check(int& Automiss, int& KO, int& Person_Defeated, PERSON* Current_Turn, PLAYER* USER, NPC* Opponent);

    //WILD ENCOUNTER FUNCTIONS
    static int Encounter_TurnChoice(int KO, PLAYER* USER, POKEMON* Wild);
    static int Encounter_DetermineOrder(int User_Choice, int& Wild_Choice, int KO, PLAYER* USER, POKEMON* Wild);
    static void Encounter_Turn(int Turn_Choice, int& Turn_Order, int& Encounter_End, int& Automiss, int& KO, PLAYER* USER, POKEMON* Wild);
    static void Encounter_EndCheck(int& Automiss, int& KO, int& Turn_Order, int& Encounter_End, PLAYER* USER, POKEMON* Wild);

    static void Town(PLAYER* USER);
    static void Bag(PLAYER* USER);
    static void Party(PLAYER* USER);
    static void Pokedex();


    //BAG
      //USE ITEM
    static void Display_Battle(PLAYER* USER, NPC* Opponent);
    static void Display_Encounter(PLAYER* USER, POKEMON* Wild);
    static void Display_Menu(int choice);
    static void ASCII(int);
};

#endif
