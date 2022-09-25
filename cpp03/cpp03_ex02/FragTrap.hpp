#ifndef _FRAGTRAP_HPP
#define _FRAGTRAP_HPP
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
public:
    FragTrap();
	FragTrap(std::string Name);
	FragTrap(FragTrap const & frag);
    FragTrap & operator=(FragTrap const & frag);
	~FragTrap();
    void attack(const std::string & target);
    void highFiveGuys();
};
#endif