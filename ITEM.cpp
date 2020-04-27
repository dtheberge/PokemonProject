//ITEM IMPLEMENTATION FILE

#include "ITEM.h"

//CONSTRUCTORS
ITEM::ITEM()
{
  set_Number(Random_Item());
  set_Information();
}

ITEM::ITEM(int Number)
{
  set_Number(Number);
  set_Information();
}

//SETTERS
void ITEM::set_Information()
{
  ifstream infile;
  infile.open("ITEMS.txt");   // if file opened successfully
  infile.ignore(1000, '\n');    //Ignore the first line of text file

  int x = 0;
  string Number, Name, Condition, HP, ATK, DEF, SPE, SPD, Buy, Sell;

  stringstream ss;
  int lines_p = 0;

  for(int i = 0; i < this->Number; ++i)
  {
    infile.ignore(10000, '\n');
  }

  getline(infile, Number, '\t');
  getline(infile, Name, '\t');
  getline(infile, Condition, '\t');
  getline(infile, HP, '\t');
  getline(infile, ATK, '\t');
  getline(infile, DEF, '\t');
  getline(infile, SPE, '\t');
  getline(infile, SPD, '\t');
  getline(infile, Buy, '\t');
  getline(infile, Sell, '\n');

  stringstream convert0(Number); 
  convert0 >> x;
  this->Number = x;

  stringstream convert1(HP); 
  convert1 >> x; 
  this->HP = x;

  stringstream convert2(ATK); 
  convert2 >> x;
  this->ATK = x;

  stringstream convert3(DEF); 
  convert3 >> x;
  this->DEF = x;

  stringstream convert4(SPE); 
  convert4 >> x;
  this->SPE = x;

  stringstream convert5(SPD); 
  convert5 >> x;
  this->SPD = x;

  stringstream convert6(Buy); 
  convert6 >> x;
  this->Buy = x;

  stringstream convert7(Sell); 
  convert7 >> x;
  this->Sell = x;

  this->Name = Name;
  CONDITION Condition1 = convert(Condition);
  this->Condition = Condition1;
}

void ITEM::set_Number(int Number) 
{
  this->Number = Number;
}

//GETTERS
int ITEM::get_Number() const
{
  return Number;
}

string ITEM::get_Name() const
{
  return Name;
}

CONDITION ITEM::get_Condition() const
{
  return Condition;
}

int ITEM::get_HP() const
{
  return HP;
}

int ITEM::get_ATK() const
{
  return ATK;
}

int ITEM::get_DEF() const
{
  return DEF;
}

int ITEM::get_SPE() const
{
  return SPE;
}

int ITEM::get_SPD() const
{
  return SPD;
}

int ITEM::get_Buy() const
{
  return Buy;
}

int ITEM::get_Sell() const
{
  return Sell;
}

int ITEM::Random_Item()
{
  int elapsed_seconds = time(nullptr);
  srand(elapsed_seconds);

  int Random_Number = rand() % 17;
  return Random_Number;
}

// void ITEM::Appliable_Item(int Item_Index)
// {
//   ITEM Item(Item_Index);
//   Pokemon->set_HPCurrent(Item.get_HP());
//   Pokemon->set_BattleStat("ATK", Item.get_ATK());
//   Pokemon->set_BattleStat("DEF", Item.get_DEF());
//   Pokemon->set_BattleStat("SPE", Item.get_SPE());
//   Pokemon->set_BattleStat("SPD", Item.get_SPD());
//   Pokemon->set_CurrentCondition(Item.get_Condition());
// }

bool ITEM::Pokeball(POKEMON Pokemon, ITEM Item)
{
  bool capture = true;
  return capture;
}

CONDITION ITEM::convert(const std::string& str)
{
    if(str == "BURNED")             return BURNED;
    else if(str == "FROZEN")        return FROZEN;
    else if(str == "PARALYZED")     return PARALYZED;
    else if(str == "POISONED")      return POISONED;
    else if(str == "ASLEEP")        return ASLEEP;
    else if(str == "CONFUSED")      return CONFUSED;
    else if(str == "ATTRACTED")     return ATTRACTED;
    else if(str == "CURSED")        return CURSED;
    else                            return NO_CONDITION;
}