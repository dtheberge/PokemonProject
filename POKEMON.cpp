//POKEMON IMPLEMENTATION FILE
#include "POKEMON.h"

//CONSTRUCTORS
POKEMON::POKEMON()    //For Random Pokemon
{
  Base_Stats.insert(pair<string, int>("HP_Max",0));
  Base_Stats.insert(pair<string, int>("HP_Current",0));
  Base_Stats.insert(pair<string, int>("ATK",0));
  Base_Stats.insert(pair<string, int>("DEF",0));
  Base_Stats.insert(pair<string, int>("SPE",0));
  Base_Stats.insert(pair<string, int>("SPD",0));

  Individual_Values.insert(pair<string, int>("HP_Max",0));
  Individual_Values.insert(pair<string, int>("ATK",0));
  Individual_Values.insert(pair<string, int>("DEF",0));
  Individual_Values.insert(pair<string, int>("SPE",0));
  Individual_Values.insert(pair<string, int>("SPD",0));

  Effort_Values.insert(pair<string, int>("HP_Max",0));
  Effort_Values.insert(pair<string, int>("ATK",0));
  Effort_Values.insert(pair<string, int>("DEF",0));
  Effort_Values.insert(pair<string, int>("SPE",0));
  Effort_Values.insert(pair<string, int>("SPD",0));

  Idle_Stats.insert(pair<string, int>("HP_Current",0));
  Idle_Stats.insert(pair<string, int>("ATK",0));
  Idle_Stats.insert(pair<string, int>("DEF",0));
  Idle_Stats.insert(pair<string, int>("SPE",0));
  Idle_Stats.insert(pair<string, int>("SPD",0));

  Battle_Stats.insert(pair<string, int>("ATK",0));
  Battle_Stats.insert(pair<string, int>("DEF",0));
  Battle_Stats.insert(pair<string, int>("SPE",0));
  Battle_Stats.insert(pair<string, int>("SPD",0));

  set_PokedexNumber(Random_Pokemon());
  set_BaseStats();
  set_IndividualValues();
  set_IdleStats();
  set_Moves();
  set_CurrentCondition(NO_CONDITION);

  Seen.insert(pair<int, string>(this->Pokedex_Number, this->Name));
}

POKEMON::POKEMON(int Starter)    //For Random Pokemon
{
  Base_Stats.insert(pair<string, int>("HP_Max",0));
  Base_Stats.insert(pair<string, int>("HP_Current",0));
  Base_Stats.insert(pair<string, int>("ATK",0));
  Base_Stats.insert(pair<string, int>("DEF",0));
  Base_Stats.insert(pair<string, int>("SPE",0));
  Base_Stats.insert(pair<string, int>("SPD",0));

  Individual_Values.insert(pair<string, int>("HP_Max",0));
  Individual_Values.insert(pair<string, int>("ATK",0));
  Individual_Values.insert(pair<string, int>("DEF",0));
  Individual_Values.insert(pair<string, int>("SPE",0));
  Individual_Values.insert(pair<string, int>("SPD",0));

  Effort_Values.insert(pair<string, int>("HP_Max",0));
  Effort_Values.insert(pair<string, int>("ATK",0));
  Effort_Values.insert(pair<string, int>("DEF",0));
  Effort_Values.insert(pair<string, int>("SPE",0));
  Effort_Values.insert(pair<string, int>("SPD",0));

  Idle_Stats.insert(pair<string, int>("HP_Current",0));
  Idle_Stats.insert(pair<string, int>("ATK",0));
  Idle_Stats.insert(pair<string, int>("DEF",0));
  Idle_Stats.insert(pair<string, int>("SPE",0));
  Idle_Stats.insert(pair<string, int>("SPD",0));

  Battle_Stats.insert(pair<string, int>("ATK",0));
  Battle_Stats.insert(pair<string, int>("DEF",0));
  Battle_Stats.insert(pair<string, int>("SPE",0));
  Battle_Stats.insert(pair<string, int>("SPD",0));

  set_PokedexNumber(Starter);
  set_Level(3);

  set_BaseStats();
  set_IndividualValues();
  set_IdleStats();
  set_Moves();
  set_CurrentCondition(NO_CONDITION);

  Seen.insert(pair<int, string>(this->Pokedex_Number, this->Name));
}

//PRIVATE SETTTERS -------------------------------------------------------------
void POKEMON::set_PokedexNumber(int Pokedex_Number)
{
  //Retrieve from File based on random Pokedex Number
  this->Pokedex_Number = Pokedex_Number;
}

void POKEMON::set_BaseStats()
{
  //Retrieve from File based on the instance's Pokedex Number
  ifstream infile;
  infile.open("POKEMON.txt");   // if file opened successfully
  infile.ignore(1000, '\n');    //Ignore the first line of text file

  int Pokedex_Number, HP_Max, ATK, DEF, SPD, SPE, Total;
  string Line, Name, TypeOne, TypeTwo;

  stringstream ss;
  int lines_p = 0;

  for (int i = 0; i < this->Pokedex_Number; ++i)
  {
    getline(infile, Line);
    {
        ss.str(Line);   // replace string steam buffer with line
        ss.clear();     // reset string stream error bits
  
        if (ss >> Pokedex_Number >> Name >> HP_Max >> ATK >> DEF >> SPD >> SPE >> Total >> TypeOne >> TypeTwo)
        {
            lines_p++;
        }
    }
  }

  //Set all of the retrieved values to the respective map placements/data members
  string Stat;
  for(int i = 0; i < 5; ++i)
  {
    switch(i)
    {
      case 0: Stat = "HP_Max"; break;
      case 1: Stat = "HP_Current"; break;
      case 2: Stat = "ATK"; break;
      case 3: Stat = "DEF"; break;
      case 4: Stat = "SPD"; break;
      case 5: Stat = "SPE"; break;
    }

    auto iter = this->Base_Stats.find(Stat);
    if (iter != this->Base_Stats.end())
    {
      switch(i)
      {
        case 0: iter->second += HP_Max; break;
        case 1: iter->second += HP_Max; break;
        case 2: iter->second += ATK; break;
        case 3: iter->second += DEF; break;
        case 4: iter->second += SPD; break;
        case 5: iter->second += SPE; break;
      }
    } else {
      cout << Stat << " STAT NOT FOUND" << endl;
    }

    this->Name = Name;
    TYPE Type1 = convert(TypeOne);
    this->Type1 = Type1;
    TYPE Type2 = convert(TypeTwo);
    this->Type2 = Type2;

    infile.close();
  }
}

void POKEMON::set_IndividualValues()
{
	auto it = Individual_Values.begin();
  it++; //I have to do the HP_IV last

	while (it != Individual_Values.end())
	{
    //Generating a Random Number between 0 and 15
    int elapsed_seconds = time(nullptr);
    srand(elapsed_seconds);

    int IV = rand() % 16;
    it->second = IV;
 
		it++;
	}

  int HP = 0;
      if (get_IVStat("ATK") % 2 == 1)
      {
        HP += 8;
      }
      if (get_IVStat("DEF") % 2 == 1)
      {
        HP += 4;
      }
      if (get_IVStat("SPD") % 2 == 1)
      {
        HP += 2;
      }
      if (get_IVStat("SPE") % 2 == 1)
      {
        HP += 1;
      }

  it = Individual_Values.begin();
  it->second = HP;
}

//I changed this
void POKEMON::set_Moves()
{
  //Set Predetermined Moves
  int M1, M2, M3, M4;

  if (this->Type2 == 0)
  {
    switch(this->Type1)
    {
      case 1: M1 = 36; M2 = 43; M3 = 12; M4 = 20; break;
      case 2: M1 = 46; M2 = 52; M3 = 57; M4 = 108; break;
      case 3: M1 = 105; M2 = 106; M3 = 107; M4 = 160; break;
      case 4: M1 = 10; M2 = 29; M3 = 34; M4 = 51; break;
      case 5: M1 = 22; M2 = 84; M3 = 85; M4 = 87; break;
      case 6: M1 = 12; M2 = 24; M3 = 42; M4 = 56; break;
      case 7: M1 = 37; M2 = 61; M3 = 71; M4 = 90; break;
      case 8: M1 = 48; M2 = 70; M3 = 92; M4 = 154; break;
      case 9: M1 = 5; M2 = 6; M3 = 13; M4 = 19; break; 
      case 10: M1 = 33; M2 = 78; M3 = 91; M4 = 125; break;  //I skipped 11 because 11 is Normal and is the default
      case 12: M1 = 44; M2 = 60; M3 = 76; M4 = 99; break;
      case 13: M1 = 81; M2 = 83; M3 = 95; M4 = 96; break;
      case 14: M1 = 4; M2 = 49; M3 = 50; M4 = 57; break;
      case 15: M1 = 72; M2 = 89; M3 = 103; M4 = 109; break;
      default: M1 = 30; M2 = 39; M3 = 45; M4 = 88; break;
    }
  }

  if (this->Type2 != 0)
  {
    switch(this->Type1)
    {
      case 1: M1 = 36; M2 = 43; break;
      case 2: M1 = 46; M2 = 52; break;
      case 3: M1 = 105; M2 = 106; break;
      case 4: M1 = 10; M2 = 29; break;
      case 5: M1 = 22; M2 = 84; break;
      case 6: M1 = 12; M2 = 24; break;
      case 7: M1 = 37; M2 = 61; break;
      case 8: M1 = 48; M2 = 70; break;
      case 9: M1 = 5; M2 = 6; break; 
      case 10: M1 = 33; M2 = 78; break;  //I skipped 11 because 11 is Normal and is the default
      case 12: M1 = 44; M2 = 60; break;
      case 13: M1 = 81; M2 = 83; break;
      case 14: M1 = 4; M2 = 49; break;
      case 15: M1 = 72; M2 = 89; break;
      default: M1 = 30; M2 = 39; break;
    }

    switch(this->Type2)
    {
      case 1: M3 = 12; M4 = 20; break;
      case 2: M3 = 57; M4 = 108; break;
      case 3: M3 = 107; M4 = 160; break;
      case 4: M3 = 34; M4 = 51; break;
      case 5: M3 = 85; M4 = 87; break;
      case 6: M3 = 42; M4 = 56; break;
      case 7: M3 = 71; M4 = 90; break;
      case 8: M3 = 92; M4 = 154; break;
      case 9: M3 = 13; M4 = 19; break; 
      case 10: M3 = 91; M4 = 125; break;  //I skipped 11 because 11 is Normal and is the default
      case 12: M3 = 76; M4 = 99; break;
      case 13: M3 = 95; M4 = 96; break;
      case 14: M3 = 50; M4 = 57; break;
      case 15: M3 = 103; M4 = 109; break;
      default: M3 = 45; M4 = 88; break;
    }
  }

    ATTACK temp1(M1);
    Move_Set.push_back(temp1);

    ATTACK temp2(M2);
    Move_Set.push_back(temp2);

    ATTACK temp3(M3);
    Move_Set.push_back(temp3);

    ATTACK temp4(M4);
    Move_Set.push_back(temp4);
}

//PUBLIC SETTERS ---------------------------------------------------------------

void POKEMON::set_HPCurrent(int Amount)
{
  auto iter = this->Idle_Stats.find("HP_Current");
  if (iter != this->Idle_Stats.end())
  {
    if(Amount == 0)
    {
      iter->second = get_BaseStat("HP_Current");
    } else {
      iter->second = (get_HPCurrent() + Amount);
    }
  } else {
    cout << "HP_Current" << " STAT NOT FOUND" << endl;
  }
}

void POKEMON::set_IdleStats()
{
  string Stat;

  for(int i = 0; i < 5; ++i)
  {
    switch(i)
    {
      case 0: Stat = "HP_Current"; break;
      case 1: Stat = "ATK"; break;
      case 2: Stat = "DEF"; break;
      case 3: Stat = "SPD"; break;
      case 4: Stat = "SPE"; break;
    }

    auto iter = this->Idle_Stats.find(Stat);
    if (iter != this->Idle_Stats.end())
    {
      switch(i)
      {
        case 0: iter->second = floor((2 * get_BaseStat("HP_Max") + get_IVStat("HP_Max") + get_EffortValue("HP_Max")) * this->Level / 100 + this->Level + 10); break;
        case 1: iter->second = floor(floor((2 * get_BaseStat(Stat) + get_IVStat(Stat) + get_EffortValue(Stat)) * this->Level / 100 + 5) * 1); break;
        case 2: iter->second = floor(floor((2 * get_BaseStat(Stat) + get_IVStat(Stat) + get_EffortValue(Stat)) * this->Level / 100 + 5) * 1); break;
        case 3: iter->second = floor(floor((2 * get_BaseStat(Stat) + get_IVStat(Stat) + get_EffortValue(Stat)) * this->Level / 100 + 5) * 1); break;
        case 4: iter->second = floor(floor((2 * get_BaseStat(Stat) + get_IVStat(Stat) + get_EffortValue(Stat)) * this->Level / 100 + 5) * 1); break;
      }
    } else {
      cout << Stat << " STAT NOT FOUND" << endl;
    }
  }
}

void POKEMON::set_EffortValues(string Stat, int Modification)
{
  auto iter = this->Effort_Values.find(Stat);
  if (iter != this->Effort_Values.end())
  {
    if((iter->second + Modification) <= 65535)
    {
      iter->second += Modification;
    }
    else
    {
      iter->second = 65535;
    }
  }
  else
  {
    cout << Stat << " STAT NOT FOUND" << endl;
  }
}

void POKEMON::set_BattleStat(string Stat, int Modification)
{
  auto iter = this->Battle_Stats.find(Stat);
  if (iter != this->Battle_Stats.end())
    iter->second += Modification;
  else
    cout << Stat << " STAT NOT FOUND" << endl;
}

void POKEMON::reset_BattleStats()
{
  string Stat;
  for(int i = 0; i < 4; ++i)
  {
    switch(i)
    {
      case 0: Stat = "ATK"; break;
      case 1: Stat = "DEF"; break;
      case 2: Stat = "SPD"; break;
      case 3: Stat = "SPE"; break;
    }

    auto iter = this->Battle_Stats.find(Stat);
    if (iter != this->Battle_Stats.end())
    {
      switch(i)
      {
        case 0: iter->second = get_IdleStat(Stat); break;
        case 1: iter->second = get_IdleStat(Stat); break;
        case 2: iter->second = get_IdleStat(Stat); break;
        case 3: iter->second = get_IdleStat(Stat); break;
      }
    } else {
      cout << Stat << " STAT NOT FOUND" << endl;
    }
  }

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

int POKEMON::get_Level() const
{
  return Level;
}

int POKEMON::get_HPCurrent() const
{
  auto iter = this->Idle_Stats.find("HP_Current");
  if (iter != this->Idle_Stats.end())
    return iter->second;
  else
    cout << "HP_Current" << " STAT NOT FOUND" << endl;
}

int POKEMON::get_BaseStat(string Stat) const
{
  auto iter = this->Base_Stats.find(Stat);
  if (iter != this->Base_Stats.end())
    return iter->second;
  else
    cout << Stat << " STAT NOT FOUND" << endl;
}

int POKEMON::get_IVStat(string Stat) const
{
  auto iter = this->Individual_Values.find(Stat);
  if (iter != this->Individual_Values.end())
    return iter->second;
  else
    cout << Stat << " STAT NOT FOUND" << endl;
}

int POKEMON::get_EffortValue(string Stat) const
{
  auto iter = this->Effort_Values.find(Stat);
  if (iter != this->Effort_Values.end())
    return iter->second;
  else
    cout << Stat << " STAT NOT FOUND" << endl;
}

int POKEMON::get_IdleStat(string Stat) const
{
  auto iter = this->Idle_Stats.find(Stat);
  if (iter != this->Idle_Stats.end())
    return iter->second;
  else
    cout << Stat << " STAT NOT FOUND" << endl;
}

int POKEMON::get_BattleStat(string Stat) const
{
  auto iter = this->Battle_Stats.find(Stat);
  if (iter != this->Battle_Stats.end())
    return iter->second;
  else
    cout << Stat << " STAT NOT FOUND" << endl;
}

ATTACK POKEMON::get_Move(int MoveIndex) const
{
  if(MoveIndex < 0 || MoveIndex > (Move_Set.size() - 1) || MoveIndex > 3)
  {
    cout << "You are requesting a Move outside of the Vector bounds.";
  }
  return Move_Set[MoveIndex];
}

CONDITION POKEMON::get_CurrentCondition() const
{
  return Current_Condition;
}


//Other
void POKEMON::get_Seen()
{
  for(int i = 1; i <= 30; i++)
  {
    for(int j = i; j <= 151; j += 30)
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
  struct Pokemon_Pick{
    int Pokedex_Number;
    int Low;
    int High;
    int Chance;
  };
  vector<Pokemon_Pick> Route_Pokemon;

  ifstream infile;
  infile.open("POKEMON_LOCATIONS.txt");   // if file opened successfully
  infile.ignore(1000, '\n');    //Ignore the first line of text file

  double Number = 0;
  int Low, High, Pokedex_Number;
  string Line;

  stringstream ss;
  int lines_p = 0;
  
  for (int i = 0; Number < (NPCs_Defeated + 1); ++i)
  {
    getline(infile, Line, '\t');
    ss.str(Line);
    ss.clear();

    ss >> Number;
    infile.ignore(1000, '\n');
  }

  while (Number <= (NPCs_Defeated + 1))
  {
    getline(infile, Line);
    {
        ss.str(Line);   // replace string steam buffer with line
        ss.clear();     // reset string stream error bits
  
        if (ss >> Number >>  Pokedex_Number >> Low >> High)
        {
            lines_p++;

            Pokemon_Pick Temp;

            Temp.Pokedex_Number = Pokedex_Number;
            Temp.Low = Low;
            Temp.High = High;

            Route_Pokemon.push_back(Temp);
        }
    }
  }

  int elapsed_seconds = time(nullptr);
  srand(elapsed_seconds);
  int random_Pokemon = rand() % Route_Pokemon.size();

  this_thread::sleep_for(chrono::milliseconds(500));
  elapsed_seconds = time(nullptr);
  srand(elapsed_seconds);
  int random_Level = (rand() % ((Route_Pokemon[random_Pokemon]).High - (Route_Pokemon[random_Pokemon]).Low + 1)) + (Route_Pokemon[random_Pokemon]).Low;

  set_Level(random_Level);
  return (Route_Pokemon[random_Pokemon]).Pokedex_Number;
}

void POKEMON::set_Level(int Level)
{
  this->Level = Level;
}

void POKEMON::raise_Level(int Level)
{
  this->Level += Level;
}

void POKEMON::Apply_Item(ITEM Item)
{
  set_HPCurrent(Item.get_HP());
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
    else                        return NA;
}