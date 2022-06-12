#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm( void )
{
	return ;
}

AForm::~AForm( void )
{
	return ;
}

AForm::AForm(std::string const &name, int gts, int gte): _name(name), _gradetosigne(gts), _gradetoexec(gte)
{
	if (gts > 150 || gte > 150)
		throw AForm::GradeTooLowException();
	if (gts < 1 || gte < 1)
		throw AForm::GradeTooHighException();
	this->_issigned = false;
	return ;
}

AForm::AForm(AForm const &src)
{
	this->_gradetoexec = src.getGradeToExec();
	this->_gradetosigne = src.getGradeToSigne();
	this->_issigned = src.getIsSigned();
	return ;
}

void	AForm::execute(Bureaucrat const & executor) const
{
	if ( ! this->_issigned )
		throw AForm::NotSignedException();
	if (executor.getGrade() > this->_gradetoexec)
		throw AForm::GradeTooLowException();
	this->action();
}

void	AForm::beSigned(Bureaucrat const &b)
{
	if (b.getGrade() > this->_gradetosigne)
		throw AForm::GradeTooLowException();
	this->_issigned = true;
	return ;
}

std::string			AForm::getName() const
{
	return (this->_name);
}

bool				AForm::getIsSigned() const
{
	return (this->_issigned);
}

int			AForm::getGradeToSigne() const
{
	return (this->_gradetosigne);
}

int			AForm::getGradeToExec() const
{
	return (this->_gradetoexec);
}

void		AForm::setIsSigned(bool value)
{
	this->_issigned = value;
	return ;
}

const char *		AForm::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char *		AForm::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

const char *		AForm::NotSignedException::what() const throw()
{
	return ("Is not signed");
}

std::ostream &		operator<<( std::ostream & o, AForm const & rhs)
{
	o << "Formulaire \'" << rhs.getName() << "\': GTS(" << rhs.getGradeToSigne() << "), GTE(" << rhs.getGradeToExec() << "),";
	if (rhs.getIsSigned())
		o << "is signed";
	else
		o << "is not signed";
	return (o);
}