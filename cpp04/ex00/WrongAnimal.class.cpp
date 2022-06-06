#include "WrongAnimal.class.hpp"

WrongAnimal::WrongAnimal( void ) : _type ("WrongAnimal")
{
	return ;
}

WrongAnimal::WrongAnimal( std::string type ): _type(type)
{
	return ;
}

WrongAnimal::WrongAnimal( WrongAnimal const & src)
{
	*this = src;
	return ;
}

WrongAnimal&	WrongAnimal::operator=(WrongAnimal const & rhs)
{
	this->_type = rhs.getType();
	return (*this);
}

WrongAnimal::~WrongAnimal( void )
{
	return ;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "*the unknown Wronganimal make a whistle sound*" << std::endl;
}

std::string		WrongAnimal::getType() const
{
	return (this->_type);
}
