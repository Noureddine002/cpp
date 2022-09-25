#ifndef _CAT_HPP
#define _CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
public:
    Cat();
    Cat(Cat const & c);
    Cat & operator=(Cat const & c);
    ~Cat();
    void makeSound() const;
private:
    Brain *br;
};
#endif