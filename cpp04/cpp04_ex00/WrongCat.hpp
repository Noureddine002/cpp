#ifndef _WRONGCAT_HPP
#define _WRONGCAT_HPP
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
public:
    WrongCat();
    WrongCat(WrongCat const & wc);
    WrongCat & operator=(WrongCat const & wc);
    ~WrongCat();
};
#endif