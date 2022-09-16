#include <iostream>
#include "HumanA.hpp"

HumanA::HumanA(std::string n, Weapon &wp):weap(wp){
    this->name = n;
}

HumanA::~HumanA(){}

void HumanA::attack(){
    std::cout << this->name << " attacks with their " << this->weap.get_type() << std::endl;
}