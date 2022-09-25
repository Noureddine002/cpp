#ifndef _PRESIDENTIALPARDONFORM_HPP
#define _PRESIDENTIALPARDONFORM_HPP
#include "Form.hpp"

class PresidentialPardonForm : public Form{
private:
    std::string target;
public:
    PresidentialPardonForm();
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(PresidentialPardonForm const & pres);
    PresidentialPardonForm & operator=(PresidentialPardonForm const & pres);
    ~PresidentialPardonForm();
    void action() const;
};

#endif