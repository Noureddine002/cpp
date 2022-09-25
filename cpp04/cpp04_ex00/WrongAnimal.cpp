#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
    std::cout << "WrongAnimal class constructor called" << std::endl;
    this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(WrongAnimal const & wanim){
    *this = wanim;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & wanim){
    if(this != &wanim){
        this->type = wanim.type;
    }
    return *this;
}

WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal class destructor called" << std::endl;
}

std::string WrongAnimal::get_type() const{
    return this->type;
}

void WrongAnimal::makeSound() const{
    std::cout << "Wrong sound !" << std::endl;
}