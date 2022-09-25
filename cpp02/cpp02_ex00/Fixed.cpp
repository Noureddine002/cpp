#include "Fixed.hpp"

Fixed::Fixed(){
    std::cout << "Default constructor called" << std::endl;
    this->n_fix = 0;
}

Fixed::Fixed(Fixed const & fix){
    std::cout << "Copy constructor called" << std::endl;
    this->n_fix = fix.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &fix){
    std::cout << "Copy assignment operator called" << std::endl;
    this->n_fix = fix.getRawBits();
    return *this;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->n_fix);
}

void Fixed::setRawBits(int const raw){
    std::cout << "setRawBits member function calledn" << std::endl;
    this->n_fix = raw;
}