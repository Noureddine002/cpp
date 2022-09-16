#include <iostream>
#include "Weapon.hpp"

Weapon::Weapon(){}
Weapon::Weapon(std::string type){
    this->set_type(type);
}
Weapon::~Weapon(){}

const std::string &Weapon::get_type(){
    return this->type;
}

void Weapon::set_type(std::string str){
    this->type = str;
}