#ifndef ANIMAL_CLASS_HPP
# define ANIMAL_CLASS_HPP
# include <string>
# include <iostream>

class Animal
{
public:
	Animal( void );
	Animal( std::string type );
	Animal( Animal const & src);
	virtual ~Animal( void );

	Animal&	operator=(Animal const & rhs);

	virtual void	makeSound() const;
	std::string		getType() const;
protected:
	std::string	_type;
};

#endif