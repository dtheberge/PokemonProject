#ifndef POKEMON_H
#define POKEMON_H

#include <string>
#include <cstdlib>        //Random Numbers
#include <ctime>          //Random Numbers
#include <vector>
#include <map>
#include <utility>        //To use pairs
#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <math.h>         //Floor
#include <chrono>         //For Specifying Time
#include <thread>         //Helps Control the Processes

#include "ATTACK.h"
#include "ITEM.h"
#include "GAME_INFO.h"

//It was hard to find out what I needed to put in the using statement down below for some of this
//Some of them I flat out couldn't find what I needed for the qualifier

// using std::map;
// using std::vector;
// using std::pair;
// using std::cout;
// using std::endl;
// using std::setw;
// using std::right;
// using std::ifstream;
// using std::stringstream;

using namespace std;

class ITEM;
class ATTACK;

class POKEMON
{
  private:
    int Pokedex_Number;

    string Name;
    TYPE Type1;
    TYPE Type2;

    int Level;

    map<string, int> Base_Stats;
    map<string, int> Individual_Values;
    map<string, int> Effort_Values;
    map<string, int> Idle_Stats;
    map<string, int> Battle_Stats;
    
    vector<ATTACK> Move_Set;      //Holds the Attack of a Pokemon (Doesn't change after the inital setter)
    CONDITION Current_Condition;    //Always NO_CONDITION when outside of a battle
    
    //PRIVATE SETTERS
    //Pull from a text file respective the Pokedex Number that is determined first
    //These are only called once in the Constructors and aren't altered otherwise
    void set_PokedexNumber(int Pokedex_Number);

    void set_BaseStats();
    void set_IndividualValues();

    void set_Moves();         //Pseudorandomly Pulls 4 Attacks / Makes The Objects to put into the Vector

  public:
    static map<int, string> Seen;  //Set that adds every new Instance to it to keep track which Pokemon were seen
    static int NPCs_Defeated;

    //Constructor
    POKEMON();                //Random Pokemon
    POKEMON(int Starter);     //Desired Pokemon by Pokedex Number

    //PUBLIC SETTERS
    void set_HPCurrent(int Amount);     //-1 for full heal
    void set_IdleStats();

    void set_Level(int Level);
    void raise_Level(int Amount);
    void set_EffortValues(string Stat, int Modification);
    void reset_BattleStats();
    void set_BattleStat(string Stat, int Modification);   //These all should only change the Map since they reset every battle
    void set_CurrentCondition(CONDITION Current_Status);

    //GETTERS
    //Out of Battle Information
    int get_PokedexNumber() const;
    string get_Name() const;
    TYPE get_Type1() const;
    TYPE get_Type2() const;

    int get_Level() const;
    int get_HPCurrent() const;
    int get_BaseStat(string Stat) const;
    int get_IVStat(string Stat) const;
    int get_EffortValue(string Stat) const;
    int get_IdleStat(string Stat) const;
    int get_BattleStat(string Stat) const;

    CONDITION get_CurrentCondition() const;
    ATTACK get_Move(int MoveIndex) const;

    //Displays Pokedex with ??? for unseen Pokemon using the Seen Set
    static void get_Seen();
  
    //Other
    int Random_Pokemon();  //Finds and returns a random POKEMON in POKEMON Class
    void Apply_Item(ITEM Item);
    TYPE convert(const std::string& str);
};

#endif
