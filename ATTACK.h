#ifndef ATTACK_H
#define ATTACK_H

#include <string>
#include "ENUMS.h"

using namespace ENUMS;
using std::string;

class ATTACK
{
  private:
    string Name;
    TYPE Type;
    int DMG;
    int ACC;
    int PP;
    int Condition_Chance;
    CONDITION Condition;


    void set_Name();
    void set_Type();
    void set_DMG();
    void set_ACC();
    void set_PP();
    void set_ConditionChance();
    void set_Condition();


  public:
    ATTACK();

    string get_Name() const;
    TYPE get_Type() const;
    int get_DMG() const;
    int get_ACC() const;
    int get_PP() const;
    int get_ConditionChance() const;
    CONDITION get_Condition() const;

};

#endif
