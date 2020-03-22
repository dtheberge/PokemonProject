#ifndef PERSON_H
#define PERSON_H

#include <vector>
#include "POKEMON.h"

using std::vector;

class PERSON
{
  protected:
    string Name;
    int Money;
    vector<POKEMON> Pocket;

  public:
    //These are virtual for different definitions between setting NPC and PLAYER object members
    virtual void set_Name(string Name) = 0;             //NPC_Text File / PLAYER_User
    virtual void set_Money(int Transaction) = 0;        //NPC_Psuedorandom / PLAYER_0
    virtual void add_Pocket(POKEMON Pokemon) = 0;
    virtual void remove_Pocket(int indexToRemove) = 0;

    //These are the same between the PLAYER and NPC objects and do not need to be redefined between them
    string get_Name() const;
    int get_Money() const;
    POKEMON get_Pocket(int index) const;  //Returns a particular POKEMON in given index of the Pocket
};

#endif
