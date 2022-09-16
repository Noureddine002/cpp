#ifndef _ZOMBIE_HPP
#define _ZOMBIE_HPP
#include <iostream>


class Zombie {
private:
    std::string name;
public:
    Zombie();
    ~Zombie();
    std::string get_n();
    void set_n(std::string n);
    void annonce(void);
};

Zombie* zombieHorde(int N, std::string n);

#endif