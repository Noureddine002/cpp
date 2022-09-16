#include <iostream>
#include "Zombie.hpp"

Zombie* newZombie(std::string n){
    Zombie* zombie = new Zombie(n);
    return zombie;
}