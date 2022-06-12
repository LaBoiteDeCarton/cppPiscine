#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include "AForm.hpp"
# include <string>

class RobotomyRequestForm: public AForm
{
public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const &src);
	~RobotomyRequestForm();

	RobotomyRequestForm&	operator=(RobotomyRequestForm const & src);

	std::string const &		getTarget() const;
private:
	void					_action() const;
	std::string				_target;
};

#endif