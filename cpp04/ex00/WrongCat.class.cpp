#include "WrongCat.class.hpp"

WrongCat::WrongCat( void ) : WrongAnimal("WrongCat")
{
	return ;
}

WrongCat::WrongCat( WrongCat const & src)
{
	*this = src;
	return ;
}

WrongCat&	WrongCat::operator=(WrongCat const & rhs)
{
	this->_type = rhs.getType();
	return (*this);
}

WrongCat::~WrongCat( void )
{
	return ;
}

void	WrongCat::makeSound() const
{
	std::cout << "Miaou Miaou !" << std::endl;
}

