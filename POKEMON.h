#ifndef POKEMON_H
#define POKEMON_H

#include <array>
#include <set>

#include "ATTACK.h"
#include "ITEM.h"
#include "ENUMS.h"

using namespace ENUMS;
using std::array;
using std::set;

class ITEM;

class POKEMON
{
  private:
    int Pokedex_Number;

    string Name;
    TYPE Type1;
    TYPE Type2;
    CONDITION Current_Condition;

    int HP_Max;
    int HP_Current;
    int ATK;
    int DEF;
    int SPA;
    int SPD;

    array<ATTACK, 4> Move_Set;
    set<string> Seen;

    //Private SETTERS
    void set_PokedexNumber(int Pokedex_Number);
    void set_Name();
    void set_HPMax();
    void set_ATK();
    void set_DEF();
    void set_SPA();
    void set_SPD();
    void set_Type1();
    void set_Type2();
    void set_Attacks();
    void set_Seen();

  public:
    //Constructor
    POKEMON();
    POKEMON(int starter);

    //Public SETTERS
    void set_HPCurrent(int health);
    void set_CurrentCondition(CONDITION Current_Status);

    //GETTERS
    string get_Name() const;
    int get_PokedexNumber() const;
    int get_HPMax() const;
    int get_ATK() const;
    int get_DEF() const;
    int get_SPA() const;
    int get_SPD() const;
    TYPE get_Type1() const;
    TYPE get_Type2() const;
    ATTACK get_Attack(int MoveIndex) const;

    int get_HPCurrent() const;
    CONDITION get_CurrentCondition() const;

    void get_Seen() const;

    //Other
    int Random_Pokemon();  //Finds and returns a random POKEMON in POKEMON Class
    friend Pokeball(POKEMON Pokemon, ITEM Item);
};

#endif
