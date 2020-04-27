#ifndef ITEM_H
#define ITEM_H

#include "GAME_INFO.h"
#include "POKEMON.h"
#include <cstdlib>        //Random Numbers
#include <ctime>          //Random Numbers

class POKEMON;

class ITEM
{
  private:
    string Name;
    CONDITION Condition;
    int HP;
    int ATK;
    int DEF;
    int SPE;
    int SPD;
    int Buy;
    int Sell;

    int Number;

  //SETTERS
  void set_Number(int Number);
  void set_Information();

  CONDITION convert(const std::string& str);

  public:
    ITEM();
    ITEM(int Number);

    //GETTERS
    string get_Name() const;
    CONDITION get_Condition() const;

    int get_Number() const;
    int get_HP() const;
    int get_ATK() const;
    int get_DEF() const;
    int get_SPE() const;
    int get_SPD() const;
    int get_Buy() const;
    int get_Sell() const;

    int Random_Item();
    bool Pokeball(POKEMON Pokemon, ITEM Item);
    friend void Apply_Item(ITEM Item);
};

#endif
