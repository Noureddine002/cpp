#include "ClapTrap.hpp"

int main(){
    ClapTrap clap1("PcGamer");
    
    clap1.attack("ConsoleGamer");
    clap1.takeDamage(1);
    clap1.beRepaired(1);
    return (0);
}