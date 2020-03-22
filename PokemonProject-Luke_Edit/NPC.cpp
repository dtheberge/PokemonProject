//NPC IMPLEMENTATION FILE

#include "NPC.h"

//CONSTRUCTOR
NPC::NPC()
{
  set_Name("");

  Money = 0;
  set_Money(0);

  int count = NPC_PokemonCount();
  for(int i = 0; i < count; i++)
  {
    add_Pocket(POKEMON());
  }

  //Increment Object Count Every Instantiation
  NPC_Count++;
}

//STATIC FUNCTION
//We need a new One because the getter for the static data member didn't work

//SETTER FUNCTIONS
void NPC::set_Name(string Name)
{
  string random_Name = "Bob";

  //Pull Name from text file in place of the above hardcoding
  this->Name = random_Name;
}

void NPC::set_Money(int Transaction)
{
  //Generate a Pseudorandom Number to add to the Money
  int random_Money = 69;

  this->Money += random_Money;
}

void NPC::add_Pocket(POKEMON Pokemon)
{ //Add only if there is 0 to 5 Pokemon
  Pocket.push_back(Pokemon);
}

void NPC::remove_Pocket(int indexToRemove)
{ //Remove if the Pokemon Current HP has reached 0
  auto iter = Pocket.begin();
  iter += indexToRemove;
  Pocket.erase(iter);
}

//HELPER FUNCTIONS
int NPC::NPC_PokemonCount()
{
  int PokemonCount = 0;
  return PokemonCount;
}
