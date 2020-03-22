//PLAYER IMPLEMENTATION FILE

#include "PLAYER.h"

//CONSTRUCTOR
PLAYER::PLAYER (string Name)
{
  set_Name(Name);
  Money = 0;
  //Vector is initially Empty
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

void PLAYER::add_Pocket(POKEMON Pokemon)  //There has to be a reason this definition is different than the other
{
  Pocket.push_back(Pokemon);
}

//If erasing a Pokemon,  Be sure to add it to where it needs to be first
void PLAYER::remove_Pocket(int indexToRemove)
{
    auto iter = Pocket.begin();
    iter += indexToRemove;
    Pocket.erase(iter);
}

void PLAYER::add_Backpack(ITEM Item)
{
  Backpack.push_back(Item);
}

void PLAYER::remove_Backpack(int indexToRemove)
{
    auto iter = Backpack.begin();
    iter += indexToRemove;
    Backpack.erase(iter);
}
