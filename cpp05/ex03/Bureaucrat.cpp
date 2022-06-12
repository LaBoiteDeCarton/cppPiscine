#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat(): _name("unknown"), _grade(150)
{
	return ;
}

Bureaucrat::Bureaucrat(std::string name, unsigned int grade): _name(name)
{
	if (grade >150)
		throw Bureaucrat::GradeTooLowException();
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade = grade;
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src): _name(src.getName())
{
	*this = src;
	return ;
}

Bureaucrat::~Bureaucrat()
{
	return ;
}

Bureaucrat&			Bureaucrat::operator=(Bureaucrat const & src)
{
	this->_grade = src.getGrade();
	return (*this);
}

void				Bureaucrat::signForm(AForm &	f)
{
	try
	{
		f.beSigned(*this);
		std::cout << this->_name << " signed " << f.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << this->_name << " couldn't sign " << f.getName() << " because " << e.what() << std::endl;
	}
}

void				Bureaucrat::executeForm(AForm const & form)
{
	try
	{
		form.execute(*this);
		std::cout << this->_name << " executed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << this->_name << " couldn't execute " << form.getName() << " because " << e.what() << std::endl;
	}
}

std::string const	Bureaucrat::getName( void ) const
{
	return (this->_name);
}

unsigned short int	Bureaucrat::getGrade( void ) const
{
	return (this->_grade);
}

void				Bureaucrat::promote( void )
{
	if (this->_grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade--;
}

void				Bureaucrat::downmote( void )
{
	if (this->_grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade++;
}

const char *		Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char *		Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

std::ostream &		operator<<( std::ostream & o, Bureaucrat const & rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
	return (o);
}