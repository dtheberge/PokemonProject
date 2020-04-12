//INTERACTION IMPLEMENTATION FILE
#include "INTERACTION.h"

INTERACTION& INTERACTION::operator<<(const string& text)
{
  for (size_t i = 0; i < text.size(); ++i)
  {
    cout << text[i] << flush;
    this_thread::sleep_for(chrono::milliseconds(40));
  }

  cout << "\n\n\tPress any key to continue…";
  cin.get();
  system("clear");

  return *this;
}

void INTERACTION::Introduction(const PLAYER &USER)
{
  INTERACTION delay;
  //puts("\x1b[31mWhat is this shit\x1b[0mWhat the heck is this shit");
  delay << "For the best experience: \n\tPut the Terminal in Fullscreen.\n\tIncrease font size to 20. \n\tRight Click Top Bar > Change Settings > Appearance.";


  std::cout << R"(
                                  ,'\
    _.----.        ____         ,'  _\   ___    ___     ____
_,-'       `.     |    |  /`.   \,-'    |   \  /   |   |    \  |`.
\      __    \    '-.  | /   `.  ___    |    \/    |   '-.   \ |  |
 \.    \ \   |  __  |  |/    ,','_  `.  |          | __  |    \|  |
   \    \/   /,' _`.|      ,' / / / /   |          ,' _`.|     |  |
    \     ,-'/  /   \    ,'   | \/ / ,`.|         /  /   \  |     |
     \    \ |   \_/  |   `-.  \    `'  /|  |    ||   \_/  | |\    |
      \    \ \      /       `-.`.___,-' |  |\  /| \      /  | |   |
       \    \ `.__,'|  |`-._    `|      |__| \/ |  `.__,'|  | |   |
        \_.-'       |__|    `-._ |              '-.|     '-.| |   |
                                `'                            '-._|     
  )" << "\n\n";

  delay << "Hello there! \nWelcome to the world of POKéMON!";
  delay << "My name is OAK! \nPeople call me the POKEMON PROF!";
  delay << "This world is inhabited by creatures called POKEMON!";
  delay << "For some people, POKEMON are pets. \nOthers use them for fights. \nMyself... I study POKEMON as a profession.";

  

}
