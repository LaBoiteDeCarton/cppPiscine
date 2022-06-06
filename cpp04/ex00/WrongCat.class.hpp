#ifndef WRONGCAT_CLASS_HPP
# define WRONGCAT_CLASS_HPP
# include <string>
# include <iostream>
# include "WrongAnimal.class.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat( void );
	WrongCat( WrongCat const & src);
	~WrongCat( void );

	WrongCat&	operator=(WrongCat const & rhs);

	void	makeSound() const;
};

#endif