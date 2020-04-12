#ifndef INTERACTION_H
#define INTERACTION_H

#include <iostream>
#include <string>
#include <chrono>       //For Specifying Time
#include <thread>       //Helps Control the Processes
#include "PLAYER.h"
#include "POKEMON.h"

using namespace std;

class INTERACTION {

  private:
  public:
    INTERACTION& operator<<(const string& text);
    static void Continue();

    static POKEMON Introduction(PLAYER*);
    //BATTLE FUNCTIONS
    //BATTLE()
    //TURN()

    //Battle Helper Functions
    //Determine Order
    //Check_Expirations
    //Choice
    //Check_For_Win



};

#endif
