#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
    std::cout << "ScavTrap Default constructor called" << std::endl;
    this->Name = "";
    this->Hit_points = 100;
    this->Energy_points = 50;
    this->Attack_damage = 20;
}

ScavTrap::ScavTrap(std::string n){
    std::cout << "ScavTrap Constructor called" << std::endl;
    this->Name = n;
    this->Hit_points = 100;
    this->Energy_points = 50;
    this->Attack_damage = 20;
}

// ScavTrap::ScavTrap(const ScavTrap & scav){
//     std::cout << "ScavTrap Copy constructor called" << std::endl;
//     *this = scav;
// }

ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap Destructor called" << std::endl;
}

void ScavTrap::guardGate(){
    std::cout << "ScavTrap " << this->Name << " is guarding the GATE" << std:: endl;
}

void ScavTrap::attack(const std::string & target){
    if(this->Energy_points > 0 && this->Hit_points > 0){
        std::cout << "ScavTrap " << this->Name << " Attacks " << target << " , causing " << this->Attack_damage << " points of damage!" << std::endl;
        this->Energy_points--;
    }
}