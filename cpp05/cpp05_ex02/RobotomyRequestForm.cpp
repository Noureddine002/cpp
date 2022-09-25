#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():Form("RobotomyRequestForm",72,45){
    this->target = "";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target):Form("RobotomyRequestForm",72,45){
    this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & robot):Form("RobotomyRequestForm",72,45){
    this->target = robot.target;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & robot){
    this->target = robot.target;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(){}

void RobotomyRequestForm::action() const{
    int t;
    t = time(NULL);
    if(t % 2){
        std::cout << this->target << " has been robotomized successfully "  << std::endl;
    }
    else{
        std::cout << this->target << " has failed "  << std::endl;
    }
}