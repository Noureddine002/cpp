#ifndef _ZOMBIE_HPP 
#define _ZOMBIE_HPP
#include <iostream>

class Zombie {
private:
    std::string name;
public:
    Zombie(std::string name);
    ~Zombie();
    void annonce(void);
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);
#endif