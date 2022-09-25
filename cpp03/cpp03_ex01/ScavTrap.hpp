#ifndef _SCAVTRAP_HPP
#define _SCAVTRAP_HPP
#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
public:
    ScavTrap();
    ScavTrap(std::string Name);
    ScavTrap(ScavTrap const & scav);
    ~ScavTrap();
    void attack(const std::string & target);
    void guardGate();
};
#endif