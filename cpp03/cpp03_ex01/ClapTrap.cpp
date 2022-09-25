#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
    std::cout << "ClapTrap Default constructor called" << std::endl;
    this->Name = "";
    this->Hit_points = 10;
    this->Energy_points = 10;
    this->Attack_damage = 0;
}

ClapTrap::ClapTrap(std::string n){
    std::cout << "ClapTrap Constructor called" << std::endl;
    this->Name = n;
    this->Hit_points = 10;
    this->Energy_points = 10;
    this->Attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap & clap){
    std::cout << "ClapTrap Copy constructor called" << std::endl;
    *this = clap;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & clap){
    std::cout << "ClapTrap Overload operator called" << std::endl;
    if(this != &clap)
    {
        this->Name = clap.Name;
        this->Hit_points = clap.Hit_points;
        this->Energy_points = clap.Energy_points;
        this->Attack_damage = clap.Attack_damage;
    }
    return *this;
}

ClapTrap::~ClapTrap(){
    std::cout << "ClapTrap Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string & target){
    if(this->Energy_points > 0 && this->Hit_points > 0){
        std::cout << "ClapTrap " << this->Name << " Attacks " << target << " , causing " << this->Attack_damage << " points of damage!" << std::endl;
        this->Energy_points--;
    }
}

void ClapTrap::takeDamage(unsigned int amount){
    if(this->Energy_points > 0 && this->Hit_points > 0){
        std::cout << "ClapTrap " << this->Name << " lost " << amount << " Points" << std::endl;
        this->Hit_points -= amount;
        if(this->Hit_points < 0){
            this->Hit_points = 0;
        }
    }
}

void ClapTrap::beRepaired(unsigned int amount){
    if(this->Energy_points > 0 && this->Hit_points > 0){
        std::cout << "ClapTrap " << this->Name << " has " << amount << " of his points repaired" << std::endl;
        if(this->Hit_points + amount > 10){
            this->Hit_points = 10;
        }
        else{
            this->Hit_points += amount;
        }
        this->Energy_points--;
    }
}