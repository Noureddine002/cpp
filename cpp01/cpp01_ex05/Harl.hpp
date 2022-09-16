#ifndef _HARL_HPP
#define _HARL_HPP
#include <iostream>

class Harl {
private:
    void DEBUG();
    void INFO();
    void WARNING();
    void ERROR();
public:
    void complain(std::string level);
};

#endif