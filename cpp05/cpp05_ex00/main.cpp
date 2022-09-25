#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat school("school", 15);
		std::cout << school << std::endl;
		school.incremGrade();
		std::cout << school << std::endl;
		school.decremGrade();
		std::cout << school << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat school("school", -5);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat school("school", 200);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl ;
	}

	try
	{
		Bureaucrat school("school", 1);
		school.incremGrade();
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

		try
	{
		Bureaucrat school("school", 150);
		school.decremGrade();
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what()<< std::endl;
	}
}