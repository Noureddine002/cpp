#include "FragTrap.hpp"

FragTrap::FragTrap(){
    std::cout << "FragTrap Default constructor called" << std::endl;
	this->Name = "";
	this->Hit_points = 100;
	this->Energy_points = 100;
	this->Attack_damage = 30;
}

FragTrap::FragTrap(std::string n){
	std::cout << "FragTrap constructor called" << std::endl;
	this->Name = n;
	this->Hit_points = 100;
	this->Energy_points = 100;
	this->Attack_damage = 30;
}

// FragTrap::FragTrap(const FragTrap & frag){
//     std::cout << "FragTrap Copy constructor called" << std::endl;
//     *this = frag;
// }

FragTrap & FragTrap::operator=(FragTrap const & frag){
	if(this != &frag){
		this->Name = frag.Name;
		this->Hit_points = frag.Hit_points;
		this->Energy_points = frag.Energy_points;
		this->Attack_damage = frag.Attack_damage;
	}
	return *this;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap Destructor called" << std::endl;
}

void FragTrap::attack(const std::string & target){
    if(this->Energy_points > 0 && this->Hit_points > 0){
        std::cout << "FragTrap " << this->Name << " Attacks " << target << " , causing " << this->Attack_damage << " points of damage!" << std::endl;
        this->Energy_points--;
    }
}

void FragTrap::highFiveGuys(){
	if(this->Energy_points > 0 && this->Hit_points > 0){
		std::cout << "FragTrap " << this->Name << " gives high five" << std::endl;
	}
}