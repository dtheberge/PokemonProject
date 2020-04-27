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

  public:
    vector<POKEMON> Party;   //Holds the Pokemon of Player and NPC Objects

    //These are virtual for different definitions between setting NPC and PLAYER object members
    virtual void set_Name(string Name) = 0;             //Different for Player and NPC Objects
    virtual void set_Money(int Transaction) = 0;        //Different for Player and NPC Objects
    virtual void remove_Party(int indexToRemove) = 0;  //Different for Player and NPC Objects
    
    void add_Party(POKEMON Pokemon);       //Different for Player and NPC Objects

    //These are the same between the PLAYER and NPC objects and do not need to be redefined between them
    string get_Name() const;              //Retrieves the name of both Player and NPC Objects
    int get_Money() const;                //Retrives the Amount of money either a Player or NPC Object has
    int get_PartySize() const;
    POKEMON get_Party(int index) const;  //Returns a particular Pokemon in given index of the Party of either object
    
    void Switch_Pokemon(int Index1, int Index2);

    void set_HPCurrent(int Index, int Amount);
    void raise_Level(int Index, int Amount);
    void set_EffortValues(int Index, string Stat, int Modification);
    void set_IdleStats(int Index);
    void reset_BattleStats(int Index);
    void set_BattleStat(int Index, string Stat, int Modification);
    void set_CurrentCondition(int Index, CONDITION Current_Status);
    void Apply_Item(int Pokemon_Index, ITEM Item);

};

#endif
