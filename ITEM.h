#ifndef ITEM_H
#define ITEM_H

#include "ENUMS.h"
#include "POKEMON.h"

using namespace ENUMS;

class POKEMON;

class ITEM
{
  private:
    string Name;
    CONDITION Condition;
    int HP;
    int ATK;
    int DEF;
    int SPA;
    int SPD;
    int SPE;

    int Number;

    //SETTERS
    void set_Name();
    void set_Condition();
    void set_HP();
    void set_ATK();
    void set_DEF();
    void set_SPA();
    void set_SPD();
    void set_SPE();
    void set_Number(int Number);

  public:
    ITEM();
    ITEM(int Number);

    //Overloaded Operator
    bool Pokeball(POKEMON Pokemon, ITEM Item);

    //GETTERS
    string get_Name();
    CONDITION get_Condition();
    int get_HP();
    int get_ATK();
    int get_DEF();
    int get_SPA();
    int get_SPD();
    int get_SPE();

    int Random_Item();
};

#endif
