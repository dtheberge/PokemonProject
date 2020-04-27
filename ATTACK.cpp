//ATTACK IMPLEMENTATION FILE

#include "ATTACK.h"

//CONSTRUCTOR
ATTACK::ATTACK(int attack)
{
  set_Information(attack);
  set_Condition();
}

void ATTACK::set_Information(int attack)
{
  ifstream infile;
  infile.open("ATTACKS.txt");   // if file opened successfully
  infile.ignore(1000, '\n');    //Ignore the first line of text file

  int x = 0;
  string Line, Name, Type, Category, Description, line_Number, DMG, ACC, PP;

  stringstream ss;
  int lines_p = 0;

  for(int i = 0; i < attack - 1; ++i)
  {
    infile.ignore(10000, '\n');
  }

  getline(infile, line_Number, '\t');
  getline(infile, Name, '\t');
  getline(infile, Type, '\t');
  getline(infile, Category, '\t');
  getline(infile, DMG, '\t');
  getline(infile, ACC, '\t');
  getline(infile, PP, '\t');
  getline(infile, Description, '\n');

  stringstream convert0(line_Number); 
  convert0 >> x;
  this->Move_Number = x;

  stringstream convert1(DMG); 
  convert1 >> x; 
  this->DMG = x;

  stringstream convert2(ACC); 
  convert2 >> x;
  this->ACC = x;

  stringstream convert3(PP); 
  convert3 >> x;
  this->PP = x;

  this->Name = Name;
  TYPE Type1 = convert(Type);
  this->Type = Type1;
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

int ATTACK::get_MoveNumber() const
{
  return Move_Number;
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

CONDITION ATTACK::get_Condition() const
{
  return Condition;
}

TYPE ATTACK::convert(const std::string& str)
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
    else                        return NA;
}
