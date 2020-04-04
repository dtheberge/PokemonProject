#ifndef ENUMS_H
#define ENUMS_H

namespace ENUMS
{

  enum TYPE
    {
      NA, BUG, DRAGON, ELECTRIC, FIGHT, FIRE,
      FLYING, GHOST, GRASS, GROUND, ICE,
      NORMAL, POISON, PSYCHIC, ROCK, WATER
    };

  string Type_String(TYPE Type) 
  {
    switch (Type)
    {
        case NA: return "N/A"; break;
        case BUG: return "Bug"; break;
        case DRAGON: return "Dragon"; break;
        case ELECTRIC: return "Electric"; break;
        case FIGHT: return "Fight"; break;
        case FIRE: return "Fire"; break;
        case FLYING: return "Flying"; break;
        case GHOST: return "Ghost"; break;
        case GRASS: return "Grass"; break;
        case GROUND: return "Ground"; break;
        case ICE: return "Ice"; break;
        case NORMAL: return "Normal"; break;
        case POISON: return "Poison"; break;
        case PSYCHIC: return "Psychic"; break;
        case ROCK: return "Rock"; break;
        case WATER: return "Water"; break;
    }

    return "Uhh No.";
}

  enum CONDITION
  {
    BURNED, FROZEN, PARALYZED, POISONED,
    ASLEEP, CONFUSED, ATTRACTED, CURSED,
    NO_CONDITION
  };

    string Condition_String(CONDITION Condition) 
  {
    switch (Type)
    {
        case NO_CONDITION: return "No Condition"; break;
        case BURNED: return "Burned"; break;
        case FROZEN: return "Frozen"; break;
        case PARALYZED: return "Paralyzed"; break;
        case POISONED: return "Poisoned"; break;
        case ASLEEP: return "Asleep"; break;
        case CONFUSED: return "Confused"; break;
        case ATTRACTED: return "Attracted"; break;
        case CURSED: return "Cursed"; break;
    }
}

#endif
