#include <iostream>
#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string n){
    Zombie* Zx = new Zombie[N];
    int i = 0;
    while(i < N){
        Zx[i].set_n(n);
        i++;
    }
    return Zx;
}