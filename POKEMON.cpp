//POKEMON IMPLEMENTATION FILE

#include "POKEMON.h"
#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::setw;
using std::right;

//CONSTRUCTORS
POKEMON::POKEMON()    //For Random Pokemon
{
  set_PokedexNumber(Random_Pokemon());

  set_Name();
  set_Type1();
  set_Type2();
  set_HPMax();
  set_ATK();
  set_DEF();
  set_SPA();
  set_SPD();

  set_Moves();
  set_CurrentCondition(NO_CONDITION);

  Battle_Stats.insert(pair<string, int>("ATK",0));
  Battle_Stats.insert(pair<string, int>("DEF",0));
  Battle_Stats.insert(pair<string, int>("SPA",0));
  Battle_Stats.insert(pair<string, int>("SPD",0));

  Seen.insert(pair<int, string>(this->Pokedex_Number, this->Name));
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

  set_Moves();
  set_CurrentCondition(NO_CONDITION);

  Battle_Stats.insert(pair<string, int>("ATK",0));
  Battle_Stats.insert(pair<string, int>("DEF",0));
  Battle_Stats.insert(pair<string, int>("SPA",0));
  Battle_Stats.insert(pair<string, int>("SPD",0));

  Seen.insert(pair<int, string>(this->Pokedex_Number, this->Name));
}

//PRIVATE SETTTERS -------------------------------------------------------------
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

void POKEMON::set_HPMax()
{
  //Retrieve from File based on the instance's Pokedex Number
  int HP_Max = 111;
  this->HP_Max = HP_Max;
  this->HP_Current = HP_Max;
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

void POKEMON::set_Moves()
{
  //Make random Attacks
  for(int i = 0; i < 4; i++)
  {
    ATTACK temp;
    this->Move_Set[i] = temp;
  }
}

//PUBLIC SETTERS ---------------------------------------------------------------
void POKEMON::set_HPCurrent(int Modification)
{
  //Retrieve from File based on the instance's Pokedex Number
  this->HP_Current += Modification;
}

void POKEMON::set_HPMax(int Modification)
{
  this->HP_Max += Modification;
}

void POKEMON::set_BattleStat(string Stat, int Modification)
{
  auto iter = this->Battle_Stats.find(Stat);
  if (iter != this->Battle_Stats.end())
    iter->second += Modification;
  else
    cout << Stat << " STAT NOT FOUND" << endl;
}

void POKEMON::set_CurrentCondition(CONDITION Current_Condition)
{
  this->Current_Condition = Current_Condition;
}

//GETTERS-----------------------------------------------------------------------
int POKEMON::get_PokedexNumber() const
{
  return Pokedex_Number;
}

string POKEMON::get_Name() const
{
  return Name;
}

TYPE POKEMON::get_Type1() const
{
  return Type1;
}

TYPE POKEMON::get_Type2() const
{
  return Type2;
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

ATTACK POKEMON::get_Move(int MoveIndex) const
{
  return Move_Set[MoveIndex];
}

//In Battle Information
int POKEMON::get_BattleStat(string Stat) const
{
  auto iter = this->Battle_Stats.find(Stat);
  if (iter != this->Battle_Stats.end())
    return iter->second;
  else
    cout << Stat << " STAT NOT FOUND" << endl;
}

CONDITION POKEMON::get_CurrentCondition() const
{
  return Current_Condition;
}


//Other
void POKEMON::get_Seen()
{
  for(int i = 1; i <= 25; i++)
  {
    for(int j = i; j <= 152; j += 25)
    {
      auto iter = Seen.find(j);
      if (iter != Seen.end())
        cout << right << setw(5) << iter->first << setw(15) << iter->second;
      else
        cout << right << setw(5) << j << setw(15) << "?????";
    }
    cout << endl;
  }
}

//OTHER
int POKEMON::Random_Pokemon()
{
  int random_integer = 25;            //This is going to be random
  return random_integer;
}
