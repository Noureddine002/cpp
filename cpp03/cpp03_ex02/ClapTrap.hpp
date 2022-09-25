#ifndef _CLAPTRAP_HPP   
#define _CLAPTRAP_HPP 
#include <iostream>

class ClapTrap{
protected:
    std::string Name;
    int Hit_points;
    int Energy_points;
    int Attack_damage;
public:
    ClapTrap();
    ClapTrap(std::string Name);
    ClapTrap(ClapTrap const &clap);
    ClapTrap & operator=(ClapTrap const &clap);
    ~ClapTrap();
    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};
#endif