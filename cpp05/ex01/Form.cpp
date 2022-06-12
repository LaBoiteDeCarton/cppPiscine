#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form( void )
{
	return ;
}

Form::~Form( void )
{
	return ;
}

Form::Form(std::string const &name, int gts, int gte): _name(name), _gradetosigne(gts), _gradetoexec(gte)
{
	if (gts > 150 || gte > 150)
		throw Form::GradeTooLowException();
	if (gts < 1 || gte < 1)
		throw Form::GradeTooHighException();
	this->_issigned = false;
	return ;
}

Form::Form(Form const &src)
{
	*this = src;
	return ;
}

Form		Form::operator=(Form const & rhs)
{
	this->_gradetosigne = rhs.getGradeToSigne();
	this->_gradetoexec = rhs.getGradeToExec();
	this->_issigned = rhs.getIsSigned();
	return (*this);
}

void				Form::beSigned(Bureaucrat const &b)
{
	if (b.getGrade() > this->_gradetosigne)
		throw Form::GradeTooLowException();
	this->_issigned = true;
	return ;
}

std::string			Form::getName() const
{
	return (this->_name);
}

bool				Form::getIsSigned() const
{
	return (this->_issigned);
}

int			Form::getGradeToSigne() const
{
	return (this->_gradetosigne);
}

int			Form::getGradeToExec() const
{
	return (this->_gradetoexec);
}

const char *		Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char *		Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

std::ostream &		operator<<( std::ostream & o, Form const & rhs)
{
	o << "Formulaire \'" << rhs.getName() << "\': GTS(" << rhs.getGradeToSigne() << "), GTE(" << rhs.getGradeToExec() << "), is ";
	if (!rhs.getIsSigned())
		o << "not ";
	o << "signed";
	return (o);
}