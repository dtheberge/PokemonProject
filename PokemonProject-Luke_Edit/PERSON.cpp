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

POKEMON PERSON::get_Pocket(int index) const
{
  return Pocket[index];
}
