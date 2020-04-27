#ifndef ATTACK_H
#define ATTACK_H

#include <string>
#include <iostream>
#include <sstream>
#include <fstream>

#include "GAME_INFO.h"

using std::string;
using std::ifstream;
using std::stringstream;
using std::endl;
using std::cout;

class ATTACK
{
  private:
    string Name;
    TYPE Type;
    int Move_Number;
    int DMG;
    int ACC;
    int PP;
    CONDITION Condition;

    void set_Information(int attack);
    void set_Condition();

    TYPE convert(const std::string& str);
  public:
    ATTACK(int attack);

    string get_Name() const;
    TYPE get_Type() const;
    int get_MoveNumber() const;
    int get_DMG() const;
    int get_ACC() const;
    int get_PP() const;
    CONDITION get_Condition() const;

};

#endif
