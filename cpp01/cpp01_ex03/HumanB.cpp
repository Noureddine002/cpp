#include "HumanB.hpp"

HumanB::HumanB(std::string n){
    this->name = n;
    this->weap = NULL;
}
HumanB::~HumanB(){}

void HumanB::attack(){
    std::cout << this->name << " attacks with their " << this->weap->get_type() << std::endl;
}

void HumanB::setWeapon(Weapon &weap){
    this->weap = &weap;
}