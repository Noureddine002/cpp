#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string n){
    this->name = n;
}

Zombie::~Zombie(){
    std::cout << this->name << " has been sent to hell" << std::endl;
}

void Zombie::annonce(void){
    std::cout << this->name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}