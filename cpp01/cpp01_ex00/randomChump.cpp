#include <iostream>
#include "Zombie.hpp"

void randomChump(std::string n){
    Zombie zombie = Zombie(n);
    zombie.annonce();
}