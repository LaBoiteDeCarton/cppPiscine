#include "Dog.class.hpp"

Dog::Dog( void ) : Animal("Dog")
{
	this->_brain = new Brain();
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
	*(this->_brain) = rhs.getBrain();
	return (*this);
}

Dog::~Dog( void )
{
	delete this->_brain;
	return ;
}

void	Dog::makeSound() const
{
	std::cout << "Wouf wouf !" << std::endl;
}

const Brain &	Dog::getBrain() const
{
	return (*(this->_brain));
}
