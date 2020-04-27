//PERSON IMPLEMENTATION FILE

#include "PERSON.h"

//SETTER functions
//All Setters are virtual and will be overridden

//GETTER FUNCTIONS
string PERSON::get_Name() const
{
  return Name;
}

int PERSON::get_Money() const
{
  return Money;
}

int PERSON::get_PartySize() const
{
  return Party.size();
}

void PERSON::add_Party(POKEMON Pokemon)  //There has to be a reason this definition is different than the other
{
  Party.push_back(Pokemon);
}

POKEMON PERSON::get_Party(int index) const
{
  if(index < 0 || index > (Party.size() - 1) || index > 5)
  {
    cout << "You are requesting a Pokemon outside of the Vector bounds.";
    cout << "Index1: " << index << endl;
  }
  return Party[index];
}

void PERSON::Switch_Pokemon(int Index1, int Index2)
{
  if(Index1 < 0 || Index1 > (Party.size() - 1) || Index1 > 5 || Index2 < 0 || Index2 > (Party.size() - 1) || Index2 > 5)
  {
    cout << "You are requesting to switch a Pokemon outside of the Vector bounds.";
    cout << "Index1: " << Index1 << " Index2: " << Index2 << endl;
  }

  POKEMON Temp = Party[Index1];
  Party[Index1] = Party[Index2];
  Party[Index2] = Temp;
}

//POKEMON MEMBER FUNCTIONS FOR HIGHER LEVEL OF ENCAPSULATION
//This caused me a lot of pain to figure out I needed**

void PERSON::set_HPCurrent(int Index, int Amount)
{
  Party[Index].set_HPCurrent(Amount);
}

void PERSON::set_EffortValues(int Index, string Stat, int Modification)
{
  Party[Index].set_EffortValues(Stat, Modification);
}

void PERSON::set_IdleStats(int Index)
{
  Party[Index].set_IdleStats();
}

void PERSON::reset_BattleStats(int Index)
{
  Party[Index].reset_BattleStats();
}

void PERSON::set_BattleStat(int Index, string Stat, int Modification)
{
  Party[Index].set_BattleStat(Stat, Modification);
}

void PERSON::set_CurrentCondition(int Index, CONDITION Current_Status)
{
  Party[Index].set_CurrentCondition(Current_Status);
}

void PERSON::raise_Level(int Index, int Amount)
{
  Party[Index].raise_Level(Amount);
}

void PERSON::Apply_Item(int Pokemon_Index, ITEM Item)
{
  Party[Pokemon_Index].Apply_Item(Item);
}
