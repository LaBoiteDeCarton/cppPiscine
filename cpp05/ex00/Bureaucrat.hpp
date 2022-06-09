#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <string>
# include <iostream>

class Bureaucrat
{
public:
	Bureaucrat();
	Bureaucrat(std::string name, unsigned int grade);
	Bureaucrat(Bureaucrat const &src);
	~Bureaucrat();

	Bureaucrat&					operator=(Bureaucrat const & src);

	std::string const			getName( void ) const;
	unsigned short int			getGrade( void ) const;
	void						promote( void );
	void						downmote( void );

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
	std::string const			_name;
	int							_grade;
};

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & rhs);

#endif