#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void) {
    try {
        Form f1 = Form("form1", 15, 3);
        Bureaucrat b1 = Bureaucrat("scav1", 30);
        Bureaucrat b2 = Bureaucrat("scav2", 1);

        b1.signForm(f1);
        b2.signForm(f1);

        Form f2 = Form("from2", 0, 5);
    }
    catch (std::exception & e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    try
	{
		Form ta("Form3", 50, 10);
		Bureaucrat school("school", 55);
		school.signForm(ta);

	}
	catch (const std::exception &e)
	{
		std::cerr << e.what();
	}

	try
	{
		Form ta("Form4", 50, 10);
		Bureaucrat school("scav3", 49);
		school.signForm(ta);

	}
	catch (const std::exception &e)
	{
		std::cerr << e.what();
	}
}