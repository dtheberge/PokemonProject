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

int PLAYER::get_BagSize() const
{
  return Bag.size();
}

ITEM PLAYER::get_Item(int index) const
{
  return Bag[index];
}