#include <iostream>
#include "Zombie.hpp"

int main(void){
    Zombie *Zx = zombieHorde(5, "monster");
    int i = 0;
    while(i < 5){
        Zx[i].annonce();
        i++;
    }
    delete [] Zx;
}