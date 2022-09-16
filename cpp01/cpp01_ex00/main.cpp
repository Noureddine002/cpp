#include <iostream>
#include "Zombie.hpp"

int main (void){
    Zombie *z1 = newZombie("foo");
    z1->annonce();
    delete z1;
    randomChump("foo2");
}