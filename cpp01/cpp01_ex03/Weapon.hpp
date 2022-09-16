#ifndef _WEAPON_HPP
#define _WEAPON_HPP
#include <iostream>

class Weapon {
private:
    std::string type;
public:
    Weapon(); 
    Weapon(std::string type);
    ~Weapon();
    const std::string &get_type();
    void set_type(std::string t);
};

#endif