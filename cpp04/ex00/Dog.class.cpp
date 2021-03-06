#include "Dog.class.hpp"

Dog::Dog( void ) : Animal("Dog")
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
	this->_type = rhs.getType();
	return (*this);
}

Dog::~Dog( void )
{
	return ;
}

void	Dog::makeSound() const
{
	std::cout << "Wouf wouf !" << std::endl;
}

