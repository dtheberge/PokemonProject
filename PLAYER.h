#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>

#include "PERSON.h"
#include "ITEM.h"

class PLAYER : public PERSON
{
  private:
    vector<ITEM> Bag;          //Holds the Items of the Player

  public:
    PLAYER();                             //Constructor
    void set_Name(string Name) override;             //Given by the user
    void set_Money(int Transaction) override;        //Alters the
    void add_Party(POKEMON Pokemon) override;        //Adds POKEMON to Party Vector
    void remove_Party(int indexToRemove) override;   //Removes a specified POKEMON from Poket Vector
    void add_Bag(ITEM Item);                         //Adds an Item object to the Bag Vector
    void remove_Bag(int indexToRemove);              //Removes an Item object from the Bag Vector

};

#endif
