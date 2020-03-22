#ifndef PLAYER_H
#define PLAYER_H

#include "PERSON.h"
#include "ITEM.h"

class PLAYER : public PERSON
{
  private:
    vector<ITEM> Backpack;

  public:
    PLAYER(string Name);                              //Constructor
    void set_Name(string Name) override;              //Given by the user
    void set_Money(int Transaction) override;
    void add_Pocket(POKEMON Pokemon) override;        //Adds  POKEMON to Pocket Vector
    void remove_Pocket(int indexToRemove) override;   //Removes a specified POKEMON from Poket Vector
    void add_Backpack(ITEM Item);
    void remove_Backpack(int indexToRemove);
};

#endif
