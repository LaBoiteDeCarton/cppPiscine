#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern( void )
{
	return ;
}

Intern::Intern( Intern const &i)
{
	*this = i;
	return ;
}

Intern::~Intern()
{
	return ;
}

Intern&	Intern::operator=(Intern const &rhs)
{
	(void)rhs;
	return (*this);
}

AForm*	Intern::makeForm( std::string form, std::string target)
{
	std::string formList[3] = {"presidential pardon","robotomy request","shrubbery creation"};
	int i;

	for (i = 0; i < 3; i++)
		if (!formList[i].compare(form))
			break ;
	switch (i)
	{
		case 0: return (new PresidentialPardonForm(target));
		case 1: return (new RobotomyRequestForm(target));
		case 2: return (new ShrubberyCreationForm(target));
		default: throw Intern::InternalFormException();
	}
	std::cout << "Intern creates " << form << std::endl;
}

const char *	Intern::InternalFormException::what() const throw()
{
	return ("Form doesn't exist");
}