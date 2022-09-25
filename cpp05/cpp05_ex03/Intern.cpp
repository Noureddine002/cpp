#include "Intern.hpp"

Intern::Intern(){}

Intern::Intern(Intern const & intr){
    *this = intr;
}

Intern & Intern::operator=(Intern const & inter){
    (void)inter;
    return *this;
}

Intern::~Intern(){}

Form *Intern::robot(std::string target){
    Form *f = new RobotomyRequestForm(target);
    std::cout << "Intern creates " << f->get_name() << std::endl;
    return f;
}

Form *Intern::shrub(std::string target){
    Form *f = new ShrubberyCreationForm(target);
    std::cout << "Intern creates " << f->get_name() << std::endl;
    return f;
}

Form *Intern::pres(std::string target){
    Form *f = new PresidentialPardonForm(target);
    std::cout << "Intern creates " << f->get_name() << std::endl;
    return f;
}

const char *Intern::FormNotFoumd::what() const throw(){
    return "Name form is invalid";
}

Form *Intern::makeForm(std::string type, std::string target){
    typedef Form *(Intern::*Forms)(std::string);
    Forms f[3] = {&Intern::robot, &Intern::shrub, &Intern::pres};
    std::string type_f[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
    int i = 0;
    while(i < 3){
        if(type_f[i] == type){
            return ((this->*f[i])(target));
        }
        i++;
    }
    throw Intern::FormNotFoumd();
}