#ifndef WRONGANIMAL_CLASS_HPP
# define WRONGANIMAL_CLASS_HPP
# include <string>
# include <iostream>

class WrongAnimal
{
public:
	WrongAnimal( void );
	WrongAnimal( std::string type );
	WrongAnimal( WrongAnimal const & src);
	~WrongAnimal( void );

	WrongAnimal&	operator=(WrongAnimal const & rhs);

	void	makeSound() const;
	std::string		getType() const;
protected:
	std::string	_type;
};

#endif