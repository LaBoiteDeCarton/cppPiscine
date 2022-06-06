#include "Animal.class.hpp"

AAnimal::AAnimal( void ) : _type ("AAnimal")
{
	return ;
}

AAnimal::AAnimal( std::string type ): _type(type)
{
	return ;
}

AAnimal::AAnimal( AAnimal const & src)
{
	*this = src;
	return ;
}

// AAnimal&	AAnimal::operator=(AAnimal const & rhs)
// {
// 	this->_type = rhs.getType();
// 	return (*this);
// }

AAnimal::~AAnimal( void )
{
	return ;
}

std::string		AAnimal::getType() const
{
	return (this->_type);
}
