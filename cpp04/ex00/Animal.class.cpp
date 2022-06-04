#include "Animal.class.hpp"

Animal::Animal( void ) : _type ("Animal")
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
	this->_type = rhs._type;
	return (*this);
}

Animal::~Animal( void )
{
	return ;
}

