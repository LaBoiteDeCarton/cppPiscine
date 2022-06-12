#ifndef FORM_HPP
# define FORM_HPP
# include <string>
# include <iostream>
class Form
{
public:
	Form();
	Form(std::string const &name, int gts, int gte);
	Form(Form const &src);
	~Form();

	Form				operator=(Form const & rhs);

	std::string			getName() const;
	bool				getIsSigned() const;
	int					getGradeToSigne() const;
	int					getGradeToExec() const;

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
private:
	std::string const	_name;
	bool				_issigned;
	int					_gradetosigne;
	int					_gradetoexec;
};

std::ostream &			operator<<( std::ostream & o, Form const & rhs); 

#endif