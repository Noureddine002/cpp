#include "WrongCat.hpp"

WrongCat::WrongCat(){
    std::cout << "WrongCat class constructor called" << std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const & wc) : WrongAnimal(wc){
    *this = wc;
}

WrongCat & WrongCat::operator=(WrongCat const & wc){
    if(this != &wc){
        this->type = wc.type;
    }
    return *this;
}

WrongCat::~WrongCat(){
    std::cout << "WrongCat class destructor called" << std::endl;
}

// void WrongCat::makeSound() const{
//     std::cout << "Wrong Meow !" << std::endl;
// }