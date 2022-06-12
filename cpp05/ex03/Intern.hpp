#ifndef INTERN_HPP
# define INTERN_HPP
# include <string>
# include "AForm.hpp"

class Intern
{
public:
	Intern( void );
	Intern( Intern const &i);
	~Intern( void );

	Intern&	operator=(Intern const &rhs);
	AForm*	makeForm( std::string form, std::string target);

	class InternalFormException: public std::exception
	{
	public:
		virtual const char *	what() const throw();
	};
};

#endif