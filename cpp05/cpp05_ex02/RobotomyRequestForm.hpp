#ifndef _ROBOTOMYREQUESTFORM_HPP
#define _ROBOTOMYREQUESTFORM_HPP
#include "Form.hpp"

class RobotomyRequestForm : public Form{
private:
    std::string target;
public:
    RobotomyRequestForm();
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(RobotomyRequestForm const & robot);
    RobotomyRequestForm & operator=(RobotomyRequestForm const & robot);
    ~RobotomyRequestForm();
    void action() const;
};

#endif