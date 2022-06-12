#ifndef AFORM_HPP
# define AFORM_HPP
# include <string>
# include <iostream>
// # include "Bureaucrat.hpp"
class Bureaucrat;

class AForm
{
public:
	AForm();
	AForm(std::string const &name, int gts, int gte);
	AForm(AForm const &src);
	virtual ~AForm();

	void				execute(Bureaucrat const & executor) const;
	void				beSigned(Bureaucrat const &b);
	std::string			getName() const;
	bool				getIsSigned() const;
	int					getGradeToSigne() const;
	int					getGradeToExec() const;
	void				setIsSigned(bool value);

	class GradeTooHighException: public std::exception
	{
	public:
		virtual const char *	what() const throw();
	};
	class GradeTooLowException: public std::exception
	{
	public:
		virtual const char *	what() const throw();
	};
	class NotSignedException: public std::exception
	{
	public:
		virtual const char *	what() const throw();
	};
private:
	virtual void		_action() const = 0;
	std::string const	_name;
	bool				_issigned;
	int					_gradetosigne;
	int					_gradetoexec;
};

std::ostream &			operator<<( std::ostream & o, AForm const & rhs); 

#endif