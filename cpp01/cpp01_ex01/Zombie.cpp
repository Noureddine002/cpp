#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(){}
Zombie::~Zombie(){
    std::cout << this->name << " has been sent to hell" << std::endl;
}

std::string Zombie::get_n(){
    return this->name;
}

void Zombie::set_n(std::string n){
    this->name = n;
}

void Zombie::annonce(void){
    std::cout << this->name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}