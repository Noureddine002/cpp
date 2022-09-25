#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main(){
    ScavTrap scav("opatchki");
    scav.guardGate();
    scav.attack("pmc");
    scav.beRepaired(5);
}