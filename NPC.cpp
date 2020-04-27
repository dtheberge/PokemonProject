//NPC IMPLEMENTATION FILE

#include "NPC.h"

//CONSTRUCTOR
NPC::NPC()
{
  set_Name("");
  set_Dialogue();

  this->Money = 0;

  int count = NPC_PokemonCount();
  for(int i = 0; i < count; i++)
  {
    add_Party(POKEMON());
  }
}

//STATIC FUNCTION
//We need a new One because the getter for the static data member didn't work

//SETTER FUNCTIONS
void NPC::set_Name(string Name)
{
  int random;
  string random_Name;

  int elapsed_seconds = time(nullptr);
  srand(elapsed_seconds);
  random = (rand() % 26) + 1;

  ifstream infile;
  infile.open("NPC_INFO.txt");

  for (int i = 0; i < random - 1; ++i)
  {
    infile.ignore(1000, '\n');
  }
  infile.ignore(100, '\t');
  getline(infile, Name, '\t');

  this->Name = Name;
  infile.close();
}

void NPC::set_Money(int Transaction)
{
  //Generate a Pseudorandom Number to add to the Money
  int random_Money = 70;

  this->Money += random_Money;
}

void NPC::remove_Party(int indexToRemove)
{ //Remove if the Pokemon Current HP has reached 0
  auto iter = Party.begin();
  iter += indexToRemove;
  Party.erase(iter);
}

int NPC::NPC_PokemonCount()
{
  int PokemonCount = 3;

  return PokemonCount;
}

void NPC::set_Dialogue()
{
  int random;
  string Intro, Exit;

  int elapsed_seconds = time(nullptr);
  srand(elapsed_seconds);
  random = (rand() % 109) + 28;

  ifstream infile;
  infile.open("NPC_INFO.txt");

  for (int i = 0; i < random - 1; ++i)
  {
    infile.ignore(1000, '\n');
  }

  infile.ignore(100, '\t');
  getline(infile, Intro, '\t');
  getline(infile, Exit, '\n');

  this->Intro = Intro;
  this->Exit = Exit;
  infile.close();
}

string NPC::get_Intro() const
{
  return Intro;
}

string NPC::get_Exit() const
{
  return Exit;
}
