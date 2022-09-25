#include "Dog.hpp"

Dog::Dog(){
    std::cout << "Dog class constructor called" << std::endl;
    this->type = "Dog";
}

Dog::Dog(Dog const & d) : Animal(d){
    *this = d;
}

Dog & Dog::operator=(Dog const & d){
    if(this != &d){
        this->type = d.type;
    }
    return *this;
}

Dog::~Dog(){
    std::cout << "Dog class destructor called" << std::endl;
}

void Dog::makeSound() const{
    std::cout << "Wouaf !" << std::endl;
}