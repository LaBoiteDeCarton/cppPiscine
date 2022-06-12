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
		PresidentialPardonForm f1("Voleur de l'orange du marchand");
		RobotomyRequestForm f2("Elon Musk");
		ShrubberyCreationForm f3("Versaille");
		AForm *f4;
		f4 = new RobotomyRequestForm("Arnold");

		Intern  someRandomIntern;
    	AForm*   rrf;
    	rrf = someRandomIntern.makeForm("robotomy request", "Bender");

		a.signForm(f1); // peux signer
		b.signForm(f1); // ne peux pas signer
		a.executeForm(f1); // peux executer
		c.executeForm(f1); // ne peux pas executer
		a.executeForm(f2); // ne peux executer car pas signé
		c.signForm(f2); // signature OK
		a.executeForm(f2); // Ok une fois sur deux
		b.signForm(f3); // ne peux pas signer
		c.signForm(f3);
		c.executeForm(f3);
		c.executeForm(f3);
		c.executeForm(f3);
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