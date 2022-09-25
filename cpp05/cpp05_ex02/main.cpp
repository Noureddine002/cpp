#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void) {
    try
	{
		Form *n = new ShrubberyCreationForm("home");
		Bureaucrat b("jayjay", 130);
		b.signForm(*n);
		b.executeForm(*n);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}


	try
	{
		Bureaucrat b("kaykay", 40);
		Form *n = new RobotomyRequestForm("Robot");

		b.signForm(*n);
		b.executeForm(*n);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}


	try
	{
		Bureaucrat b("dayday", 5);
		Form *n = new PresidentialPardonForm("president");

		b.signForm(*n);
		b.executeForm(*n);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat b("zayzay", 149);
		Form *n = new ShrubberyCreationForm("home");
		b.signForm(*n);
		b.executeForm(*n);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}