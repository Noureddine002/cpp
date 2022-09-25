#include "Animal.hpp"

Animal::Animal(){
    std::cout << "Animal class constructor called" << std::endl;
    this->type = "Animal";
}

Animal::Animal(Animal const & anim){
    *this = anim;
}

Animal & Animal::operator=(Animal const & anim){
    if(this != &anim){
        this->type = anim.type;
    }
    return *this;
}

Animal::~Animal(){
    std::cout << "Animal class destructor called" << std::endl;
}

std::string Animal::get_type() const{
    return this->type;
}

void Animal::makeSound() const{}