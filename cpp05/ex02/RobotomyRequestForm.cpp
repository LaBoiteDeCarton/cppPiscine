#include "RobotomyRequestForm.hpp"
#include <sys/time.h>

RobotomyRequestForm::RobotomyRequestForm(): AForm("Robotomy Request", 72, 45), _target("default")
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("Robotomy Request", 72, 45), _target(target)
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src): AForm(src.getName(), 72, 45)
{
	*this = src;
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	return ;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(RobotomyRequestForm const & src)
{
	this->setIsSigned(src.getIsSigned());
	this->_target = src.getTarget();
	return (*this);
}

std::string const &		RobotomyRequestForm::getTarget() const
{
	return (this->_target);
}

void					RobotomyRequestForm::_action() const
{
	int i;

	srand(time(NULL));
	i = rand() % 2;
	std::cout << "* drill noise *" << std::endl;
	if (i)
		std::cout << "Robotomy request succefully executed!" << std::endl;
	else
		std::cout << "Robotomy request failed, too much free will in there ..." << std::endl;
	return ;
}