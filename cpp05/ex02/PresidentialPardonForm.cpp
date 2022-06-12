#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("Presidential Pardon", 25, 5), _target("default")
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("Presidential Pardon", 25, 5), _target(target)
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src): AForm(src.getName(), 25, 5)
{
	*this = src;
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	return ;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(PresidentialPardonForm const & src)
{
	this->setIsSigned(src.getIsSigned());
	this->_target = src.getTarget();
	return (*this);
}

std::string const &		PresidentialPardonForm::getTarget() const
{
	return (this->_target);
}

void					PresidentialPardonForm::_action() const
{
	std::cout << this->_target << " is forbidden for the sins by the powerful Zaphod Beeblebrox. Glory to the Emperor!" << std::endl;
	return ;
}
