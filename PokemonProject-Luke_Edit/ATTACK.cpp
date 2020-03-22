//ATTACK IMPLEMENTATION FILE

#include "ATTACK.h"

//CONSTRUCTOR
ATTACK::ATTACK()
{
  set_Name();
  set_DMG();
  set_ACC();
  set_ConditionChance();
  set_Condition();
  set_Type();
}

void ATTACK::set_Name()
{
  string Name = "Bubblebeam";
  this->Name = Name;
}

void ATTACK::set_Type()
{
  TYPE Type = FIRE;
  this->Type = Type;
}

void ATTACK::set_DMG()
{
  int DMG = 100;
  this->DMG = DMG;
}

void ATTACK::set_ACC()
{
  int ACC = 200;
  this->ACC = ACC;
}

void ATTACK::set_PP()
{
  int PP = 15;
  this->PP = PP;
}

void ATTACK::set_ConditionChance()
{
  int Condition_Chance = 300;
  this->Condition_Chance = Condition_Chance;
}

void ATTACK::set_Condition()
{
  CONDITION Condition = BURNED;
  this->Condition = Condition;
}

//GETTERS
string ATTACK::get_Name() const
{
  return Name;
}

TYPE ATTACK::get_Type() const
{
  return Type;
}

int ATTACK::get_DMG() const
{
  return DMG;
}

int ATTACK::get_ACC() const
{
  return ACC;
}

int ATTACK::get_PP() const
{
  return PP;
}

int ATTACK::get_ConditionChance() const
{
  return Condition_Chance;
}

CONDITION ATTACK::get_Condition() const
{
  return Condition;
}
