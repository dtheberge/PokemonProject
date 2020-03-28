#ifndef NPC_H
#define NPC_H

#include "PERSON.h"
#include "POKEMON.h" //Unsure if I need to include this for the Random POKEMON function

class NPC : public PERSON
{
  private:
    void set_Name(string Name) override;             //Randomly from a text file
    void set_Money(int Transaction) override;        //PsuedoRandom on a formula TBD
    void add_Party(POKEMON Pokemon) override;       //Pseudorandomly Adds a Pokemon to the NPC Party Vector
    void remove_Party(int indexToRemove) override;  //Removes a Pokemon from NPC's Party (Will remove when HP=0)

    //Helper Functions for the constructor
    int NPC_PokemonCount();           //Determines the number of POKEMON the NPC needs

  public:
    NPC();                  //Constructor ~ Will increment NPC_Count
    static int NPC_Count;
};

#endif
