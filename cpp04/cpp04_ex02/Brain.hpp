#ifndef _BRAIN_HPP
#define _BRAIN_HPP
#include <iostream>
#include <string>

class Brain {
private:
    std::string ideas[100];
public:
    Brain();
    Brain(Brain const & br);
    Brain & operator=(Brain const & br);
    ~Brain();
    std::string *getIdeas() const;
};
#endif