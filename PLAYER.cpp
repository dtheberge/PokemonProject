//PLAYER IMPLEMENTATION FILE

#include "PLAYER.h"

//CONSTRUCTOR
PLAYER::PLAYER ()
{
  set_Name("");
  Money = 0;
  //Vector is initially empty
}

//SETTER and VECTOR DATA MEMEBER FUNCTIONS
void PLAYER::set_Name(string Name)
{
  this->Name = Name;
}

void PLAYER::set_Money(int Transaction)
{
  this->Money += Transaction;
}

void PLAYER::add_Party(POKEMON Pokemon)  //There has to be a reason this definition is different than the other
{
  Party.push_back(Pokemon);
}

//If erasing a Pokemon,  Be sure to add it to where it needs to be first
void PLAYER::remove_Party(int indexToRemove)
{
    auto iter = Party.begin();
    iter += indexToRemove;
    Party.erase(iter);
}

void PLAYER::add_Bag(ITEM Item)
{
  Bag.push_back(Item);
}

void PLAYER::remove_Bag(int indexToRemove)
{
    auto iter = Bag.begin();
    iter += indexToRemove;
    Bag.erase(iter);
}
