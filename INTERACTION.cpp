//INTERACTION IMPLEMENTATION FILE
#include "INTERACTION.h"

INTERACTION& INTERACTION::operator<<(const string& text)
{
  for (size_t i = 0; i < text.size(); ++i)
  {
    cout << text[i] << flush;
    this_thread::sleep_for(chrono::milliseconds(40));
  }

  cout << endl;
  return *this;
}

void INTERACTION::Continue()
{
  cout << "\n\n\tPress any key to continue…";
  cin.get();
  system("clear");
}

POKEMON INTERACTION::Introduction(PLAYER* USER)
{
  INTERACTION delay;
  //puts("\x1b[31mWhat is this shit\x1b[0mWhat the heck is this shit");
  delay << "For the best experience: \n\tPut the Terminal in Fullscreen.\n\tIncrease font size to 20. \n\tRight Click Top Bar > Change Settings > Appearance."; Continue();


  cout << R"(
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

  delay << "Hello there!" << "Welcome to the world of POKéMON!"; Continue();

    cout << R"(
         `...`````       
         `:-.--.-/`      
          :/+.-+/+`      
          .-.``..:`      
`..        `-::/.        
-...`  ```.-:+//:-.```   
.``.` .. ..///:+:-```-   
...-```. .`:---:`. `...  
`.:-.-..`.------````--.. 
 .....-```/----:++/+oo/-.
   `..-.``o::--:ooooss+..
      ....hs++h/o--//+:. 
      -/..ysyys+-:::::.  
      ....ssyyso..-...   
      ....ssyyss...``.   
      ..``sssoso-`.`..   
      ````+so+oo:`````   
       ::/ooo`.o+::::    
       .+oooo  /++ooo    
       -oosoo  -++ooo    
       :soos+  `so+oo`   
     -ssyyho/   +yyyy:   
     `---`      -+syyy` 
  )" << "\n\n";

  delay << "My name is OAK!" << "People call me the POKEMON PROF!"; Continue();

  cout << R"(
░█▀▀▄░░░░░░░░░░░▄▀▀█
░█░░░▀▄░▄▄▄▄▄░▄▀░░░█
░░▀▄░░░▀░░░░░▀░░░▄▀
░░░░▌░▄▄░░░▄▄░▐▀▀
░░░▐░░█▄░░░▄█░░▌▄▄▀▀▀▀█
░░░▌▄▄▀▀░▄░▀▀▄▄▐░░░░░░█
▄▀▀▐▀▀░▄▄▄▄▄░▀▀▌▄▄▄░░░█
█░░░▀▄░█░░░█░▄▀░░░░█▀▀▀
░▀▄░░▀░░▀▀▀░░▀░░░▄█▀
░░░█░░░░░░░░░░░▄▀▄░▀▄
░░░█░░░░░░░░░▄▀█░░█░░█
░░░█░░░░░░░░░░░█▄█░░▄▀
░░░█░░░░░░░░░░░████▀
░░░▀▄▄▀▀▄▄▀▀▄▄▄█▀
  )" << "\n\n";

  delay << "This world is inhabited by creatures called POKEMON!"; Continue();

      cout << R"(
         `...`````       
         `:-.--.-/`      
          :/+.-+/+`      
          .-.``..:`      
`..        `-::/.        
-...`  ```.-:+//:-.```   
.``.` .. ..///:+:-```-   
...-```. .`:---:`. `...  
`.:-.-..`.------````--.. 
 .....-```/----:++/+oo/-.
   `..-.``o::--:ooooss+..
      ....hs++h/o--//+:. 
      -/..ysyys+-:::::.  
      ....ssyyso..-...   
      ....ssyyss...``.   
      ..``sssoso-`.`..   
      ````+so+oo:`````   
       ::/ooo`.o+::::    
       .+oooo  /++ooo    
       -oosoo  -++ooo    
       :soos+  `so+oo`   
     -ssyyho/   +yyyy:   
     `---`      -+syyy` 
  )" << "\n\n";

  delay << "For some people, POKEMON are pets." << "Others use them for fights." << "Myself... I study POKEMON as a profession."; Continue();

  delay  << "First, what is your name?" << "Enter Name here: ";

  string name;
  cin >> name;
  USER->set_Name(name);
  
  delay << "Right! So your name is " + USER->get_Name() + "!";
  delay << "You will need a starter. Which would you like? \n\t(1) Bulbasuar\n\t(2) Charmander\n\t(3) Squirtle\n\nEnter your choice: ";

  int choice;
  cin >> choice; //Must be 1,2, or 3

  if (choice == 2) {choice = 4;}
  if (choice == 3) {choice = 7;}

  POKEMON Starter(choice);
  cout << "Starters Name: " << Starter.get_Name();

  return Starter;
}
