#ifndef DOG_CLASS_HPP
# define DOG_CLASS_HPP
# include <string>
# include "Animal.class.hpp"

class Dog : public Animal
{
public:
	Dog( void );
	Dog( Dog const & src);

	Dog&	operator=(Dog const & rhs);
	~Dog( void );
protected:
	std::string	_type;
};

#endif