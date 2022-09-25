#ifndef _SHRUBBERYCREATIONFORM_HPP
#define _SHRUBBERYCREATIONFORM_HPP
#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form{
private:
    std::string target;
public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(ShrubberyCreationForm const & shru);
    ShrubberyCreationForm & operator=(ShrubberyCreationForm const & shru);
    ~ShrubberyCreationForm();
    void action() const;
};
#endif