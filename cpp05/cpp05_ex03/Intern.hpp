#ifndef _INTERN_HPP
#define _INTERN_HPP
#include <iostream>
#include <string>
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern {
public:
    Intern();
    Intern(Intern const & intr);
    Intern & operator=(Intern const & intr);
    ~Intern();
    Form *robot(std::string target);
    Form *shrub(std::string target);
    Form *pres(std::string target);
    class FormNotFoumd : public std::exception{
    public:
        const char *what() const throw();
    };
    Form *makeForm(std::string type, std::string target);
};

#endif