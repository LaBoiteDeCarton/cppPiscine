#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("unknown"), _grade(150)
{
	return ;
}

Bureaucrat::Bureaucrat(std::string name, unsigned int grade): _name(name), _grade(grade)
{
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src)
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
	if (this->_grade == 1)
	{
		// throw exception
	}
	else
	{
		this->_grade--;
	}
}

void				Bureaucrat::downmote( void )
{
	if (this->_grade == 150)
	{
		// throw exception
	}
	else
	{
		this->_grade++;
	}
}


std::ostream &			operator<<( std::ostream & o, Bureaucrat const & rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
	return (o);
}