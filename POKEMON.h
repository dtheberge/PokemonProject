#ifndef POKEMON_H
#define POKEMON_H
 
#include <array>
#include <map>
#include <array>
#include <utility>        //To use pairs

#include "ATTACK.h"
#include "ITEM.h"
#include "ENUMS.h"

using namespace ENUMS;
using std::map;
using std::array;
using std::pair;

class ITEM;
class ATTACK;

class POKEMON
{
  private:
    int Pokedex_Number;

    string Name;
    TYPE Type1;
    TYPE Type2;

    //int level;
    //int Experience;
    int HP_Max;                     //Does NOT change in battle Unless the Pokemon Levels up
    int HP_Current;                 //Changes during battle
    int ATK;
    int DEF;
    int SPA;
    int SPD;
    int SPE;
    array<ATTACK, 4> Move_Set;      //Holds the Attack of a Pokemon (Doesn't change after the inital setter)

    CONDITION Current_Condition;    //Always NO_CONDITION when outside of a battle
    map<string, int> Battle_Stats;  //Map for in Stats used in Battle

    //PRIVATE SETTERS
    //Pull from a text file respective the Pokedex Number that is determined first
    //These are only called once in the Constructors and aren't altered otherwise
    void set_PokedexNumber(int Pokedex_Number);

    void set_Name();
    void set_Type1();
    void set_Type2();
    void set_HPMax();
    void set_ATK();
    void set_DEF();
    void set_SPA();
    void set_SPD();
    void set_SPE();

    void set_Moves();         //Pseudorandomly Pulls 4 Attacks / Makes The Objects to put into the Array

  public:
    static map<int, string> Seen;  //Set that adds every new Instance to it to keep track which Pokemon were seen

    //Constructor
    POKEMON();                //Random Pokemon
    POKEMON(int starter);     //Desired Pokemon by Pokedex Number

    //PUBLIC SETTERS
    //Modifies the Battle_Stats Map
    void set_HPCurrent(int Modification);                 //NOT Pulled from file. Set as Max Originally
    void set_HPMax(int Modification);                     //When altered the Out of Battle Stat HP should change
    void set_BattleStat(string Stat, int Modification);   //These all should only change the Map since they reset every battle
    void set_CurrentCondition(CONDITION Current_Status);

    //GETTERS
    //Out of Battle Information
    int get_PokedexNumber() const;
    string get_Name() const;
    TYPE get_Type1() const;
    TYPE get_Type2() const;
    int get_HPMax() const;
    int get_ATK() const;
    int get_DEF() const;
    int get_SPA() const;
    int get_SPD() const;
    int get_SPE() const;
    ATTACK get_Move(int MoveIndex) const;

    //In Battle Information
    int get_BattleStat(string Stat) const;
    CONDITION get_CurrentCondition() const;

    //Displays Pokedex with ??? for unseen Pokemon using the Seen Set
    static void get_Seen();

    //Other
    int Random_Pokemon();  //Finds and returns a random POKEMON in POKEMON Class
    friend void Pokeball(POKEMON Pokemon, ITEM Item);
    TYPE convert(const std::string& str);
};

#endif
