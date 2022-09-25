#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():Form("PresidentialPardonForm", 25, 5){
    this->target = "";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target):Form("PresidentialPardonForm", 25, 5){
    this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & pres):Form("PresidentialPardonForm", 25, 5){
    this->target = pres.target;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & pres){
    this->target = pres.target;
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm(){}

void PresidentialPardonForm::action() const{
    std::cout << this->target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
