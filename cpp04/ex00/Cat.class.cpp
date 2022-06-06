#include "Cat.class.hpp"

Cat::Cat( void ) : Animal("Cat")
{
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
	return (*this);
}

Cat::~Cat( void )
{
	return ;
}

void	Cat::makeSound() const
{
	std::cout << "Miaou Miaou !" << std::endl;
}

