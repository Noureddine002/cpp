#ifndef _HUMANB_HPP
#define _HUMANB_HPP
#include "Weapon.hpp"

class HumanB {
private:
    std::string name;
    Weapon *weap;
public:
    HumanB(std::string name);
    ~HumanB();
    void attack();
    void setWeapon(Weapon &weap);
};

#endif