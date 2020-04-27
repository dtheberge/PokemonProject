//INTERACTION IMPLEMENTATION FILE
#include "INTERACTION.h"

INTERACTION& INTERACTION::operator<<(const string& text)
{
  for (size_t i = 0; i < text.size(); ++i)
  {
    cout << text[i] << flush;
    this_thread::sleep_for(chrono::milliseconds(30));
  }

  cout << endl;
  return *this;
}

void INTERACTION::Continue()
{
  do{
   cout << "\n\tPress Enter to continue...";
  }while (cin.get() != '\n');
  system("clear");
}

void INTERACTION::Introduction(PLAYER* USER)
{
  INTERACTION delay;
  delay << "For the best experience: \n\tPut the Terminal in Fullscreen.\n\tIncrease font size to 14 (Estimate for a 14\" screen). \n\tRight Click Top Bar > Change Settings > Appearance."; Continue();

  ASCII(1);
  delay << "Hello there!" << "Welcome to the world of POKéMON!"; Continue();

  ASCII(2);
  delay << "My name is OAK!" << "People call me the POKEMON PROF!"; Continue();

  ASCII(3);
  delay << "This world is inhabited by creatures called POKEMON!"; Continue();

  ASCII(2);
  delay << "For some people, POKEMON are pets." << "Others use them for fights." << "Myself... I study POKEMON as a profession.";
  Continue();

  ASCII(2);
  delay  << "First, what is your name?" << "Enter Name here: \n";

  string name;
  cin >> name;

  USER->set_Name(name);
  system("clear");
  cin.ignore();

  ASCII(2);
  delay << "Right! So your name is " + USER->get_Name() + "!";
  delay <<  USER->get_Name() + "! Your very own POKéMON legend is about to unfold!" << "A world of dreams and adventures with POKéMON awaits! Let's go!"; Continue();

  ASCII(2);
  delay << "Ok " + USER->get_Name() + ", You can navigate using the following menu: " << "\t(1) Walk" << "\t(2) Bag" << "\t(3) Party" << "\t(4) Pokédex";

      delay << "\nYou may type the number, first letter, or entire word to choose *Depending* on the prompt: ";
      delay << "\n\tWalking may have you walk into a trainer, a wild pokémon, a town, or even find an item!";
      delay << "\tBag lets you view your current items and use one if you like!";
      delay << "\tParty lets you to view your Pokemon, their stats, moves, or even switch their order!";
      delay << "\tPokédex lets you view all the pokémon that you have encountered.";
      Continue();

  ASCII(2);
  delay << "To make a complete guide on all the POKEMON in the world using the pokédex..." << "That was my dream! But, I'm too old! I can't do it!";
  delay << "So, I want you to fulfill my dream for me! Get moving, you two!" << "This is a great undertaking in POKEMON history!";
  Continue();

  ASCII(2);
  delay << "Well, that's enough of that! You need to start on your journey to become the next Pokémon Master!";
  Continue();
}

void INTERACTION::Starter(PLAYER* USER)
{
  INTERACTION delay;
  system("clear");

  ASCII(2);
  delay << "Hey! Wait! Don't go out!";
  cin.ignore();
  Continue();

  ASCII(2);
  delay << "It's unsafe! Wild POKEMON live in tall grass!" << "You need your own POKEMON for your protection." << "I know! Here, come with me!";
  Continue();

  ASCII(4);
  delay << "Here, " + USER->get_Name() + "! There are 3 POKEMON here! Haha! They are inside the POKE BALLS."
        << "When I was young, I was a serious POKEMON trainer."
        << "In my old age, I have only 3 left, but you can have one! Choose!";    
  Continue();
  
  // begin

int choice;
string response;

do 
{
  system("clear");

    ASCII(4);
    delay << "Now, " + USER->get_Name() + ", which POKEMON do you want?" << "Enter choice here (1,2,3): \n";
    cin >> choice;
    cin.ignore();

    do
    {
      try
      {
          if (choice < 1 || choice > 3)
          {
              throw invalid_argument("You can only choose one of these 3 pokemon.");
          }
      }
      catch(const invalid_argument& e)
      {
          cout << e.what() << "\n\n";
          cout << "Enter choice again: ";
          cin >> choice;
      }
    } while (choice < 1 || choice > 3);
    
    system("clear");
    switch(choice)
    {
      case 1: ASCII(5); delay << "\nSo! You want the plant POKEMON, Bulbasuar?"; break;
      case 2: ASCII(6); delay << "\nSo! You want the fire POKEMON, Charmander?"; break;
      case 3: ASCII(7); delay << "\nSo! You want the water POKEMON, Squirtle?"; break;
    }

    delay << "Yes/No: \n";
    cin >> response;

    transform(response.begin(), response.end(), response.begin(), ::tolower);
} while ("n" == response || "no" == response); 

  if (choice == 2) {choice = 4;}
  if (choice == 3) {choice = 7;}

  POKEMON Starter(choice);
  USER->add_Party(Starter);

  system("clear");
  ASCII(2);
  delay << "\nThis POKEMON is really energetic!\nIf a wild POKEMON appears, your POKEMON can fight against it!";
  delay << USER->get_Name() + ", raise your young POKEMON by making it fight!";

  cin.ignore();
  Continue();

}

//MENU FUNCTIONS
void INTERACTION::Walk(PLAYER* USER)
{
  Walk_Count++;

  if (Walk_Count == 1)
  {
    Starter(USER);

  } else if((Walk_Count % 8) == 0)
  {
    Town(USER);

  } else {
    int elapsed_seconds = time(nullptr);
    srand(elapsed_seconds);

    int RandomNum = (rand() % 100) + 1;
    if (RandomNum > 0 && RandomNum < 41)            //So I can test the wild pokemon I changed this ~ range from 0 - 41
    {
      Wild_Pokemon(USER);
    } else if (RandomNum > 40 && RandomNum < 81)    // This should be 40 - 81
    {
      Trainer(USER);
    } else if (RandomNum > 80 && RandomNum < 101)   //This should be 80 - 101
    {
      Item_Found(USER);
    }
  }
}

void INTERACTION::Trainer(PLAYER* USER)
{
  INTERACTION delay;
  system("clear");
  NPC Opponent;

  for (int i = 0; i < USER->get_PartySize(); ++i)
  {
    USER->reset_BattleStats(i);
    USER->set_HPCurrent(i, 0);
  }

  for (int i = 0; i < Opponent.get_PartySize(); ++i)
  {
    Opponent.reset_BattleStats(i);
    Opponent.set_HPCurrent(i, 0);
  }

  ASCII(9);
  delay << Opponent.get_Name() + ": " + Opponent.get_Intro();
  cin.ignore();
  Continue();

  system("clear");
  ASCII(9);
  delay << Opponent.get_Name() + " would like to battle!";
  Continue();

  system("clear");
  ASCII(9);
  cout << left << setw(17) << "Opponent: " << Opponent.get_Name();
  cout << left << setw(17) << "\nCurrent Pokemon: ";
  cout << left << setw(17) << "\nPokemon Level: ";
  cout << left << setw(17) << "\nCurrent HP: ";

  ASCII(10);
  cout << left << setw(17) << USER->get_Name() + ": ";
  cout << left << setw(17) << "\nCurrent Pokemon: ";
  cout << left << setw(17) << "\nPokemon Level: ";
  cout << left << setw(17) << "\nCurrent HP: ";
  ASCII(11);

  delay << Opponent.get_Name() + " sent out " + (Opponent.get_Party(0)).get_Name() + "!";
  Continue();

  system("clear");
  ASCII(9);
  cout << left << setw(17) << "Opponent: " << Opponent.get_Name();
  cout << left << setw(17) << "\nCurrent Pokemon: " << (Opponent.get_Party(0)).get_Name();
  cout << left << setw(17) << "\nPokemon Level: " << (Opponent.get_Party(0)).get_Level();
  cout << left << setw(17) << "\nCurrent HP: " << (Opponent.get_Party(0)).get_HPCurrent();

  ASCII(10);
  cout << left << setw(17) << USER->get_Name() + ": ";
  cout << left << setw(17) << "\nCurrent Pokemon: ";
  cout << left << setw(17) << "\nPokemon Level: ";
  cout << left << setw(17) << "\nCurrent HP: ";
  ASCII(11);

  delay << "Go!" + (USER->get_Party(0)).get_Name() + "!";
  Continue();

  Display_Battle(USER, &Opponent);

  int USER_Choice, NPC_Choice;
  int Person_Defeated = -1;       //0  if NPC Defeated, 1 if USER defeated
  int Turn_Order;                 //0->NPC first, 1->User First
  int Automiss = -1, KO = -1;       //0 if NPC had a KO and 1 if USER had a KO

  
  do{
      USER_Choice = Turn_Choice(KO, USER, &Opponent);
      Turn_Order = Determine_Order(USER_Choice, NPC_Choice, KO, USER, &Opponent);

      switch(Turn_Order)
      {
        case 0: if(Person_Defeated == -1)
                {
                  Trainer_Turn(NPC_Choice, Turn_Order, Automiss, KO, USER, &Opponent);
                  KO_Check(Automiss, KO, Person_Defeated, USER, USER, &Opponent);
                }
                if (KO == 0)
                {
                  NPC_Choice = 2;
                }
                if(Person_Defeated == -1)
                {
                  Trainer_Turn(USER_Choice, Turn_Order, Automiss, KO, USER, &Opponent);
                  KO_Check(Automiss, KO, Person_Defeated, &Opponent, USER, &Opponent);
                }
                break;
        case 1: if (Person_Defeated == -1)
                {
                  Trainer_Turn(USER_Choice, Turn_Order, Automiss, KO, USER, &Opponent);
                  KO_Check(Automiss, KO, Person_Defeated, &Opponent, USER, &Opponent);
                }
                if (KO == 0)
                {
                  NPC_Choice = 2;
                }
                if(Person_Defeated == -1)
                {
                  Trainer_Turn(NPC_Choice, Turn_Order, Automiss, KO, USER, &Opponent);
                  KO_Check(Automiss, KO, Person_Defeated, USER, USER, &Opponent);
                }
                break;
      }
  }while(Person_Defeated == -1);

  if(Person_Defeated == 0)
  {
    system("clear");
    ASCII(9);
    delay << Opponent.get_Name() + ": " + Opponent.get_Exit();
    cin.ignore();
    Continue();

    for (int i = 0; i < USER->get_PartySize(); ++i)
    {
      USER->raise_Level(i, 3);
      USER->set_IdleStats(i);
    }

    POKEMON::NPCs_Defeated += 1;
    USER->set_Money(300);
  } else if (Person_Defeated == 1)
  {
    system("clear");
    ASCII(9);
    delay << "All of your Pokemon have been knocked out and have gone to the nearest Pokemon center...";
    cin.ignore();
    Continue();
  }

  cin.ignore();
  Continue();
}


void INTERACTION::Wild_Pokemon(PLAYER* USER)
{
  INTERACTION delay;
  system("clear");
  POKEMON Wild;

  for (int i = 0; i < USER->get_PartySize(); ++i)
  {
    USER->reset_BattleStats(i);
    USER->set_HPCurrent(i, 0);
  }

  Wild.reset_BattleStats();
  Wild.set_HPCurrent(0);

  system("clear");
  ASCII(12);
  cout << "\nWild " << Wild.get_Name() + " appeared!\n";
  cin.ignore();
  Continue();

  system("clear");
  ASCII(12);
  cout << left << setw(17) << "Wild Pokemon: " << Wild.get_Name();
  cout << left << setw(17) << "\nPokemon Level: " << Wild.get_Level();
  cout << left << setw(17) << "\nCurrent HP: " << Wild.get_HPCurrent();

  ASCII(10);
  cout << left << setw(17) << USER->get_Name() + ": ";
  cout << left << setw(17) << "\nCurrent Pokemon: ";
  cout << left << setw(17) << "\nPokemon Level: ";
  cout << left << setw(17) << "\nCurrent HP: ";
  ASCII(11);

  delay << "Go!" + (USER->get_Party(0)).get_Name() + "!";
  Continue();

  Display_Encounter(USER, &Wild);

  int USER_Choice, Wild_Choice;
  int Encounter_End = -1;           //0  if Wild Defeated, 1 if USER defeated, 2 if Wild Pokemon Caught
  int Turn_Order;                   //0->Wild first, 1->User First
  int Automiss = 0, KO = -1;        //0 if Wild had a KO and 1 if USER had a KO

  do{
      USER_Choice = Encounter_TurnChoice(KO, USER, &Wild);
      Turn_Order = Encounter_DetermineOrder(USER_Choice, Wild_Choice, KO, USER, &Wild);

      switch(Turn_Order)
      {
        case 0: if(Encounter_End == -1)
                {
                  Encounter_Turn(Wild_Choice, Turn_Order, Encounter_End, Automiss, KO, USER, &Wild);
                  Encounter_EndCheck(Automiss, KO, Turn_Order, Encounter_End, USER, &Wild);
                }
                if(Encounter_End == -1)
                {
                  Encounter_Turn(USER_Choice, Turn_Order, Encounter_End, Automiss, KO, USER, &Wild);
                  Encounter_EndCheck(Automiss, KO, Turn_Order, Encounter_End, USER, &Wild);
                }
                break;
        case 1: if (Encounter_End == -1)
                {
                  Encounter_Turn(USER_Choice, Turn_Order, Encounter_End, Automiss, KO, USER, &Wild);
                  Encounter_EndCheck(Automiss, KO, Turn_Order, Encounter_End, USER, &Wild);
                }
                if(Encounter_End == -1)
                {
                  Encounter_Turn(Wild_Choice, Turn_Order, Encounter_End, Automiss, KO, USER, &Wild);
                  Encounter_EndCheck(Automiss, KO, Turn_Order, Encounter_End, USER, &Wild);
                }
                break;
      }
  }while(Encounter_End == -1);

  if(Encounter_End == 0)
  {
    system("clear");
    ASCII(12);
    delay << Wild.get_Name() + " Feinted!";
    cin.ignore();
    Continue();

    for (int i = 0; i < USER->get_PartySize(); ++i)
    {
      USER->raise_Level(i, 1);
      USER->set_IdleStats(i);
    }

    POKEMON::NPCs_Defeated += 1;
  } else if (Encounter_End == 1)
  {
    system("clear");
    ASCII(12);
    delay << "All of your Pokemon have been knocked out and have gone to the nearest Pokemon center...";
    cin.ignore();
    Continue();
  } else if (Encounter_End == 3)
  {
    system("clear");
    ASCII(12);
    delay << "The Pokemon Ran Away... !!";
    cin.ignore();
    Continue();
  }

}
int INTERACTION::Turn_Choice(int KO, PLAYER* USER, NPC* Opponent)
{ 
  INTERACTION delay;
  int Choice, i, j;

  do
  {
    Display_Battle(USER, Opponent);

    Display_Menu(2);
    cout << "Enter Choice: ";
    cin >> Choice;

    if(Choice > 4 )
    {
      delay << "That isn't an option!";
      continue;
    }

    if(Choice == 4)
    {
      delay << "\nNo! You can't run from a trainer battle!";
      cin.ignore();
      Continue();
    }

      if (Choice == 1)
      {

        cout << " =========================\n";
        cout << "| (5) " << left << setw(20) << ((USER->get_Party(0)).get_Move(0)).get_Name() << "|\n";
        cout << "| (6) " << left << setw(20) << ((USER->get_Party(0)).get_Move(1)).get_Name() << "|\n";
        cout << "| (7) " << left << setw(20) << ((USER->get_Party(0)).get_Move(2)).get_Name() << "|\n";
        cout << "| (8) " << left << setw(20) << ((USER->get_Party(0)).get_Move(3)).get_Name() << "|\n";
        cout << "| (9) " << left << setw(20) << "Go back to options  |\n";
        cout << " =========================";

        cout << "\nEnter Choice: ";
        cin >> Choice;

        if(Choice < 5 || Choice > 9 )
        {
          delay << "That isn't an option!";
          Choice = 0;
          cin.ignore();
          Continue();
        }

        if(KO == 1)
        {
          delay << "Your Pokemon was knocked out! You need to switch Pokemon!";
          Choice = 0;
          cin.ignore(2);
          Continue();
        }
      }

    if (Choice == 2)
    {
      cout << " =========================\n";
      for(i = 0; i < USER->get_PartySize(); ++i)
      {
        cout << "| (" << (i + 10) << ") " << left << setw(20) << (USER->get_Party(i)).get_Name() << "|\n";
      }
      cout << "| (" << (i + 10) << ") " << left << setw(20) << "Go back to options  |\n";
      cout << " =========================";

      cout << "\nEnter Choice: ";
      cin >> Choice;

      if(Choice < 10 || Choice > (i+10) )
      {
        delay << "That isn't an option!";
        Choice == 0;
        cin.ignore();
        Continue;
      } else if (Choice == 10)
      {
        delay << "That Pokemon is already in Battle!";
        Choice = 0;
        cin.ignore();
        Continue();
      } else if (Choice < (i + 10) && USER->get_Party(Choice - 10).get_HPCurrent() == 0)
      {
        delay << (USER->get_Party(Choice - 10)).get_Name() << "'s HP is at 0!";
        Choice == 0;
        cin.ignore();
        Continue;
      }
    }

    if (Choice == 3)
    {
      cout << " =========================\n";
      for(j = 0; j < USER->get_BagSize(); ++i)
      {
        cout << "| (" << (j + 17) << ") " << left << setw(20) << (USER->get_Item(j)).get_Name() << "|\n";
      }
      cout << "| (" << (j + 17) << ") " << left << setw(20) << "Go back to options  |\n";
      cout << " =========================";

      cout << "\nEnter Choice: ";
      cin >> Choice;

      if(Choice < 17 || Choice > (j+17) )
      {
        delay << "That isn't an option!";
        cin.ignore();
        Continue;
        continue;
      }
    }

  }while(Choice <= 0 || Choice == 4 || Choice == 9 || Choice == 10 || Choice == (i+10) || Choice == (j+17) || (Choice > USER->get_BagSize() + 17));

  return Choice;
}

int INTERACTION::Encounter_TurnChoice(int KO, PLAYER* USER, POKEMON* Wild)
{ 
  INTERACTION delay;
  int Choice, i, j;

  do
  {
    Display_Encounter(USER, Wild);

    Display_Menu(2);
    cout << "Enter Choice: ";
    cin >> Choice;

    if(Choice > 4 )
    {
      delay << "That isn't an option!";
      continue;
    }

    if (Choice == 1)
    {

      cout << " =========================\n";
      cout << "| (5) " << left << setw(20) << ((USER->get_Party(0)).get_Move(0)).get_Name() << "|\n";
      cout << "| (6) " << left << setw(20) << ((USER->get_Party(0)).get_Move(1)).get_Name() << "|\n";
      cout << "| (7) " << left << setw(20) << ((USER->get_Party(0)).get_Move(2)).get_Name() << "|\n";
      cout << "| (8) " << left << setw(20) << ((USER->get_Party(0)).get_Move(3)).get_Name() << "|\n";
      cout << "| (9) " << left << setw(20) << "Go back to options  |\n";
      cout << " =========================";

      cout << "\nEnter Choice: ";
      cin >> Choice;

      if(Choice < 5 || Choice > 9 )
      {
        delay << "That isn't an option!";
        Choice = 0;
        cin.ignore();
        Continue;
        continue;
      }

      if(KO == 1)
      {
        delay << "Your Pokemon was knocked out! You need to switch Pokemon!";
        Choice = 0;
        cin.ignore(2);
        Continue();
      }
    }

    if (Choice == 2)
    {
      cout << " =========================\n";
      for(i = 0; i < USER->get_PartySize(); ++i)
      {
        cout << "| (" << (i + 10) << ") " << left << setw(20) << (USER->get_Party(i)).get_Name() << "|\n";
      }
      cout << "| (" << (i + 10) << ") " << left << setw(20) << "Go back to options  |\n";
      cout << " =========================";

      cout << "\nEnter Choice: ";
      cin >> Choice;

      if(Choice < 10 || Choice > (i+10))
      {
        delay << "That isn't an option!";
        cin.ignore();
        Continue;
        continue;
      } else if (Choice == 10)
      {
        delay << "That Pokemon is already in Battle!";
        cin.ignore();
        Continue();
      } else if (Choice < (i + 10) && USER->get_Party(i).get_HPCurrent() == 0)
      {
        delay << (USER->get_Party(i)).get_Name() << "'s HP is at 0!";
        cin.ignore();
        Continue;
      }
    }

    if (Choice == 3)
    {
      cout << " =========================\n";
      for(j = 0; j < USER->get_BagSize(); ++i)
      {
        cout << "| (" << (j + 17) << ") " << left << setw(20) << (USER->get_Item(i)).get_Name() << "|\n";
      }
      cout << "| (" << (j + 17) << ") " << left << setw(20) << "Go back to options  |\n";
      cout << " =========================";

      cout << "\nEnter Choice: ";
      cin >> Choice;

      if(Choice < 17 || Choice > (j+17) )
      {
        delay << "That isn't an option!";
        cin.ignore();
        Continue;
        continue;
      }
    }

  }while(Choice <= 0 || Choice == 9 || Choice == 10 || Choice == (i+10) || Choice == (j+17) || (Choice > USER->get_BagSize() + 17));
  return Choice;
}

int INTERACTION::Determine_Order(int USER_Choice, int& NPC_Choice, int KO, PLAYER* USER, NPC* Opponent)
{
  int USER_MoveNumber, NPC_MoveNumber;
  int USER_MovePriority = 0, NPC_MovePriority = 0;
  int USER_PokeSpeed = 0, NPC_PokeSpeed = 0;

  int elapsed_seconds = time(nullptr);
  srand(elapsed_seconds);

  int RandomNum = (rand() % 100) + 1;
  cout << "This is what KO is when I randomly make the Opponent Choice: " << KO << endl;
  if (KO != 0)
  {
    switch(RandomNum)
    {
      case 1 ... 22: NPC_Choice = 5; break;
      case 23 ... 44: NPC_Choice = 6; break;
      case 45 ... 66: NPC_Choice = 7; break;
      case 67 ... 88: NPC_Choice = 8; break;
      case 89 ... 100: NPC_Choice = 2; break;
    }
  } else {
    NPC_Choice = 2;
  }

  if (USER_Choice == 2 || USER_Choice == 3)
    return 1;

  if (USER_Choice != 2 && USER_Choice != 3 && NPC_Choice == 2)
    return 0;

  if(USER_Choice > 4 && USER_Choice < 9)
  {
    USER_MoveNumber = ((USER->get_Party(0)).get_Move(USER_Choice - 5)).get_MoveNumber();
    if (USER_MoveNumber == 46)
    {
      USER_MovePriority = 1;
    }else if(USER_MoveNumber == 10)
    {
      USER_MovePriority = -1;
    } else { 
      USER_MovePriority = 0;
    }
  }

  if(NPC_Choice > 4 && NPC_Choice < 9)
  {
    NPC_MoveNumber = ((Opponent->get_Party(0)).get_Move(NPC_Choice - 5)).get_MoveNumber();
    if (NPC_MoveNumber == 46)
    {
      NPC_MovePriority = 1;
    }else if(NPC_MoveNumber == 10)
    {
      NPC_MovePriority = -1;
    }else{ 
      NPC_MovePriority = 0;
    }
  }

  if (USER_MovePriority > NPC_MovePriority)
  {
    return 1;
  } else if (USER_MovePriority < NPC_MovePriority)
  {
    return 0;
  } else if (USER_MovePriority == NPC_MovePriority)
  {
    USER_PokeSpeed = (USER->get_Party(0)).get_IdleStat("SPD");
    NPC_PokeSpeed = (Opponent->get_Party(0)).get_IdleStat("SPD");

    if (USER_PokeSpeed > NPC_PokeSpeed)
    {
      return 1;
    } else if (USER_PokeSpeed < NPC_PokeSpeed)
    {
      return 0;
    } else if (USER_PokeSpeed == NPC_PokeSpeed)
    {
      int elapsed_seconds = time(nullptr);
      srand(elapsed_seconds);

      return (rand() % 2);
    }
  }

  cout << "This statement in the Determine Order Function should never be reached.";
  return 1;
}

int INTERACTION::Encounter_DetermineOrder(int USER_Choice, int& Wild_Choice, int KO, PLAYER* USER, POKEMON* Wild)
{
  int USER_MoveNumber, Wild_MoveNumber;
  int USER_MovePriority, Wild_MovePriority;
  int USER_PokeSpeed, Wild_PokeSpeed;

  int elapsed_seconds = time(nullptr);
  srand(elapsed_seconds);

  int RandomNum = (rand() % 100) + 1;

  switch(RandomNum)
  {
    case 1 ... 22: Wild_Choice = 5; break;
    case 23 ... 44: Wild_Choice = 6; break;
    case 45 ... 66: Wild_Choice = 7; break;
    case 67 ... 88: Wild_Choice = 8; break;
    case 89 ... 100: Wild_Choice = 2; break;
  }

  if (USER_Choice == 2 || USER_Choice == 3 || USER_Choice == 4)
    return 1;

  if (Wild_Choice == 2)
    return 0;

  USER_MoveNumber = ((USER->get_Party(0)).get_Move(USER_Choice - 5)).get_MoveNumber();
  if (USER_MoveNumber == 46)
  {
    USER_MovePriority = 1;
  }else if(USER_MoveNumber == 10)
  {
    USER_MovePriority = -1;
  } else { 
    USER_MovePriority = 0;
  }

  Wild_MoveNumber = (Wild->get_Move(Wild_Choice - 5)).get_MoveNumber();
  if (Wild_MoveNumber == 46)
  {
    Wild_MovePriority = 1;
  }else if(Wild_MoveNumber == 10)
  {
    Wild_MovePriority = -1;
  }else{ 
    Wild_MovePriority = 0;
  }
  
  if (USER_MovePriority > Wild_MovePriority)
  {
    return 1;
  } else if (USER_MovePriority < Wild_MovePriority)
  {
    return 0;
  } else if (USER_MovePriority == Wild_MovePriority)
  {
    USER_PokeSpeed = (USER->get_Party(0)).get_IdleStat("SPD");
    Wild_PokeSpeed = Wild->get_IdleStat("SPD");

    if (USER_PokeSpeed > Wild_PokeSpeed)
    {
      return 1;
    } else if (USER_PokeSpeed < Wild_PokeSpeed)
    {
      return 0;
    } else if (USER_PokeSpeed == Wild_PokeSpeed)
    {
      int elapsed_seconds = time(nullptr);
      srand(elapsed_seconds);

      return (rand() % 2);
    }
  }

  cout << "This statement in the Determine Order Function should never be reached.";
  return 1;
}

void INTERACTION::Trainer_Turn(int Turn_Choice, int& Turn_Order, int& Automiss, int& KO, PLAYER* USER, NPC* Opponent)
{
  INTERACTION delay;
  string Turn_Dialogue = "";
  int Random_Miss, elapsed_seconds;
  //int Crit_Hit_Rate, Critical_Hit; Not used in this version
  int Damage_Inflicted;
  int Level, Attack, Power, Defense;
  int Item_Choice;

  cout << "Turn Choice is: " << Turn_Choice << endl;
  cout << "This is KO: " << KO << endl;

  if (Turn_Order == 0 || Turn_Order == 2)
  {
    switch(Turn_Choice)
    {
      case 5 ... 8: Turn_Dialogue = "Enemy " + (Opponent->get_Party(0)).get_Name() + " used " + (Opponent->get_Party(0)).get_Move(Turn_Choice - 5).get_Name() + "!"; break;
      case 2: elapsed_seconds = time(nullptr);
              srand(elapsed_seconds);
              Turn_Choice = (rand() % Opponent->get_PartySize()) + 11;
      
              Turn_Dialogue = Opponent->get_Name() + " took back " + (Opponent->get_Party(0)).get_Name() + " and sent out " + (Opponent->get_Party(Turn_Choice - 11)).get_Name() + "!"; break;    
    }

    
    Display_Battle(USER, Opponent);
    delay << Turn_Dialogue;
    Continue();

    if (Turn_Choice > 10 && Turn_Choice < 17)
    {
      Opponent->Switch_Pokemon(0,Turn_Choice - 11);
      Display_Battle(USER, Opponent);
    
    } else if (Turn_Choice > 4 && Turn_Choice < 9)
    {

      //Determine if it missed
      elapsed_seconds = time(nullptr);
      srand(elapsed_seconds);
      Random_Miss = (rand() % 100) + 1;

      if (Automiss == 0 || (Random_Miss > (Opponent->get_Party(0)).get_Move(Turn_Choice - 5).get_ACC() && (Opponent->get_Party(0)).get_Move(Turn_Choice - 5).get_ACC() != -1))
      {
        Display_Battle(USER, Opponent);
        delay << "Enemy " + (Opponent->get_Party(0)).get_Name() + "'s attack missed!";
        Continue();

      } else {
        
        Level = Opponent->get_Party(0).get_Level();
        Attack = Opponent->get_Party(0).get_BattleStat("ATK");
        Defense = USER->get_Party(0).get_BattleStat("DEF");
        Power = Opponent->get_Party(0).get_Move(Turn_Choice - 5).get_DMG();

        Damage_Inflicted = floor(floor(floor(2 * Level / 5 + 2) * Attack * Power / Defense) / 50) + 2;
        
        if (Damage_Inflicted > (USER->get_Party(0)).get_HPCurrent())
        {
          Damage_Inflicted = (USER->get_Party(0)).get_HPCurrent();
        }
        
        USER->set_HPCurrent(0, (Damage_Inflicted * -1));

        Display_Battle(USER, Opponent);
        cout << "You took " << Damage_Inflicted << " Damage!";
        Continue();
      }  
    }

    if (KO == 0)
    {
      KO = -1;
    }
    if (Automiss == 0)
    {
      Automiss = -1;
    }
  }

  if (Turn_Order == 1 || Turn_Order == 3)
  {
    switch(Turn_Choice)
    {
      case 3: Turn_Dialogue = "You used an *Item_Name*!"; break;
      case 5 ... 8: Turn_Dialogue = (USER->get_Party(0)).get_Name() + " used " + (USER->get_Party(0)).get_Move(Turn_Choice - 5).get_Name() + "!"; break;
      case 11 ... 15: Turn_Dialogue = "Come back " + (USER->get_Party(0)).get_Name() + "!"; break;
    }

    Display_Battle(USER, Opponent);
    delay << Turn_Dialogue;
    cin.ignore();
    Continue();

    //Begin Alteration Here
    if (Turn_Choice > 10 && Turn_Choice < 17)
    {
      USER->Switch_Pokemon(0,Turn_Choice - 10);
      delay << "Go! " + (USER->get_Party(0)).get_Name() + "!";
      Display_Battle(USER, Opponent);
      Continue();

    } else if (Turn_Choice == 3)
    {
      Display_Battle(USER, Opponent);
      delay << "This is the effects of the Item!";
      Continue();

    } else if (Turn_Choice > 4 && Turn_Choice < 9)
    {
      //Determine if it missed
      int elapsed_seconds = time(nullptr);
      srand(elapsed_seconds);
      Random_Miss = (rand() % 100) + 1;

      if (Automiss == 1 || (Random_Miss >= (USER->get_Party(0)).get_Move(Turn_Choice - 5).get_ACC() && (USER->get_Party(0)).get_Move(Turn_Choice - 5).get_ACC() != -1))
      {
        Display_Battle(USER, Opponent);
        delay << (USER->get_Party(0)).get_Name() + "'s attack missed!";
        Continue();

      } else {
        
        Level = USER->get_Party(0).get_Level();
        Attack = USER->get_Party(0).get_BattleStat("ATK");
        Defense = Opponent->get_Party(0).get_BattleStat("DEF");
        Power = USER->get_Party(0).get_Move(Turn_Choice - 5).get_DMG();

        Damage_Inflicted = floor(floor(floor(2 * Level / 5 + 2) * Attack * Power / Defense) / 50) + 2;
        
        if (Damage_Inflicted > (Opponent->get_Party(0)).get_HPCurrent())
        {
          Damage_Inflicted = (Opponent->get_Party(0)).get_HPCurrent();
        }

        Opponent->set_HPCurrent(0, (Damage_Inflicted * -1));

        Display_Battle(USER, Opponent);
        cout << "Enemy " << (Opponent->get_Party(0)).get_Name() << " took " << Damage_Inflicted << " damage!";
        Continue();
      }
      
    }  
    
    if (KO == 1)
    {
      KO = -1;
    }
    if (Automiss == 1)
    {
      Automiss = -1;
    }
  }

  Turn_Order += 1;
}

void INTERACTION::Encounter_Turn(int Turn_Choice, int& Turn_Order, int& Encounter_End, int& Automiss, int& KO, PLAYER* USER, POKEMON* Wild)
{
  INTERACTION delay;
  string Turn_Dialogue = "";
  int Random_Miss, elapsed_seconds;
  //int Crit_Hit_Rate, Critical_Hit; Not used in this version
  int Damage_Inflicted;
  int Level, Attack, Power, Defense, Item_HP;

  if (Turn_Order == 0 || Turn_Order == 2)
  {
    switch(Turn_Choice)
    {
      case 5 ... 8: Turn_Dialogue = "Wild " + Wild->get_Name() + " used " + Wild->get_Move(Turn_Choice - 5).get_Name() + "!"; break;
      case 2: Wild->get_Name() + " ran away!";  
    }

    
    Display_Encounter(USER, Wild);
    delay << Turn_Dialogue;
    Continue();

    if (Turn_Choice == 2)
    {
      Encounter_End = 3;
    } else if (Turn_Choice > 4 && Turn_Choice < 9)
    {

      //Determine if it missed
      elapsed_seconds = time(nullptr);
      srand(elapsed_seconds);
      Random_Miss = (rand() % 100) + 1;

      if (Automiss == 0 || (Random_Miss > Wild->get_Move(Turn_Choice - 5).get_ACC() && Wild->get_Move(Turn_Choice - 5).get_ACC() != -1))
      {
        Display_Encounter(USER, Wild);
        delay << "Wild " + Wild->get_Name() + "'s attack missed!";
        Continue();
        
      } else {
        
        Level = Wild->get_Level();
        Attack = Wild->get_BattleStat("ATK");
        Defense = USER->get_Party(0).get_BattleStat("DEF");
        Power = Wild->get_Move(Turn_Choice - 5).get_DMG();

        Damage_Inflicted = floor(floor(floor(2 * Level / 5 + 2) * Attack * Power / Defense) / 50) + 2;
        
        if (Damage_Inflicted > (USER->get_Party(0)).get_HPCurrent())
        {
          Damage_Inflicted = (USER->get_Party(0)).get_HPCurrent();
        }
        
        USER->set_HPCurrent(0, (Damage_Inflicted * -1));

        Display_Encounter(USER, Wild);
        cout << "You took " << Damage_Inflicted << " Damage!";
        Continue();
      }  
    }

    if (Automiss == 0)
    {
      Automiss = -1;
    }
  }

  if (Turn_Order == 1 || Turn_Order == 3)
  {
    switch(Turn_Choice)
    {
      case 3: Turn_Dialogue = "You used an *Item_Name*!"; break;
      case 5 ... 8: Turn_Dialogue = (USER->get_Party(0)).get_Name() + " used " + (USER->get_Party(0)).get_Move(Turn_Choice - 5).get_Name() + "!"; break;
      case 11 ... 15: Turn_Dialogue = "Come back " + (USER->get_Party(0)).get_Name() + "!"; break;
    }

    Display_Encounter(USER, Wild);
    delay << Turn_Dialogue;
    cin.ignore();
    Continue();

    //Begin Alteration Here
    if (Turn_Choice > 10 && Turn_Choice < 16)
    {
      delay << "Go! " + (USER->get_Party(0)).get_Name() + "!";
      USER->Switch_Pokemon(0,Turn_Choice);
      Display_Encounter(USER, Wild);
      Continue();

    } else if (Turn_Choice == 3)
    {
      Display_Encounter(USER, Wild);
      delay << "200 HP was added!";
      Continue();

    } else if (Turn_Choice > 4 && Turn_Choice < 9)
    {
      //Determine if it missed
      int elapsed_seconds = time(nullptr);
      srand(elapsed_seconds);
      Random_Miss = (rand() % 100) + 1;

      if (Automiss == 1 || (Random_Miss >= (USER->get_Party(0)).get_Move(Turn_Choice - 5).get_ACC() && (USER->get_Party(0)).get_Move(Turn_Choice - 5).get_ACC() != -1))
      {
        Display_Encounter(USER, Wild);
        delay << (USER->get_Party(0)).get_Name() + "'s attack missed!";
        Continue();

      } else {
        
        Level = USER->get_Party(0).get_Level();
        Attack = USER->get_Party(0).get_BattleStat("ATK");
        Defense = Wild->get_BattleStat("DEF");
        Power = USER->get_Party(0).get_Move(Turn_Choice - 5).get_DMG();

        Damage_Inflicted = floor(floor(floor(2 * Level / 5 + 2) * Attack * Power / Defense) / 50) + 2;
        
        if (Damage_Inflicted > Wild->get_HPCurrent())
        {
          Damage_Inflicted = Wild->get_HPCurrent();
        }

        Wild->set_HPCurrent(Damage_Inflicted * -1);

        Display_Encounter(USER, Wild);
        cout << "Enemy " << Wild->get_Name() << " took " << Damage_Inflicted << " damage!";
        Continue();
      }
      
    }  
    
    if (KO == 1)
    {
      KO = -1;
    }
    if (Automiss == 1)
    {
      Automiss = -1;
    }
  }

  Turn_Order += 1;
}

void INTERACTION::KO_Check(int& Automiss, int& KO, int& Person_Defeated, PERSON* Current_Turn, PLAYER* USER, NPC* Opponent)
{
  if(Current_Turn->get_Party(0).get_HPCurrent() <= 0)
  {
    if(Current_Turn->get_Name() == Opponent->get_Name())
    {
      KO = 0;
      Automiss = 1;
    } else if (Current_Turn->get_Name() == USER->get_Name())
    {
      KO = 1;
      Automiss = 0;
    }
  }

  if(Current_Turn->get_Name() == Opponent->get_Name())
  {
    Person_Defeated = 0;
    for(int i = 0; i < Current_Turn->get_PartySize(); ++i)
    {
      if(Current_Turn->get_Party(i).get_HPCurrent() != 0)
      {
        Person_Defeated = -1;
      }
    }

  } else if (Current_Turn->get_Name() == USER->get_Name())
  {
    Person_Defeated = 1;
    for(int i = 0; i < Current_Turn->get_PartySize(); ++i)
    {
      if(Current_Turn->get_Party(i).get_HPCurrent() != 0)
      {
        Person_Defeated = -1;
      }
    }
  }
}

void INTERACTION::Encounter_EndCheck(int& Automiss, int& KO, int& Turn_Order, int& Encounter_End, PLAYER* USER, POKEMON* Wild)
{
  if(Turn_Order == 1 || Turn_Order== 3)
  {
    if(Wild->get_HPCurrent() <= 0)
    {
      Encounter_End = 0;
    }
    Automiss = 1;

  } else if (Turn_Order == 2 || Turn_Order == 4)
  {
    if(USER->get_Party(0).get_HPCurrent() <= 0)
    {
      KO = 1;
    }
    Automiss = 1;

    Encounter_End = 1;
    for(int i = 0; i < USER->get_PartySize(); ++i)
    {
      if(USER->get_Party(i).get_HPCurrent() != 0)
      {
        Encounter_End = -1;
      }
    }
  }
}

void INTERACTION::Item_Found(PLAYER* USER)
{
  INTERACTION delay;
  ITEM New;
  USER->add_Bag(New);

  system("clear");
  ASCII(13);
  delay << "\n" + USER->get_Name() + " found " + New.get_Name() + "!";
  cin.ignore();
  Continue();
}

void INTERACTION::Pokedex()
{
  system("clear");
  ASCII(14);
  cout << endl;
  POKEMON::get_Seen();
  cin.ignore();
  Continue();
}

void INTERACTION::Town(PLAYER* USER)
{
  INTERACTION delay;
  int Choice, Item_Buy, Item_Sell, i;

  do
  {
    system("clear");
    ASCII(15);
    Display_Menu(3);
    delay << "\nYou have run into a local town! Choose from the above menu: " << "Enter choice here (1,2,3): \n";
    cin >> Choice;
    cin.ignore();

    if (Choice == 1)
    {
        do
        {
          system("clear");
          ASCII(8);
          Display_Menu(4);
          delay << "\nYou have entered the Pokecenter! Pick an option from the above menu!" << "Enter choice here (4,5): \n";
          cin >> Choice;
          cin.ignore();

          if (Choice == 4)
          {
            delay << "You healed your Pokemon! They feel great!\n";
            Continue();
          }

        } while (Choice != 5);

    } else if (Choice  == 2)
    {
        do
        {
          system("clear");

          ASCII(16);
          Display_Menu(5);
          cout << "\nYou have entered the PokeMart! Pick an option from the above menu!";
          cout << "\nYou curently have " << USER->get_Money() << " pokemon dollars!";
          delay << "\n\nEnter choice here (6,7,8): ";

          cin >> Choice;
          cin.ignore();

          if (Choice == 6)
          {
            do {
              
              system("clear");
              ASCII(16);
              cout << "\n ================================\n";
              for(int i = 0; i < 17; ++i)
              {
                ITEM Temp(i);
                if(i < 11)
                  cout << "| (" << (i + 1) << ")  " << left << setw(20) << Temp.get_Name() << right << setw(5) << Temp.get_Buy() << "   |\n";
                if(i > 10)
                  cout << "| (" << (i + 1) << ") " << left << setw(20) << Temp.get_Name() << right << setw(5) << Temp.get_Buy() << "   |\n";
              }
              cout << " ================================\n";

              cout << "\n =========================\n";
              cout << "| (18) " << left << setw(20) << "Exit Selling Pane" << "|\n";
              cout << " =========================\n";

              if (USER->get_Money() == 0)
              {
                delay << "\nYou have to have money to buy something !!";
                cin.ignore();
                Continue();
              } else {

                delay << "Pick an option from the above menu!" << "Enter choice here (1,2,3): \n";

                cin >> Item_Buy;
                if (Item_Buy < 18 && Item_Buy > 0 && USER->get_Money() >= USER->get_Item(Item_Sell - 1).get_Buy())
                {
                  USER->set_Money(USER->get_Item(Item_Buy - 1).get_Buy());
                  USER->add_Bag(Item_Buy - 1);
                  cout << "You bought " << USER->get_Item(Item_Sell - 1).get_Name() << " for " << USER->get_Item(Item_Sell - 1).get_Buy() << " pokemon dollars!";
                  cin.ignore();
                  Continue();
                } else if (USER->get_Money() < USER->get_Item(Item_Sell - 1).get_Buy())
                {
                  delay << "You don't have enough money for that !!";
                }
              }
            }while(USER->get_Money() != 0 && Item_Buy != 18);
          }

          if (Choice == 7)
          {
            do {

              system("clear");
              ASCII(16);
              Bag(USER);
              if (USER->get_BagSize() == 0)
              {
                delay << "\nYou can't sell air !!";
              } else {

                cout << "\n =========================\n";
                cout << "| (" << (USER->get_BagSize() + 1) << ") " << left << setw(20) << "Exit Selling Pane" << "|\n";
                cout << " =========================\n";

                delay << "Pick an option from the above menu!" << "Enter choice here (1,2,3): \n";

                cin >> Item_Sell;
                if (Item_Sell < (USER->get_BagSize() + 1) && Item_Sell > 0)
                {
                  USER->set_Money(USER->get_Item(Item_Sell - 1).get_Sell());
                  USER->remove_Bag(Item_Sell - 1);
                  cout << "You sold " << USER->get_Item(Item_Sell - 1).get_Name() << " for " << USER->get_Item(Item_Sell - 1).get_Sell() << " pokemon dollars!";
                  cin.ignore();
                  Continue();
                }
              }
            }while(USER->get_BagSize() != 0 && Item_Sell != (USER->get_BagSize() + 1));
          }

        } while (Choice != 8);
    }
  } while (Choice != 3);

  Continue();
}

void INTERACTION::Party(PLAYER* USER)
{
  INTERACTION delay;
  system("clear");
  ASCII(17);

  if (USER->get_PartySize() == 0)
  {
    delay << "Your party is empty !!";
  } else {

    cout << " =========================\n";
    for(int i = 0; i < USER->get_PartySize(); ++i)
    {
      cout << "| (" << (i + 1) << ") " << left << setw(20) << (USER->get_Party(i)).get_Name() << "|\n";
    }
    cout << " =========================";
  }

  cin.ignore();
  Continue();
}

void INTERACTION::Bag(PLAYER* USER)
{
  INTERACTION delay;

  if (USER->get_BagSize() == 0)
  {
    delay << "Your bag is empty !!";
  } else {

    cout << " =========================\n";
    for(int i = 0; i < USER->get_BagSize(); ++i)
    {
      cout << "| (" << (i + 1) << ") " << left << setw(20) << (USER->get_Item(i)).get_Name() << "|\n";
    }
    cout << " =========================";
    
  }
}

void INTERACTION::Display_Battle(PLAYER* USER, NPC* Opponent)
{
  system("clear");
  ASCII(9);
  cout << left << setw(17) << "Opponent: " << Opponent->get_Name();
  cout << left << setw(17) << "\nCurrent Pokemon: " << (Opponent->get_Party(0)).get_Name();
  cout << left << setw(17) << "\nPokemon Level: " << (Opponent->get_Party(0)).get_Level();
  cout << left << setw(17) << "\nCurrent HP: " << (Opponent->get_Party(0)).get_HPCurrent();

  ASCII(10);
  cout << left << setw(17) << USER->get_Name() + ": ";
  cout << left << setw(17) << "\nCurrent Pokemon: " << (USER->get_Party(0)).get_Name();
  cout << left << setw(17) << "\nPokemon Level: " << (USER->get_Party(0)).get_Level();
  cout << left << setw(17) << "\nCurrent HP: " << (USER->get_Party(0)).get_HPCurrent();
  ASCII(11);
}

void INTERACTION::Display_Encounter(PLAYER* USER, POKEMON* Wild)
{
  system("clear");
  ASCII(12);
  cout << left << setw(17) << "Wild Pokemon: " << Wild->get_Name();
  cout << left << setw(17) << "\nPokemon Level: " << Wild->get_Level();
  cout << left << setw(17) << "\nCurrent HP: " << Wild->get_HPCurrent();

  ASCII(10);
  cout << left << setw(17) << USER->get_Name() + ": ";
  cout << left << setw(17) << "\nCurrent Pokemon: " << (USER->get_Party(0)).get_Name();
  cout << left << setw(17) << "\nPokemon Level: " << (USER->get_Party(0)).get_Level();
  cout << left << setw(17) << "\nCurrent HP: " << (USER->get_Party(0)).get_HPCurrent();
  ASCII(11);
}

void INTERACTION::Display_Menu(int choice)
{
switch(choice)
{

case 1:
cout << R"(
 ---------------
|  Options      |
|               |
| (1) Walk      |
| (2) Bag       |
| (3) Party     |
| (4) Pokédex   |
|               |
 ---------------
)" << "\n\n";break;

case 2:
cout << R"(
 ===========================================================
| (1) Fight       (2) Pokemon       (3) Item        (4) Run |
 ===========================================================

)" << "\n\n";break;

case 3:
cout << R"(
 -----------------
|  Options        |
|                 |
| (1) Pokecenter  |
| (2) Pokemart    |
| (3) Leave Town  |
|                 |
 -----------------
)" << "\n\n";break;

case 4:
cout << R"(
 -----------------------
|  Options              |
|                       |
| (4) Heal All Pokemon  |
| (5) Leave PokeCenter  |
|                       |
 -----------------------
)" << "\n\n";break;

case 5:
cout << R"(
 -----------------
|  Options        |
|                 |
| (6) Buy         |
| (7) Sell        |
| (8) Leave Mart  |
|                 |
 -----------------
)" << "\n\n";break;

  }
}

void INTERACTION::ASCII(int num)
{
  switch(num)
  {

case 1:
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
)" << "\n\n";break;

case 2:
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
)" << "\n\n";break;


case 3:
cout << R"(
 █▀▀▄           ▄▀▀█
 █░░░▀▄ ▄▄▄▄▄ ▄▀░░░█
  ▀▄░░░▀░░░░░▀░░░▄▀
    ▌░▄▄░░░▄▄░▐▀▀
   ▐░░█▄░░░▄█░░▌▄▄▀▀▀▀█
   ▌▄▄▀▀░▄░▀▀▄▄▐░░░░░░█
▄▀▀▐▀▀░▄▄▄▄▄░▀▀▌▄▄▄░░░█
█░░░▀▄░█░░░█░▄▀░░░░█▀▀▀
 ▀▄░░▀░░▀▀▀░░▀░░░▄█▀
   █░░░░░░░░░░░▄▀▄░▀▄
   █░░░░░░░░░▄▀█░░█░░█
   █░░░░░░░░░░░█▄█░░▄▀
   █░░░░░░░░░░░████▀
   ▀▄▄▀▀▄▄▀▀▄▄▄█▀
)" << "\n\n";break;

case 4:
cout << R"(

       `.:+ossysso+:.`                     `.:+ossssso/-`                     `.:+ossysso+:.`
     .+yhhyysssssyyhhyo-`               `-ohhhyyssssyyyhhs/`                -oyhhyysssssyyhhy+.
   .odyysssssssssssssyyds.             -ydysssssssossssssyhh+`            .sdyyssssssossssssyydo.
  -dhyssssssosssossssssshd:`          +dyssssssoo++oossssssydy.          :dhsssssss+++osssssssyhd-`
 .dhsssssssssssssssssssssyd-`        /myssssssss+ss+osssssssydy`        -dyssssssssooo+osssssssshd.
 +myyssssssssyyyysssssssyymo`        hdysssssssssyysssssssssyhm-`       smyyssssssssyysssssssssyym+`
 ommdhhyysyhdhhhdhysyyyhdmmy`        mmmdhyyysyhdhhhdyssyyhddmm:`       ymmdhyyysyhdhhhdhysyyyhdmmo`
 :m:+yhmmddm+.`.+mddmmdyo:d/`        yy/shdmddmh/.`-smddmmhy++m.`       +d:oydmmddm+.`.+mddmmdy+:m:`
 `ss` `.-/sm+.`.+my/:.`  oy.         .d: `.-/+dh/``.smo/:.` `h+`        `yo  `.:/ym+.`.+ms/:.` `ss`
  `oy-     /syyyy/`    .ss.`          -y+`    .oyyyys:     :h/`          `ss.    `/yyyys/     -yo.
   `-ss:`    ```    `:ss:`             `/y+.    ````    `/yo-`            `:ss:`    ```    `:ss-`
     `./oso/:---:/oss+-`                 `-+so+:----:/oso/.`                `./sso/:---:/oso/.`
        ```-:://:-.``                       ``.::///:-```                      ```-://::-```

            (1)                                  (2)                                (3)
)" << "\n\n";break;

case 5:
cout << R"(
     ███
    █░░░█
    █▒░▒███
  ██▒░▒░▒░▒██
 █▒▒▒░▒░▒▒░▒▒█░░█
█▒▒▒░▒▒░▒▒▒░▒███░█
█▒▒░▒▒▒▒░▒▒██▒░░░█
█▒▒░▒▒▒▒░▒█▒▒░░░░█
 █▒░▒▒▒███▒░▒▒░▒░░█
█▒██░▒▒█░░░░░░░░░▒██
█▒▒▒███▒█░░░░▒░░░▒██
█▒▒█▒▒▒▒▒░░██░▒░░░░█
 ███▒█▒█▒░▒▒▓█░░░░▒█
    █▒▒▒█▒░▒▓█░░░▒█
    █▒▒▒▒█▒▒▒▒▒▒██
    █░▒░████████
     ███
)" << "\n\n";break;

case 6:
cout << R"(
   █         ████
  █░█       ██▓▓▓█
 █░░█      ██▓▓▓▓▓█
 █░░█      █▓▓▓▓▓▓█
█░▓░░█    ██▓▓▓▓▓▓▓█
█░▓▓░█    ██▓▓█░▓▓▓▓█
█░▓▓░█   ████▓██▓▓▓▓█
 ██▓█    ████▓██▓▓▓▓█
  ███   ██████▓▓▓▓▓█
  ████ ████████████
   ████████▓█████
   █████████▓▒▒█
    ██████▓▓▒▒▒█
     ██████▒▒▒█▓█
      █████▒▒███
       ██████
       █░█░█
        ███
)" << "\n\n";break;

case 7:
cout << R"(
  ███         ████
 █░░░█      ██░░░░█
█▒▒░░░█   ██░░░░░░░█
█▒█▒░░█ ████░░░░░░░█
█▒▒█▒░▒████▒░░░░░░░▓█
 █▒█▒▒████▓▒░░█░░░░░█
 ███▒████▓▒▒░▓█░░░▒█
    █████▓█▒▒▒▓█░▒▒█
     ███▓░░██▒▒▒▒██
     ███▓░░░░████░█
     ███▓█░░░█▒▒██
     ███▓████▒▒█
      █▓█▒▒▒▒▒█░█
      █▓█░▒▒████
       ██░███
        █░░░█
        ███
)" << "\n\n";break;

case 8:
cout << R"(
    ____        __                        __           
   / __ \____  / /_____  ________  ____  / /____  _____
  / /_/ / __ \/ //_/ _ \/ ___/ _ \/ __ \/ __/ _ \/ ___/
 / ____/ /_/ / ,< /  __/ /__/  __/ / / / /_/  __/ /    
/_/    \____/_/|_|\___/\___/\___/_/ /_/\__/\___/_/  
__________________________________________________________
__________________________________________________________   
                                                      
)" << "\n\n";break;

case 9:
cout << R"(
    ____        __  __  __
   / __ )____ _/ /_/ /_/ /__
  / __  / __ `/ __/ __/ / _ \
 / /_/ / /_/ / /_/ /_/ /  __/
/_____/\__,_/\__/\__/_/\___/
__________________________________________________________
__________________________________________________________
  )" << "\n\n";break;
  
case 10:
cout << R"(
----------------------------------------------------------
)";break;

case 11:
cout << R"(
__________________________________________________________
)";break;

case 12:
cout << R"(
 _       ___ __    __   ______                             __           
| |     / (_) /___/ /  / ____/___  _________  __  ______  / /____  _____
| | /| / / / / __  /  / __/ / __ \/ ___/ __ \/ / / / __ \/ __/ _ \/ ___/
| |/ |/ / / / /_/ /  / /___/ / / / /__/ /_/ / /_/ / / / / /_/  __/ /    
|__/|__/_/_/\__,_/  /_____/_/ /_/\___/\____/\__,_/_/ /_/\__/\___/_/  
__________________________________________________________________________________________
__________________________________________________________________________________________
)";break;

case 13:
cout << R"(
    __________________  ___   __________  __  ___   ______     __
   /  _/_  __/ ____/  |/  /  / ____/ __ \/ / / / | / / __ \   / /
   / /  / / / __/ / /|_/ /  / /_  / / / / / / /  |/ / / / /  / / 
 _/ /  / / / /___/ /  / /  / __/ / /_/ / /_/ / /|  / /_/ /  /_/  
/___/ /_/ /_____/_/  /_/  /_/    \____/\____/_/ |_/_____/  (_)
__________________________________________________________________________________________
__________________________________________________________________________________________   
)";break;                                                       

case 14:
cout << R"(
    ____  ____  __ __ __________  _______  __
   / __ \/ __ \/ //_// ____/ __ \/ ____/ |/ /
  / /_/ / / / / ,<  / __/ / / / / __/  |   / 
 / ____/ /_/ / /| |/ /___/ /_/ / /___ /   |  
/_/    \____/_/ |_/_____/_____/_____//_/|_|  
________________________________________________________
________________________________________________________  
)";break;

case 15:
cout << R"(
                                    +              #####
                                   / \
 _____        _____     __________/ o \/\_________      _________
|o o o|_______|    |___|               | | # # #  |____|o o o o  | /\
|o o o|  * * *|: ::|. .|               |o| # # #  |. . |o o o o  |//\\
|o o o|* * *  |::  |. .| []  []  []  []|o| # # #  |. . |o o o o  |((|))
|o o o|**  ** |:  :|. .| []  []  []    |o| # # #  |. . |o o o o  |((|))
|_[]__|__[]___|_||_|__<|____________;;_|_|___/\___|_.|_|____[]___|  |
______________________________________________________________________________
______________________________________________________________________________

)";break;

case 16:
cout << R"(
    ____        __        __  ___           __ 
   / __ \____  / /_____  /  |/  /___ ______/ /_
  / /_/ / __ \/ //_/ _ \/ /|_/ / __ `/ ___/ __/
 / ____/ /_/ / ,< /  __/ /  / / /_/ / /  / /_  
/_/    \____/_/|_|\___/_/  /_/\__,_/_/   \__/  
_________________________________________________________
_________________________________________________________

)";break;

case 17:
cout << R"(
    ____             __       
   / __ \____ ______/ /___  __
  / /_/ / __ `/ ___/ __/ / / /
 / ____/ /_/ / /  / /_/ /_/ / 
/_/    \__,_/_/   \__/\__, /  
                     /____/   
_____________________________________
_____________________________________

)";break;

case 18:
cout << R"(
    ____                 ____                      __                  
   / __ )____ _____ _   /  _/___ _   _____  ____  / /_____  _______  __
  / __  / __ `/ __ `/   / // __ \ | / / _ \/ __ \/ __/ __ \/ ___/ / / /
 / /_/ / /_/ / /_/ /  _/ // / / / |/ /  __/ / / / /_/ /_/ / /  / /_/ / 
/_____/\__,_/\__, /  /___/_/ /_/|___/\___/_/ /_/\__/\____/_/   \__, /  
            /____/                                            /____/  
___________________________________________________________________________
___________________________________________________________________________

)";break;

  }
}
