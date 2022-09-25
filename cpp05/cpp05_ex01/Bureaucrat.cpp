#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){}

Bureaucrat::Bureaucrat(std::string n, int g):Name(n){
    if(g < 1){
        throw GradeTooHighException();
    }
    if(g > 150){
        throw GradeTooLowException();
    }
    this->Grade = g;
}

Bureaucrat::Bureaucrat(Bureaucrat const & bur){
    *this = bur;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & bur){
    if(this != &bur){
        this->Grade = bur.Grade;
    }
    return *this;
}

Bureaucrat::~Bureaucrat(){}

std::string Bureaucrat::getName() const{
    return this->Name;
}

int Bureaucrat::getGrade() const{
    return this->Grade;
}

void Bureaucrat::incremGrade(){
    if(this->Grade > 1 && this->Grade < 150){
        this->Grade--;
    }
    else{
        throw Bureaucrat::GradeTooHighException();
    }
}

void Bureaucrat::decremGrade(){
    if(this->Grade < 150 && this->Grade > 1){
        this->Grade++;
    }
    else{
        throw Bureaucrat::GradeTooLowException();
    }
}

void Bureaucrat::signForm(Form & f){
    try {
        f.beSigned(*this);
        std::cout << this->getName() << " signed" << f.get_name() << std::endl;
    }
    catch(std::exception & ex){
        std::cout << this->getName() << " cannot sign" << f.get_name() << " reason :" << ex.what() << std::endl;
    }
}

const char * Bureaucrat::GradeTooHighException::what() const throw(){
    return "grade too high";
}

const char * Bureaucrat::GradeTooLowException::what() const throw(){
    return "grade too low";
}

std::ostream & operator<<(std::ostream &out, Bureaucrat const &bur){
    out << bur.getName() << " grade : " << bur.getGrade();
    return out;
}