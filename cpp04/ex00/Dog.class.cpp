#include "Dog.class.hpp"

Dog::Dog( void ) : _type ("Dog")
{
	return ;
}

Dog::Dog( Dog const & src)
{
	*this = src;
	return ;
}

Dog&	Dog::operator=(Dog const & rhs)
{
	this->_type = rhs._type;
	return (*this);
}

Dog::~Dog( void )
{
	return ;
}

