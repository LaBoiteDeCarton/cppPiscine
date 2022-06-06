#include "Cat.class.hpp"

Cat::Cat( void ) : Animal("Cat")
{
	this->_brain = new Brain();
	return ;
}

Cat::Cat( Cat const & src)
{
	*this = src;
	return ;
}

Cat&	Cat::operator=(Cat const & rhs)
{
	this->_type = rhs.getType();
	*(this->_brain) = rhs.getBrain();
	return (*this);
}

Cat::~Cat( void )
{
	delete this->_brain;
	return ;
}

void	Cat::makeSound() const
{
	std::cout << "Miaou Miaou !" << std::endl;
}

const Brain &	Cat::getBrain() const
{
	return (*(this->_brain));
}

