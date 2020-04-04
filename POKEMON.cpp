//POKEMON IMPLEMENTATION FILE
#include "POKEMON.h"
#include <iostream>
#include <iomanip>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <sstream>

using std::cout;
using std::endl;
using std::setw;
using std::right;
using std::ifstream;
using std::stringstream;

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
  set_SPE();

  set_Moves();
  set_CurrentCondition(NO_CONDITION);

  Battle_Stats.insert(pair<string, int>("ATK",0));
  Battle_Stats.insert(pair<string, int>("DEF",0));
  Battle_Stats.insert(pair<string, int>("SPA",0));
  Battle_Stats.insert(pair<string, int>("SPD",0));
  Battle_Stats.insert(pair<string, int>("SPE",0));

  Seen.insert(pair<int, string>(this->Pokedex_Number, this->Name));
}

POKEMON::POKEMON(int starter)    //For Random Pokemon
{
  set_PokedexNumber(starter);

  set_Name();
  set_Type1();
  set_Type2();
  set_HPMax();
  set_ATK();
  set_DEF();
  set_SPA();
  set_SPD();
  set_SPE();

  set_Moves();
  set_CurrentCondition(NO_CONDITION);

  Battle_Stats.insert(pair<string, int>("ATK",0));
  Battle_Stats.insert(pair<string, int>("DEF",0));
  Battle_Stats.insert(pair<string, int>("SPA",0));
  Battle_Stats.insert(pair<string, int>("SPD",0));
  Battle_Stats.insert(pair<string, int>("SPE",0));

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
  string filename;
  ifstream infile;
  infile.open("POKEMON.txt");   // if file opened successfully
  infile.ignore(1000, '\n');    //Ignore the first line of text file

  int Pokedex_Number;
  string Line, Name;

  stringstream ss;
  int lines_p = 0;

  for (int i = 0; i < this->Pokedex_Number; ++i)
  {
    getline(infile, Line);
    {
        ss.str(Name);   // replace string steam buffer with line
        ss.clear();     // reset string stream error bits
  
        if (ss >> Pokedex_Number >> Name)
        {
            lines_p++;
        }
    }
  }

  this->Name = Name;
  infile.close();
}

void POKEMON::set_HPMax()
{
  //Retrieve from File based on the instance's Pokedex Number
  string filename;
  ifstream infile;
  infile.open("POKEMON.txt");   // if file opened successfully
  infile.ignore(1000, '\n');    //Ignore the first line of text file

  int Pokedex_Number, HP_Max;
  string Line, Name;

  stringstream ss;
  int lines_p = 0;

  for (int i = 0; i < this->Pokedex_Number; ++i)
  {
    getline(infile, Line);
    {
        ss.str(Line);   // replace string steam buffer with line
        ss.clear();     // reset string stream error bits
  
        if (ss >> Pokedex_Number >> Name >> HP_Max)
        {
            lines_p++;
        }
    }
  }

  this->HP_Max = HP_Max;
  cout << "HPMax = " << HP_Max << endl;
  infile.close();
}

void POKEMON::set_ATK()
{
  //Retrieve from File based on the instance's Pokedex Number
  string filename;
  ifstream infile;
  infile.open("POKEMON.txt");   // if file opened successfully
  infile.ignore(1000, '\n');    //Ignore the first line of text file

  int Pokedex_Number, HP_Max, ATK;
  string Line, Name;

  stringstream ss;
  int lines_p = 0;

  for (int i = 0; i < this->Pokedex_Number; ++i)
  {
    getline(infile, Line);
    {
        ss.str(Line);   // replace string steam buffer with line
        ss.clear();     // reset string stream error bits
  
        if (ss >> Pokedex_Number >> Name >> HP_Max >> ATK)
        {
            lines_p++;
        }
    }
  }

  this->ATK = ATK;
  cout << "ATK = " << ATK << endl;
  infile.close();
}

void POKEMON::set_DEF()
{
  //Retrieve from File based on the instance's Pokedex Number
  string filename;
  ifstream infile;
  infile.open("POKEMON.txt");   // if file opened successfully
  infile.ignore(1000, '\n');    //Ignore the first line of text file

  int Pokedex_Number, HP_Max, ATK, DEF;
  string Line, Name;

  stringstream ss;
  int lines_p = 0;

  for (int i = 0; i < this->Pokedex_Number; ++i)
  {
    getline(infile, Line);
    {
        ss.str(Line);   // replace string steam buffer with line
        ss.clear();     // reset string stream error bits
  
        if (ss >> Pokedex_Number >> Name >> HP_Max >> ATK >> DEF)
        {
            lines_p++;
        }
    }
  }

  this->DEF = DEF;
  cout << "DEF = " << DEF << endl;
  infile.close();
}

void POKEMON::set_SPA()
{
  //Retrieve from File based on the instance's Pokedex Number
  string filename;
  ifstream infile;
  infile.open("POKEMON.txt");   // if file opened successfully
  infile.ignore(1000, '\n');    //Ignore the first line of text file

  int Pokedex_Number, HP_Max, ATK, DEF, SPA;
  string Line, Name;

  stringstream ss;
  int lines_p = 0;

  for (int i = 0; i < this->Pokedex_Number; ++i)
  {
    getline(infile, Line);
    {
        ss.str(Line);   // replace string steam buffer with line
        ss.clear();     // reset string stream error bits
  
        if (ss >> Pokedex_Number >> Name >> HP_Max >> ATK >> DEF >> SPA)
        {
            lines_p++;
        }
    }
  }

  this->SPA = SPA;
  cout << "SPA = " << SPA << endl;
  infile.close();
}

void POKEMON::set_SPD()
{
  //Retrieve from File based on the instance's Pokedex Number
  string filename;
  ifstream infile;
  infile.open("POKEMON.txt");   // if file opened successfully
  infile.ignore(1000, '\n');    //Ignore the first line of text file

  int Pokedex_Number, HP_Max, ATK, DEF, SPA, SPD;
  string Line, Name;

  stringstream ss;
  int lines_p = 0;

  for (int i = 0; i < this->Pokedex_Number; ++i)
  {
    getline(infile, Line);
    {
        ss.str(Line);   // replace string steam buffer with line
        ss.clear();     // reset string stream error bits
  
        if (ss >> Pokedex_Number >> Name >> HP_Max >> ATK >> DEF >> SPA >> SPD)
        {
            lines_p++;
        }
    }
  }

  this->SPD = SPD;
  cout << "SPD = " << SPD << endl;
  infile.close();
}

void POKEMON::set_SPE()
{
  //Retrieve from File based on the instance's Pokedex Number
  string filename;
  ifstream infile;
  infile.open("POKEMON.txt");   // if file opened successfully
  infile.ignore(1000, '\n');    //Ignore the first line of text file

  int Pokedex_Number, HP_Max, ATK, DEF, SPA, SPD, SPE;
  string Line, Name;

  stringstream ss;
  int lines_p = 0;

  for (int i = 0; i < this->Pokedex_Number; ++i)
  {
    getline(infile, Line);
    {
        ss.str(Line);   // replace string steam buffer with line
        ss.clear();     // reset string stream error bits
  
        if (ss >> Pokedex_Number >> Name >> HP_Max >> ATK >> DEF >> SPA >> SPD >> SPE)
        {
            lines_p++;
        }
    }
  }

  this->SPE = SPE;
  cout << "SPE = " << SPE << endl;
  infile.close();
}

void POKEMON::set_Type1()
{
  //Retrieve from File based on the instance's Pokedex Number
  string filename;
  ifstream infile;
  infile.open("POKEMON.txt");   // if file opened successfully
  infile.ignore(1000, '\n');    //Ignore the first line of text file

  int Pokedex_Number, HP_Max, ATK, DEF, SPA, SPD, SPE, Total;
  string Line, Name, TypeOne;

  stringstream ss;
  int lines_p = 0;

  for (int i = 0; i < this->Pokedex_Number; ++i)
  {
    getline(infile, Line);
    {
        ss.str(Line);   // replace string steam buffer with line
        ss.clear();     // reset string stream error bits
  
        if (ss >> Pokedex_Number >> Name >> HP_Max >> ATK >> DEF >> SPA >> SPD >> SPE >> Total >> TypeOne)
        {
            lines_p++;
        }
    }
  }

  TYPE Type1 = convert(TypeOne);
  this->Type1 = Type1;
  cout << "Type1 = " << Type1 << endl;
  infile.close();
}

void POKEMON::set_Type2()
{
  //Retrieve from File based on the instance's Pokedex Number
  string filename;
  ifstream infile;
  infile.open("POKEMON.txt");   // if file opened successfully
  infile.ignore(1000, '\n');    //Ignore the first line of text file

  int Pokedex_Number, HP_Max, ATK, DEF, SPA, SPD, SPE, Total;
  string Line, Name, TypeOne, TypeTwo;

  stringstream ss;
  int lines_p = 0;

  for (int i = 0; i < this->Pokedex_Number; ++i)
  {
    getline(infile, Line);
    {
        ss.str(Line);   // replace string steam buffer with line
        ss.clear();     // reset string stream error bits
  
        if (ss >> Pokedex_Number >> Name >> HP_Max >> ATK >> DEF >> SPA >> SPD >> SPE >> Total >> TypeOne >> TypeTwo)
        {
            lines_p++;
        }
    }
  }

  TYPE Type2 = convert(TypeTwo);
  this->Type2 = Type2;
  cout << "Type2 = " << Type2 << endl;
  infile.close();
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

int POKEMON::get_SPE() const
{
  return SPE;
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
    for(int j = i; j <= 151; j += 25)
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

TYPE POKEMON::convert(const std::string& str)
{
    if(str == "BUG")            return BUG;
    else if(str == "DRAGON")    return DRAGON;
    else if(str == "ELECTRIC")  return ELECTRIC;
    else if(str == "FIGHT")     return FIGHT;
    else if(str == "FIRE")      return FIRE;
    else if(str == "FLYING")    return FLYING;
    else if(str == "GHOST")     return GHOST;
    else if(str == "GRASS")     return GRASS;
    else if(str == "GROUND")    return GROUND;
    else if(str == "ICE")       return ICE;
    else if(str == "NORMAL")    return NORMAL;
    else if(str == "POISON")    return POISON;
    else if(str == "PSYCHIC")   return PSYCHIC;
    else if(str == "ROCK")      return ROCK;
    else if(str == "WATER")     return WATER;
    else if(str == "NA")        return NA;
}