#include "Form.hpp"

Form::Form() : Name(""), GradeSign(0), GradeExec(0){
    this->SignedStatus = false;
}

Form::Form(std::string Name, int sign, int exec) : Name(Name), GradeSign(sign), GradeExec(exec){
    if(GradeSign < 1 || GradeExec < 1)
        throw GradeTooHighException();
    if(GradeSign > 150 || GradeExec > 150)
        throw GradeTooLowException();
    this->SignedStatus = false;
}

Form::Form(Form const & f) : Name(f.Name), GradeSign(f.GradeSign), GradeExec(f.GradeExec){
    *this = f;
}

Form & Form::operator=(Form const & f){
    if(this != & f){
        this->SignedStatus = f.SignedStatus;
    }
    return *this;
}

Form::~Form(){}

std::string Form::get_name() const{
    return this->Name;
}

bool Form::get_sign_status() const{
    return this->SignedStatus;
}

int Form::get_grade_sign() const{
    return this->GradeSign;
}

int Form::get_grade_exec() const{
    return this->GradeExec;
}

void Form::beSigned(Bureaucrat & b){
    if(b.getGrade() <= this->get_grade_sign())
        this->SignedStatus = true;
    else{
        throw GradeTooLowException();
    }
}

void Form::execute(Bureaucrat const & b) const {
    if(!this->get_grade_sign()){
        std::cout << " the form is not signed !!" << std::endl;
        return ;
    }
    if(this->get_grade_exec() < b.getGrade()){
        throw GradeTooLowException();
    }
    this->action();
    std::cout << b.getName() << " has executed the form : " << this->get_name() << std::endl;
}

const char * Form::GradeTooHighException::what() const throw(){
    return "grade too high";
}

const char * Form::GradeTooLowException::what() const throw(){
    return "grade too low";
}

std::ostream & operator<< (std::ostream & out, Form const & f){
    if(f.get_grade_sign()){
        out << " Name : " << f.get_name() << " SigneGrade : " << f.get_grade_sign() << " ExecuteGrade : " << f.get_grade_exec() << " Form is signed\n";
    }
    else{
        out << " Name : " << f.get_name() << " SigneGrade : " << f.get_grade_sign() << " ExecuteGrade : " << f.get_grade_exec() << " Form is not signed\n";
    }
    return out;
}