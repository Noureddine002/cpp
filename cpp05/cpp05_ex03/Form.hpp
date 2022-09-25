#ifndef _FORM_HPP
#define _FORM_HPP
class Form;
#include "Bureaucrat.hpp"

class Form{
private:
    std::string const Name;
    bool SignedStatus;
    const int GradeSign;
    const int GradeExec;
public:
    Form();
    Form(std::string Name, int sign, int exec);
    Form(Form const & f);
    Form & operator=(Form const & f);
    virtual ~Form();
    std::string get_name() const;
    bool get_sign_status() const;
    int get_grade_sign() const;
    int get_grade_exec() const;
    void beSigned(Bureaucrat & b);
    void execute(Bureaucrat const & b) const;
    virtual void action() const = 0;
    class GradeTooHighException : public std::exception{
    public:
        const char *what() const throw();
    };
    class GradeTooLowException : public std::exception{
    public:
        const char *what() const throw();
    };
};

std::ostream & operator<<(std::ostream & out, Form const & f);

#endif