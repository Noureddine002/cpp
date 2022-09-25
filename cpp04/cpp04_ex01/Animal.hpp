#ifndef _ANIMAL_HPP 
#define _ANIMAL_HPP 

#include <iostream>
#include <string>

class Animal {
protected:
    std::string type;
public:
    Animal();
    Animal(Animal const & anim);
    Animal & operator=(Animal const & anim);
    virtual ~Animal();
    std::string get_type() const;
    virtual void makeSound() const;  
};
#endif