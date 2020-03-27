//POKEMON IMPLEMENTATION FILE

#include "POKEMON.h"
#include <iostream>

using std::cout;
using std::endl;

//CONSTRUCTORS
POKEMON::POKEMON()    //For Random Pokemon
{
  set_PokedexNumber(Random_Pokemon());

  set_Name();
  set_HPMax();
  set_ATK();
  set_DEF();
  set_SPA();
  set_SPD();
  set_Type1();
  set_Type2();

  set_HPCurrent(HP_Max);
  set_CurrentCondition(NO_CONDITION);

  set_Seen();
}

POKEMON::POKEMON(int starter)    //For Random Pokemon
{
  set_PokedexNumber(starter);

  set_Name();
  set_HPMax();
  set_ATK();
  set_DEF();
  set_SPA();
  set_SPD();
  set_Type1();
  set_Type2();

  set_HPCurrent(HP_Max);
  set_CurrentCondition(NO_CONDITION);

  set_Seen();
}

//PRIVATE SETTTERS
void POKEMON::set_PokedexNumber(int Pokedex_Number)
{
  //Retrieve from File based on random Pokedex Number
  this->Pokedex_Number = Pokedex_Number;
}

void POKEMON::set_Name()
{
  //Retrieve from File based on the instance's Pokedex Number
  string Name = "Pikachu";
  this->Name = Name;
}

void POKEMON::set_HPMax()
{
  //Retrieve from File based on the instance's Pokedex Number
  int HP_Max = 111;
  this->HP_Max = HP_Max;
}

void POKEMON::set_ATK()
{
  //Retrieve from File based on the instance's Pokedex Number
  int ATK = 30;
  this->ATK = ATK;
}

void POKEMON::set_DEF()
{
  //Retrieve from File based on the instance's Pokedex Number
  int DEF = 40;
  this->DEF = DEF;
}

void POKEMON::set_SPA()
{
  //Retrieve from File based on the instance's Pokedex Number
  int SPA = 50;
  this->SPA = SPA;
}

void POKEMON::set_SPD()
{
  //Retrieve from File based on the instance's Pokedex Number
  int SPD = 60;
  this->SPD = SPD;
}

void POKEMON::set_Type1()
{
  //Retrieve from File based on the instance's Pokedex Number
  TYPE Type1 = GRASS;
  this->Type1 = Type1;
}

void POKEMON::set_Type2()
{
  //Retrieve from File based on the instance's Pokedex Number
  TYPE Type2 = WATER;
  this->Type2 = Type2;
}


void POKEMON::set_Attacks()
{
  //Make random Attacks
  for(int i = 0; i < 4; i++)
  {
    ATTACK temp;
    this->Move_Set[i] = temp;
  }
}

void POKEMON::set_Seen()
{
  Seen.insert(this->Name);
}

//PUBLIC SETTERS
void POKEMON::set_HPCurrent(int health)
{
  this->HP_Current += health;
}

void POKEMON::set_CurrentCondition(CONDITION Current_Condition)
{
  this->Current_Condition = Current_Condition;
}

//GETTERS
string POKEMON::get_Name() const
{
  return Name;
}

int POKEMON::get_PokedexNumber() const
{
  return Pokedex_Number;
}

int POKEMON::get_HPMax() const
{
  return HP_Max;
}

int POKEMON::get_ATK() const
{
  return ATK;
}

int POKEMON::get_DEF() const
{
  return DEF;
}

int POKEMON::get_SPA() const
{
  return SPA;
}

int POKEMON::get_SPD() const
{
  return SPD;
}

TYPE POKEMON::get_Type1() const
{
  return Type1;
}

TYPE POKEMON::get_Type2() const
{
  return Type2;
}

ATTACK POKEMON::get_Attack(int MoveIndex) const
{
  return Move_Set[MoveIndex];
}

int POKEMON::get_HPCurrent() const
{
  return HP_Current;
}

CONDITION POKEMON::get_CurrentCondition() const
{
  return Current_Condition;
}

void POKEMON::get_Seen()
{
  for(string pokemon: POKEMON::Seen)
  {
    cout << pokemon << endl;
  }
}

//OTHER
int POKEMON::Random_Pokemon()
{
  int random_integer = 23;            //This is going to be random
  return random_integer;
}
