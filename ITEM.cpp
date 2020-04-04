//ITEM IMPLEMENTATION FILE

#include "ITEM.h"

//CONSTRUCTORS
ITEM::ITEM()
{
  set_Number(Random_Item());

  set_Name();
  set_Condition();
  set_HP();
  set_ATK();
  set_DEF();
  set_SPA();
  set_SPD();
  set_SPE();
}

ITEM::ITEM(int Number)
{
  set_Number(Number);

  set_Name();
  set_Condition();
  set_HP();
  set_ATK();
  set_DEF();
  set_SPA();
  set_SPD();
  set_SPE();
}

//SETTERS
void ITEM::set_Name()
{
  string Name = "Full Heal";          //Pulled from the text file
  this->Name = Name;
}

void ITEM::set_Condition()
{
  CONDITION Condition = PARALYZED;          //Pulled from the text file
  this->Condition = Condition;
}

void ITEM::set_HP()
{
  int HP = 20;          //Pulled from the text file
  this->HP = HP;
}

void ITEM::set_ATK()
{
  int ATK = 21;          //Pulled from the text file
  this->ATK = ATK;
}

void ITEM::set_DEF()
{
  int DEF = 22;          //Pulled from the text file
  this->DEF = DEF;
}

void ITEM::set_SPA()
{
  int SPA = 23;          //Pulled from the text file
  this->SPA = SPA;
}

void ITEM::set_SPD()
{
  int SPD = 24;          //Pulled from the text file
  this->SPD = SPD;
}

void ITEM::set_SPE()
{
  int SPE = 25;
  this->SPE = SPE;
}

void ITEM::set_Number(int Number)
{
  this->Number = Number;
}

//GETTERS
string ITEM::get_Name()
{
  return Name;
}

CONDITION ITEM::get_Condition()
{
  return Condition;
}

int ITEM::get_HP()
{
  return HP;
}

int ITEM::get_ATK()
{
  return ATK;
}

int ITEM::get_DEF()
{
  return DEF;
}

int ITEM::get_SPA()
{
  return SPA;
}

int ITEM::get_SPD()
{
  return SPD;
}

int ITEM::get_SPE()
{
  return SPE;
}

int ITEM::Random_Item()
{
  int Random_Number = 33;
  return Random_Number;
}

bool ITEM::Pokeball(POKEMON Pokemon, ITEM Item)
{
  bool capture = true;
  return capture;
}
