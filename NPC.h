#ifndef NPC_H
#define NPC_H

#include "PERSON.h"
#include "POKEMON.h" //Unsure if I need to include this for the Random POKEMON function

class NPC : public PERSON
{
  private:
    void set_Name(string Name) override;             //Randomly from a text file
    void set_Money(int Transaction) override;
    void add_Pocket(POKEMON Pokemon) override;       //Pseudorandomly from a text file
    void remove_Pocket(int indexToRemove) override;  //The Pokemon will be removed when the HP reaches 0

    //Helper Functions for the constructor
    int NPC_PokemonCount();           //Determines the number of POKEMON the NPC needs

  public:
    NPC();                  //Constructor ~ Will increment NPC_Count
    static int NPC_Count;
};

#endif
