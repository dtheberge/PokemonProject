#ifndef NPC_H
#define NPC_H

#include "PERSON.h"
#include "POKEMON.h" //Unsure if I need to include this for the Random POKEMON function

class NPC : public PERSON
{
  private:
    string Intro;
    string Exit;

    //Helper Functions for the constructor
    int NPC_PokemonCount();    //Determines the number of POKEMON the NPC needs

  public:
    NPC();                    //Increment NPC_Count

    void set_Name(string Name) override;             //Randomly from a text file
    void set_Money(int Transaction) override;        //PsuedoRandom on a formula TBD
    void remove_Party(int indexToRemove) override;  //Removes a Pokemon from NPC's Party (Will remove when HP=0)

    void set_Dialogue();
    string get_Intro() const;
    string get_Exit() const;
};

#endif
