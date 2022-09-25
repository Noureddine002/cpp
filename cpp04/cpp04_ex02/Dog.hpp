#ifndef _DOG_HPP
#define _DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
public:
    Dog();
    Dog(Dog const & c);
    Dog & operator=(Dog const & c);
    ~Dog();
    void makeSound() const;
private:
    Brain *br;
};
#endif