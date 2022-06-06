#include "Animal.class.hpp"

Animal::Animal( void ) : _type ("Animal")
{
	return ;
}

Animal::Animal( std::string type ): _type(type)
{
	return ;
}

Animal::Animal( Animal const & src)
{
	*this = src;
	return ;
}

Animal&	Animal::operator=(Animal const & rhs)
{
	this->_type = rhs.getType();
	return (*this);
}

Animal::~Animal( void )
{
	return ;
}

void	Animal::makeSound() const
{
	std::cout << "*the unknown animal make a whistle sound*" << std::endl;
}

std::string		Animal::getType() const
{
	return (this->_type);
}
