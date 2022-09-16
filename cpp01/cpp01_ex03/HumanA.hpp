#ifndef _HUMANA_HPP
#define _HUMANA_HPP
#include "Weapon.hpp"

class HumanA {
private:
    std::string name;
    Weapon &weap;
public:
    HumanA(std::string name, Weapon &weap);
    ~HumanA();
    void attack();
};

#endif