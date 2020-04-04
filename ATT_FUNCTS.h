//All of the Attack Functions

#ifndef ATT_FUNCTS_H
#define ATT_FUNCTS_H

#include <iostream>
#include <string>

using std::string;
using std::cout;

namespace ATT_FUNCTS
{
    enum ATTACK_FUNCT
    {
      //PHYSICAL ATTACKS
      BARRAGE, BIDE, BIND, BITE, BODY_SLAM, BONE_CLUB, BONEMERANG,
      CLAMP, COMET_PUNCH, CONSTRICT, COUNTER, CRABHAMMER, CUT,
      DIG, DIZZY_PUNCH, DOUBLE_KICK, DOUBLE_SLAP, DOUBLE_EDGE, DRILL_PECK,
      EARTHQUAKE, EGG_BOMB, EXPLOSION,
      FIRE_PUNCH, FISSURE, FLY, FURY_ATTACK, FURY_SWIPES,
      GUILLOTINE,
      HEADBUTT, HIGH_JUMP_KICK, HORN_ATTACK, HORN_DRILL, HYPER_FANG,
      ICE_PUNCH,
      JUMP_KICK,
      KARATE_CHOP,
      LEECH_LIFE, LICK, LOW_KICK,
      MEGA_KICK, MEGA_PUNCH,
      PAY_DAY, PECK, PIN_MISSILE, POISON_STING, POUND,
      QUICK_ATTACK,
      RAGE, RAZOR_LEAF, ROCK_SLIDE, ROCK_THROW, ROLLING_KICK,
      SCRATCH, SEISMIC_TOSS, SELF_DESTRUCT, SKULL_BASH, SKY_ATTACK, SLAM,
      SLASH, SPIKE_CANNON, STOMP,STRENGTH,STRUGGLE, SUBMISSION, SUPER_FANG,
      TACKLE, TAKE_DOWN, THRASH, THUNDER_PUNCH, TWINEEDLE,
      VINE_WHIP, VISE_GRIP,
      WATERFALL, WING_ATTACK, WRAP

      //SPECIAL ATTACKS
      ABSORB, ACID, AURORA_BEAM,
      BLIZZARD, BUBBLE, BUBBLE_BEAM,
      CONFUSION,
      DRAGON_RAGE, DREAM_EATER,
      EMBER,
      FIRE_BLAST, FIRE_SPIN, FLAMETHROWER,
      GUST,
      HYDRO_PUMP, HYPER_BEAM,
      ICE_BEAM,
      MEGA_DRAIN,
      NIGHT_SHADE,
      PETAL_DANCE, PSYBEAM, PSYCHIC, PSYWAVE,
      RAZOR_WIND,
      SLUDGE, SMOG, SOLAR_BEAM, SONIC_BOOM, SURF, SWIFT,
      THUNDER, THUNDER_SHOCK, THUNDERBOLT, TRI_ATTACK,
      WATER_GUN,

      //STATUS ATTACKS
      ACID_ARMOR, AGILITY, AMNESIA,
      BARRIER,
      CONFUSE_RAY, CONVERSION,
      DEFENSE_CURL, DISABLE, DOUBLE_TEAM,
      FLASH, FOCUS_ENERGY,
      GLARE, GROWL, GROWTH,
      HARDEN, HAZE, HYPNOSIS,
      KINESIS,
      LEECH_SEED, LEER, LIGHT_SCREEN, LOVELY_KISS,
      MEDITATE, METRONOME, MIMIC, MINIMIZE, MIRROR_MOVE, MIST,
      POISON_GAS, POISON_POWDER,
      RECOVER, REFLECT, REST, ROAR,
      SAND_ATTACK, SCREECH, SHARPEN, SING, SLEEP_POWDER, SMOKESCREEN, SOFT-BOILED,
      SPLASH, SPORE, STRING_SHOT, STUN_SPORE, SUBSTITUTE, SUPERSONIC, SWORDS_DANCE,
      TAIL_WHIP, TELEPORT, THUNDER_WAVE, TOXIC, TRANSFORM,
      WHIRLWIND, WITHDRAW
    };

    //SPECIAL ATTACKS-------------------------------------------------------------
    void Absorb(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Absorb Function was called.";
    }

    void Acid(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Acid Function was called.";
    }

    void Aurora_Beam(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Aurora Beam Function was called.";
    }

    void Blizzard(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Blizzard Function was called.";
    }

    void Bubble(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Bubble Function was called.";
    }

    void Bubble_Beam(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Bubble Beam Function was called.";
    }

    void Confusion(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Confusion Function was called.";
    }

    void Dragon_Rage(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Dragon Rage Function was called.";
    }

    void Dream_Eater(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Dream Eater Function was called.";
    }

    void Ember(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Ember Function was called.";
    }
    void Fire_Blast(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Fire Blast Function was called.";
    }

    void Fire_Spin(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Fire Spin Function was called.";
    }

    void Flamethrower(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Flamethrower Function was called.";
    }

    void Gust(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Gust Function was called.";
    }

    void Hydro_Pump(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Hydro Pump Function was called.";
    }

    void Hyper_Beam(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Hyper Beam Function was called.";
    }

    void Ice_Beam(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Ice Beam Function was called.";
    }

    void Mega_Drain(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Mega Drain Function was called.";
    }

    void Night_Shade(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Night Shade Function was called.";
    }

    void Petal_Dance(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Petal Dance Function was called.";
    }

    void Psybeam(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Psybeam Function was called.";
    }

    void Psychic(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Psychic Function was called.";
    }

    void Psywave(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Psywave Function was called.";
    }

    void Razor_Wind(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Razor Wind Function was called.";
    }

    void Sludge(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Sludge Function was called.";
    }

    void Smog(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Smog Function was called.";
    }

    void Solar_Beam(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Solar Beam Function was called.";
    }

    void Sonic_Boom(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Sonic Boom Function was called.";
    }

    void Surf(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Surf Function was called.";
    }

    void Swift(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Swift Function was called.";
    }

    void Thunder(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Thunder Function was called.";
    }

    void Thunder_Shock(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Thunder Shock Function was called.";
    }

    void Thunderbolt(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Thunderbolt Function was called.";
    }

    void Tri_Attack(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Tri Attack Function was called.";
    }

    void Water_Gun(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Water Gun Function was called.";
    }


    //PHYSICAL ATTACKS------------------------------------------------------------
    void Barrage(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Barrage Function was called.";
    }

    void Bide(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Bide Function was called.";
    }

    void Bind(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Bind Function was called.";
    }

    void Bite(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Bite Function was called.";
    }

    void Body_Slam(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Body Slam Function was called.";
    }

    void Bone_Club(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Bone Club Function was called.";
    }

    void Bonemerang(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Bonemerang Function was called.";
    }

    void Clamp(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Clamp Function was called.";
    }

    void Comet_Punch(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Comet Punch Function was called.";
    }

    void Constrict(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Constrict Function was called.";
    }

    void Counter(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Counter Function was called.";
    }

    void Crabhammer(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Crabhammer Function was called.";
    }

    void Cut(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Cut Function was called.";
    }

    void Dig(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Dig Function was called.";
    }

    void Dizzy_Punch(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Dizzy Punch Function was called.";
    }

    void Double_Kick(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Double Kick Function was called.";
    }

    void Double_Slap(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Double Slap Function was called.";
    }

    void Double_Edge(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Double_Edge Function was called.";
    }

    void Drill_Peck(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Drill Peck Function was called.";
    }

    void Earthquake(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Earthquake Function was called.";
    }

    void Egg_Bomb(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Egg Bomb Function was called.";
    }

    void Explosion(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Explosion Function was called.";
    }

    void Fire_Punch(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Fire Punch Function was called.";
    }

    void Fissure(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Fissure Function was called.";
    }

    void Fly(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Fly Function was called.";
    }

    void Fury_Attack(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Fury Attack Function was called.";
    }

    void Fury_Swipes(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Fury Swipes Function was called.";
    }

    void Guillotine(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Guillotine Function was called.";
    }

    void Headbutt(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Headbutt Function was called.";
    }

    void High_Jump_Kick(POKEMON Attacker, POKEMON Defender)
    {
      cout << "High Jump Kick Function was called.";
    }

    void Horn_Attack(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Horn Attack Function was called.";
    }

    void Horn_Drill(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Horn Drill Function was called.";
    }

    void Hyper_Fang(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Hyper Fang Function was called.";
    }

    void Ice_Punch(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Ice Punch Function was called.";
    }

    void Jump_Kick(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Jump Kick Function was called.";
    }

    void Karate_Chop(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Karate Chop Function was called.";
    }

    void Leech_Life(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Leech Life Function was called.";
    }

    void Lick(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Lick Function was called.";
    }

    void Low_Kick(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Low Kick Function was called.";
    }

    void Mega_Kick(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Mega Kick Function was called.";
    }

    void Mega_Punch(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Mega Punch Function was called.";
    }

    void Pay_Day(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Pay Day Function was called.";
    }

    void Peck(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Peck Function was called.";
    }

    void Pin_Missile(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Pin Missile Function was called.";
    }

    void Poison_Sting(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Poison Sting Function was called.";
    }

    void Pound(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Pound Function was called.";
    }

    void Quick_Attack(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Quick Attack Function was called.";
    }

    void Rage(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Rage Function was called.";
    }

    void Razor_Leaf(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Razor Leaf Function was called.";
    }

    void Rock_Slide(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Rock Slide Function was called.";
    }

    void Rock_Throw(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Rock Throw Function was called.";
    }

    void Rolling_Kick(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Rolling Kick Function was called.";
    }

    void Scratch(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Scratch Function was called.";
    }

    void Seismic_Toss(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Seismic Toss Function was called.";
    }

    void Self_Destruct(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Self_Destruct Function was called.";
    }

    void Skull_Bash(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Skull Bash Function was called.";
    }

    void Sky_Attack(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Sky Attack Function was called.";
    }

    void Slam(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Slam Function was called.";
    }

    void Slash(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Slash Function was called.";
    }

    void Spike_Cannon(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Spike Cannon Function was called.";
    }

    void Stomp(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Stomp Function was called.";
    }

    void Strength(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Strength Function was called.";
    }

    void Struggle(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Struggle Function was called.";
    }

    void Submission(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Submission Function was called.";
    }

    void Super_Fang(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Super Fang Function was called.";
    }

    void Tackle(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Tackle Function was called.";
    }

    void Take_Down(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Take Down Function was called.";
    }

    void Thrash(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Thrash Function was called.";
    }

    void Thunder_Punch(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Thunder Punch Function was called.";
    }

    void Twineedle(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Twineedle Function was called.";
    }

    void Vine_Whip(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Vine Whip Function was called.";
    }

    void Vise_Grip(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Vise Grip Function was called.";
    }

    void Waterfall(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Waterfall Function was called.";
    }

    void Wing_Attack(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Wing Attack Function was called.";
    }

    void Wrap(POKEMON Attacker, POKEMON Defender)
    {
      cout << "Wrap Function was called.";
    }


  //STATUS------------------------------------------------------------------------
    // void Acid_Armor(POKEMON Attacker, POKEMON Defender)
    // {
    //   cout << "Acid_Armor Function was called.";
    // }
    // void Agility(POKEMON Attacker, POKEMON Defender)
    // {
    //   cout << "Agility Function was called.";
    // }
    // void Amnesia(POKEMON Attacker, POKEMON Defender)
    // {
    //   cout << "Amnesia Function was called.";
    // }
    // void Barrier(POKEMON Attacker, POKEMON Defender)
    // {
    //   cout << "Barrier Function was called.";
    // }
    // void Confuse_Ray(POKEMON Attacker, POKEMON Defender)
    // {
    //   cout << "Confuse_Ray Function was called.";
    // }
    // void Conversion(POKEMON Attacker, POKEMON Defender)
    // {
    //   cout << "Conversion Function was called.";
    // }
    // void Defense_Curl(POKEMON Attacker, POKEMON Defender)
    // {
    //   cout << "Defense_Curl Function was called.";
    // }
    // void Disable(POKEMON Attacker, POKEMON Defender)
    // {
    //   cout << "Disable Function was called.";
    // }
    // void Double_Team(POKEMON Attacker, POKEMON Defender)
    // {
    //   cout << "Double_Team Function was called.";
    // }
    // void Flash(POKEMON Attacker, POKEMON Defender)
    // {
    //   cout << "Flash Function was called.";
    // }
    // void Focus_Energy(POKEMON Attacker, POKEMON Defender)
    // {
    //   cout << "Focus_Energy Function was called.";
    // }
    // void Glare(POKEMON Attacker, POKEMON Defender)
    // {
    //   cout << "Glare Function was called.";
    // }
    // void Growl(POKEMON Attacker, POKEMON Defender)
    // {
    //   cout << "Growl Function was called.";
    // }
    // void Growth(POKEMON Attacker, POKEMON Defender)
    // {
    //   cout << "Growth Function was called.";
    // }
    // void Harden(POKEMON Attacker, POKEMON Defender)
    // {
    //   cout << "Harden Function was called.";
    // }
    // void Haze(POKEMON Attacker, POKEMON Defender)
    // {
    //   cout << "Haze Function was called.";
    // }
    // void Hypnosis(POKEMON Attacker, POKEMON Defender)
    // {
    //   cout << "Hypnosis Function was called.";
    // }
    // void Kinesis(POKEMON Attacker, POKEMON Defender)
    // {
    //   cout << "Kinesis Function was called.";
    // }
    // void Leech_Seed(POKEMON Attacker, POKEMON Defender)
    // {
    //   cout << "Leech_Seed Function was called.";
    // }
    // void Leer(POKEMON Attacker, POKEMON Defender)
    // {
    //   cout << "Leer Function was called.";
    // }
    // void Light_Screen(POKEMON Attacker, POKEMON Defender)
    // {
    //   cout << "Light_Screen Function was called.";
    // }
    // void Lovely_Kiss(POKEMON Attacker, POKEMON Defender)
    // {
    //   cout << "Lovely_Kiss Function was called.";
    // }
    // void Meditate(POKEMON Attacker, POKEMON Defender)
    // {
    //   cout << "Meditate Function was called.";
    // }
    // void Metronome(POKEMON Attacker, POKEMON Defender)
    // {
    //   cout << "Metronome Function was called.";
    // }
    // void Mimic(POKEMON Attacker, POKEMON Defender)
    // {
    //   cout << "Mimic Function was called.";
    // }
    // void Minimize(POKEMON Attacker, POKEMON Defender)
    // {
    //   cout << "Minimize Function was called.";
    // }
    // void Mirror_Move(POKEMON Attacker, POKEMON Defender)
    // {
    //   cout << "Mirror_Move Function was called.";
    // }
    // void Mist(POKEMON Attacker, POKEMON Defender)
    // {
    //   cout << "Mist Function was called.";
    // }
    // void Poison_Gas(POKEMON Attacker, POKEMON Defender)
    // {
    //   cout << "Poison_Gas Function was called.";
    // }
    // void Poison_Powder(POKEMON Attacker, POKEMON Defender)
    // {
    //   cout << "Poison_Powder Function was called.";
    // }
    // void Recover(POKEMON Attacker, POKEMON Defender)
    // {
    //   cout << "Recover Function was called.";
    // }
    // void Reflect(POKEMON Attacker, POKEMON Defender)
    // {
    //   cout << "Reflect Function was called.";
    // }
    // void Rest(POKEMON Attacker, POKEMON Defender)
    // {
    //   cout << "Rest Function was called.";
    // }
    // void Roar(POKEMON Attacker, POKEMON Defender)
    // {
    //   cout << "Roar Function was called.";
    // }
    // void Sand_Attack(POKEMON Attacker, POKEMON Defender)
    // {
    //   cout << "Sand_Attack Function was called.";
    // }
    // void Screech(POKEMON Attacker, POKEMON Defender)
    // {
    //   cout << "Screech Function was called.";
    // }
    // void Sharpen(POKEMON Attacker, POKEMON Defender)
    // {
    //   cout << "Sharpen Function was called.";
    // }
    // void Sing(POKEMON Attacker, POKEMON Defender)
    // {
    //   cout << "Sing Function was called.";
    // }
    // void Sleep_Powder(POKEMON Attacker, POKEMON Defender)
    // {
    //   cout << "Sleep_Powder Function was called.";
    // }
    // void Smokescreen(POKEMON Attacker, POKEMON Defender)
    // {
    //   cout << "Smokescreen Function was called.";
    // }
    // void Soft-Boiled(POKEMON Attacker, POKEMON Defender)
    // {
    //   cout << "Soft-Boiled Function was called.";
    // }
    // void Splash(POKEMON Attacker, POKEMON Defender)
    // {
    //   cout << "Splash Function was called.";
    // }
    // void Spore(POKEMON Attacker, POKEMON Defender)
    // {
    //   cout << "Spore Function was called.";
    // }
    // void String_Shot(POKEMON Attacker, POKEMON Defender)
    // {
    //   cout << "String_Shot Function was called.";
    // }
    // void Stun_Spore(POKEMON Attacker, POKEMON Defender)
    // {
    //   cout << "Stun_Spore Function was called.";
    // }
    // void Substitute(POKEMON Attacker, POKEMON Defender)
    // {
    //   cout << "Substitute Function was called.";
    // }
    // void Supersonic(POKEMON Attacker, POKEMON Defender)
    // {
    //   cout << "Supersonic Function was called.";
    // }
    // void Swords_Dance(POKEMON Attacker, POKEMON Defender)
    // {
    //   cout << "Swords_Dance Function was called.";
    // }
    // void Tail_Whip(POKEMON Attacker, POKEMON Defender)
    // {
    //   cout << "Tail_Whip Function was called.";
    // }
    // void Teleport(POKEMON Attacker, POKEMON Defender)
    // {
    //   cout << "Teleport Function was called.";
    // }
    // void Thunder_Wave(POKEMON Attacker, POKEMON Defender)
    // {
    //   cout << "Thunder_Wave Function was called.";
    // }
    // void Toxic(POKEMON Attacker, POKEMON Defender)
    // {
    //   cout << "Toxic Function was called.";
    // }
    // void Transform(POKEMON Attacker, POKEMON Defender)
    // {
    //   cout << "Transform Function was called.";
    // }
    // void Whirlwind(POKEMON Attacker, POKEMON Defender)
    // {
    //   cout << "Whirlwind Function was called.";
    // }
    // void Withdraw(POKEMON Attacker, POKEMON Defender)
    // {
    //   cout << "Withdraw Function was called.";
    // }

  //ATTACK Switch Function--------------------------------------------------------

  void ATT_FUNCT_CALL(int Function, POKEMON Attacker, POKEMON Defender)
  {
    switch(Function)
    {
      //SPECIAL
      case ABSORB: Absorb(Attacker, Defender); break;
      case ACID: Acid(Attacker, Defender); break;
      case AURORA_BEAM: Aurora_Beam(Attacker, Defender); break;
      case BLIZZARD: Blizzard(Attacker, Defender); break;
      case BUBBLE: Bubble(Attacker, Defender); break;
      case BUBBLE_BEAM: Bubble_Beam(Attacker, Defender); break;
      case CONFUSION: Confusion(Attacker, Defender); break;
      case DRAGON_RAGE: Dragon_Rage(Attacker, Defender); break;
      case DREAM_EATER: Dream_Eater(Attacker, Defender); break;
      case EMBER: Ember(Attacker, Defender); break;
      case FIRE_BLAST: Fire_Blast(Attacker, Defender); break;
      case FIRE_SPIN: Fire_Spin(Attacker, Defender); break;
      case FLAMETHROWER: Flamethrower(Attacker, Defender); break;
      case GUST: Gust(Attacker, Defender); break;
      case HYDRO_PUMP: Hydro_Pump(Attacker, Defender); break;
      case HYPER_BEAM: Hyper_Beam(Attacker, Defender); break;
      case ICE_BEAM: Ice_Beam(Attacker, Defender); break;
      case MEGA_DRAIN: Mega_Drain(Attacker, Defender); break;
      case NIGHT_SHADE: Night_Shade(Attacker, Defender); break;
      case PETAL_DANCE: Petal_Dance(Attacker, Defender); break;
      case PSYBEAM: Psybeam(Attacker, Defender); break;
      case PSYCHIC: Psychic(Attacker, Defender); break;
      case PSYWAVE: Psywave(Attacker, Defender); break;
      case RAZOR_WIND: Razor_Wind(Attacker, Defender); break;
      case SLUDGE: Sludge(Attacker, Defender); break;
      case SMOG: Smog(Attacker, Defender); break;
      case SOLAR_BEAM: Solar_Beam(Attacker, Defender); break;
      case SONIC_BOOM: Sonic_Boom(Attacker, Defender); break;
      case SURF: Surf(Attacker, Defender); break;
      case SWIFT: Swift(Attacker, Defender); break;
      case THUNDER: Thunder(Attacker, Defender); break;
      case THUNDER_SHOCK: Thunder_Shock(Attacker, Defender); break;
      case THUNDERBOLT: Thunderbolt(Attacker, Defender); break;
      case TRI_ATTACK: Tri_Attack(Attacker, Defender); break;
      case WATER_GUN: Water_Gun(Attacker, Defender); break;

      //PHYSICAL
      case BARRAGE: Barrage(Attacker, Defender); break;
      case BIDE: Bide(Attacker, Defender); break;
      case BIND: Bind(Attacker, Defender); break;
      case BITE: Bite(Attacker, Defender); break;
      case BODY_SLAM: Body_Slam(Attacker, Defender); break;
      case BONE_CLUB: Bone_Club(Attacker, Defender); break;
      case BONEMERANG: Bonemerang(Attacker, Defender); break;
      case CLAMP: Clamp(Attacker, Defender); break;
      case COMET_PUNCH: Comet_Punch(Attacker, Defender); break;
      case CONSTRICT: Constrict(Attacker, Defender); break;
      case COUNTER: Counter(Attacker, Defender); break;
      case CRABHAMMER: Crabhammer(Attacker, Defender); break;
      case CUT: Cut(Attacker, Defender); break;
      case DIG: Dig(Attacker, Defender); break;
      case DIZZY_PUNCH: Dizzy_Punch(Attacker, Defender); break;
      case DOUBLE_KICK: Double_Kick(Attacker, Defender); break;
      case DOUBLE_SLAP: Double_Slap(Attacker, Defender); break;
      case DOUBLE_EDGE: Double_Edge(Attacker, Defender); break;
      case DRILL_PECK: Drill_Peck(Attacker, Defender); break;
      case EARTHQUAKE: Earthquake(Attacker, Defender); break;
      case EGG_BOMB: Egg_Bomb(Attacker, Defender); break;
      case EXPLOSION: Explosion(Attacker, Defender); break;
      case FIRE_PUNCH: Fire_Punch(Attacker, Defender); break;
      case FISSURE: Fissure(Attacker, Defender); break;
      case FLY: Fly(Attacker, Defender); break;
      case FURY_ATTACK: Fury_Attack(Attacker, Defender); break;
      case FURY_SWIPES: Fury_Swipes(Attacker, Defender); break;
      case GUILLOTINE: Guillotine(Attacker, Defender); break;
      case HEADBUTT: Headbutt(Attacker, Defender); break;
      case HIGH_JUMP_KICK: High_Jump_Kick(Attacker, Defender); break;
      case HORN_ATTACK: Horn_Attack(Attacker, Defender); break;
      case HORN_DRILL: Horn_Drill(Attacker, Defender); break;
      case HYPER_FANG: Hyper_Fang(Attacker, Defender); break;
      case ICE_PUNCH: Ice_Punch(Attacker, Defender); break;
      case JUMP_KICK: Jump_Kick(Attacker, Defender); break;
      case KARATE_CHOP: Karate_Chop(Attacker, Defender); break;
      case LEECH_LIFE: Leech_Life(Attacker, Defender); break;
      case LICK: Lick(Attacker, Defender); break;
      case LOW_KICK: Low_Kick(Attacker, Defender); break;
      case MEGA_KICK: Mega_Kick(Attacker, Defender); break;
      case MEGA_PUNCH: Mega_Punch(Attacker, Defender); break;
      case PAY_DAY: Pay_Day(Attacker, Defender); break;
      case PECK: Peck(Attacker, Defender); break;
      case PIN_MISSILE: Pin_Missile(Attacker, Defender); break;
      case POISON_STING: Poison_Sting(Attacker, Defender); break;
      case POUND: Pound(Attacker, Defender); break;
      case QUICK_ATTACK: Quick_Attack(Attacker, Defender); break;
      case RAGE: Rage(Attacker, Defender); break;
      case RAZOR_LEAF: Razor_Leaf(Attacker, Defender); break;
      case ROCK_SLIDE: Rock_Slide(Attacker, Defender); break;
      case ROCK_THROW: Rock_Throw(Attacker, Defender); break;
      case ROLLING_KICK: Rolling_Kick(Attacker, Defender); break;
      case SCRATCH: Scratch(Attacker, Defender); break;
      case SEISMIC_TOSS: Seismic_Toss(Attacker, Defender); break;
      case SELF_DESTRUCT: Self_Destruct(Attacker, Defender); break;
      case SKULL_BASH: Skull_Bash(Attacker, Defender); break;
      case SKY_ATTACK: Sky_Attack(Attacker, Defender); break;
      case SLAM: Slam(Attacker, Defender); break;
      case SLASH: Slash(Attacker, Defender); break;
      case SPIKE_CANNON: Spike_Cannon(Attacker, Defender); break;
      case STOMP: Stomp(Attacker, Defender); break;
      case STRENGTH: Strength(Attacker, Defender); break;
      case STRUGGLE: Struggle(Attacker, Defender); break;
      case SUBMISSION: Submission(Attacker, Defender); break;
      case SUPER_FANG: Super_Fang(Attacker, Defender); break;
      case TACKLE: Tackle(Attacker, Defender); break;
      case TAKE_DOWN: Take_Down(Attacker, Defender); break;
      case THRASH: Thrash(Attacker, Defender); break;
      case THUNDER_PUNCH: Thunder_Punch(Attacker, Defender); break;
      case TWINEEDLE: Twineedle(Attacker, Defender); break;
      case VINE_WHIP: Vine_Whip(Attacker, Defender); break;
      case VISE_GRIP: Vise_Grip(Attacker, Defender); break;
      case WATERFALL: Waterfall(Attacker, Defender); break;
      case WING_ATTACK: Wing_Attack(Attacker, Defender); break;
      case WRAP: Wrap(Attacker, Defender); break;

      //STATUS
      // case ACID ARMOR_FUNCT: Acid Armor(Attacker, Defender); break;
      // case AGILITY_FUNCT: Agility(Attacker, Defender); break;
      // case AMNESIA_FUNCT: Amnesia(Attacker, Defender); break;
      // case BARRIER_FUNCT: Barrier(Attacker, Defender); break;
      // case CONFUSE RAY_FUNCT: Confuse Ray(Attacker, Defender); break;
      // case CONVERSION_FUNCT: Conversion(Attacker, Defender); break;
      // case DEFENSE CURL_FUNCT: Defense Curl(Attacker, Defender); break;
      // case DISABLE_FUNCT: Disable(Attacker, Defender); break;
      // case DOUBLE TEAM_FUNCT: Double Team(Attacker, Defender); break;
      // case FLASH_FUNCT: Flash(Attacker, Defender); break;
      // case FOCUS ENERGY_FUNCT: Focus Energy(Attacker, Defender); break;
      // case GLARE_FUNCT: Glare(Attacker, Defender); break;
      // case GROWL_FUNCT: Growl(Attacker, Defender); break;
      // case GROWTH_FUNCT: Growth(Attacker, Defender); break;
      // case HARDEN_FUNCT: Harden(Attacker, Defender); break;
      // case HAZE_FUNCT: Haze(Attacker, Defender); break;
      // case HYPNOSIS_FUNCT: Hypnosis(Attacker, Defender); break;
      // case KINESIS_FUNCT: Kinesis(Attacker, Defender); break;
      // case LEECH SEED_FUNCT: Leech Seed(Attacker, Defender); break;
      // case LEER_FUNCT: Leer(Attacker, Defender); break;
      // case LIGHT SCREEN_FUNCT: Light Screen(Attacker, Defender); break;
      // case LOVELY KISS_FUNCT: Lovely Kiss(Attacker, Defender); break;
      // case MEDITATE_FUNCT: Meditate(Attacker, Defender); break;
      // case METRONOME_FUNCT: Metronome(Attacker, Defender); break;
      // case MIMIC_FUNCT: Mimic(Attacker, Defender); break;
      // case MINIMIZE_FUNCT: Minimize(Attacker, Defender); break;
      // case MIRROR MOVE_FUNCT: Mirror Move(Attacker, Defender); break;
      // case MIST_FUNCT: Mist(Attacker, Defender); break;
      // case POISON GAS_FUNCT: Poison Gas(Attacker, Defender); break;
      // case POISON POWDER_FUNCT: Poison Powder(Attacker, Defender); break;
      // case RECOVER_FUNCT: Recover(Attacker, Defender); break;
      // case REFLECT_FUNCT: Reflect(Attacker, Defender); break;
      // case REST_FUNCT: Rest(Attacker, Defender); break;
      // case ROAR_FUNCT: Roar(Attacker, Defender); break;
      // case SAND ATTACK_FUNCT: Sand Attack(Attacker, Defender); break;
      // case SCREECH_FUNCT: Screech(Attacker, Defender); break;
      // case SHARPEN_FUNCT: Sharpen(Attacker, Defender); break;
      // case SING_FUNCT: Sing(Attacker, Defender); break;
      // case SLEEP POWDER_FUNCT: Sleep Powder(Attacker, Defender); break;
      // case SMOKESCREEN_FUNCT: Smokescreen(Attacker, Defender); break;
      // case SOFT-BOILED_FUNCT: Soft-Boiled(Attacker, Defender); break;
      // case SPLASH_FUNCT: Splash(Attacker, Defender); break;
      // case SPORE_FUNCT: Spore(Attacker, Defender); break;
      // case STRING SHOT_FUNCT: String Shot(Attacker, Defender); break;
      // case STUN SPORE_FUNCT: Stun Spore(Attacker, Defender); break;
      // case SUBSTITUTE_FUNCT: Substitute(Attacker, Defender); break;
      // case SUPERSONIC_FUNCT: Supersonic(Attacker, Defender); break;
      // case SWORDS DANCE_FUNCT: Swords Dance(Attacker, Defender); break;
      // case TAIL WHIP_FUNCT: Tail Whip(Attacker, Defender); break;
      // case TELEPORT_FUNCT: Teleport(Attacker, Defender); break;
      // case THUNDER WAVE_FUNCT: Thunder Wave(Attacker, Defender); break;
      // case TOXIC_FUNCT: Toxic(Attacker, Defender); break;
      // case TRANSFORM_FUNCT: Transform(Attacker, Defender); break;
      // case WHIRLWIND_FUNCT: Whirlwind(Attacker, Defender); break;
      // case WITHDRAW_FUNCT: Withdraw(Attacker, Defender); break;
    }
  }
}

#endif
