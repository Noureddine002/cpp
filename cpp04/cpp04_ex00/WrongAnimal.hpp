#ifndef _WRONGANIMAL_HPP 
#define _WRONGANIMAL_HPP 

#include <iostream>
#include <string>

class WrongAnimal {
protected:
    std::string type;
public:
    WrongAnimal();
    WrongAnimal(WrongAnimal const & wanim);
    WrongAnimal & operator=(WrongAnimal const & wanim);
    virtual ~WrongAnimal();
    std::string get_type() const;
    virtual void makeSound() const;  
};
#endif