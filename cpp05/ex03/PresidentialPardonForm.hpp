#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include "AForm.hpp"
# include <string>

class PresidentialPardonForm: public AForm
{
public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm const &src);
	~PresidentialPardonForm();

	PresidentialPardonForm&	operator=(PresidentialPardonForm const & src);

	void					action() const;
	std::string const &		getTarget() const;
private:
	std::string				_target;
};

#endif