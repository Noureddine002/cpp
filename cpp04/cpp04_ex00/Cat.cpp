#include "Cat.hpp"

Cat::Cat(){
    std::cout << "Cat class constructor called" << std::endl;
    this->type = "Cat";
}

Cat::Cat(Cat const & c) : Animal(c){
    *this = c;
}

Cat & Cat::operator=(Cat const & c){
    if(this != &c){
        this->type = c.type;
    }
    return *this;
}

Cat::~Cat(){
    std::cout << "Cat class destructor called" << std::endl;
}

void Cat::makeSound() const{
    std::cout << "Meow !" << std::endl;
}