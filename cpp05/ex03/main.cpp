#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
#include <iostream>

int main ()
{
	try
	{
		Bureaucrat a = Bureaucrat("Bob", 2);
		Bureaucrat b("Roger", 148);
		Bureaucrat c("Ghislaine", 50);

		Intern  someRandomIntern;
    	AForm*   rrf;
    	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		
		AForm *f4;
		f4 = new RobotomyRequestForm("Arnold");

		a.signForm(*f4);
		a.executeForm(*f4);
		b.signForm(*rrf);
		a.signForm(*rrf);
		a.executeForm(*rrf);
		delete f4;
		delete rrf;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	system("leaks Bureaucraty | grep leaked");
	return (0);
}