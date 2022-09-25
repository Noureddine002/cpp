#include "Dog.hpp"

Dog::Dog(){
    std::cout << "Dog class constructor called" << std::endl;
    this->br = new Brain();
    this->type = "Dog";
}

Dog::Dog(Dog const & d) : Animal(d){
    *this = d;
}

Dog & Dog::operator=(Dog const & d){
    if(this != &d){
        this->br = new Brain(*d.br);
        this->type = d.type;
    }
    return *this;
}

Dog::~Dog(){
    delete this->br;
    std::cout << "Dog class destructor called" << std::endl;
}

void Dog::makeSound() const{
    std::cout << "Wouaf !" << std::endl;
}