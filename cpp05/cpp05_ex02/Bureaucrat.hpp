#ifndef _BUREAUCRAT_HPP
#define _BUREAUCRAT_HPP
class Bureaucrat;
#include <iostream>
#include <string>
#include "Form.hpp"

class  Bureaucrat{
private:
    std::string const Name;
    int Grade;
public:
    Bureaucrat();
    Bureaucrat(std::string Name, int Grade);
    Bureaucrat(Bureaucrat const & bur);
    Bureaucrat & operator=(Bureaucrat const & bur);
    ~Bureaucrat();
    std::string getName() const;
    int getGrade() const;
    void incremGrade();
    void decremGrade();
    void signForm(Form & f);
    void executeForm(Form const & f);
    class GradeTooHighException : public std::exception{
    public:
        const char *what() const throw();
    };
    class GradeTooLowException : public std::exception{
    public:
        const char *what() const throw();
    };
};

std::ostream & operator<<(std::ostream &out, Bureaucrat const &bur);

#endif