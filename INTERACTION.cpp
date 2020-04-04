//INTERACTION IMPLEMENTATION FILE
#include "INTERACTION.h"

INTERACTION& INTERACTION::operator<<(const string& text)
{
  for (size_t i = 0; i < text.size(); ++i)
  {
    cout << text[i] << flush;
    this_thread::sleep_for(chrono::milliseconds(40));
  }

  return *this;
}
