#include "Form.hpp"

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

std::ostream &		operator<<( std::ostream & o, Form const & rhs)
{
	o << "Formulaire \'" << rhs.getName() << "\': GTS(" << rhs.getGradeToSigne() << "), GTE(" << rhs.getGradeToExec() << "),";
	if (rhs.getIsSigned())
		o << "is signed";
	else
		o << "is not signed";
	return (o);
}