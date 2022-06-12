#ifndef SCHRUBBERYCREATIONFORM_HPP
# define SCHRUBBERYCREATIONFORM_HPP
# include "AForm.hpp"
# include <string>

class ShrubberyCreationForm: public AForm
{
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const &src);
	~ShrubberyCreationForm();

	ShrubberyCreationForm&	operator=(ShrubberyCreationForm const & src);

	std::string const &		getTarget() const;
	
	class OpenFileException: public std::exception
	{
	public:
		virtual const char *	what() const throw();
	};
private:
	void					_action() const;
	std::string				_target;
};

#endif