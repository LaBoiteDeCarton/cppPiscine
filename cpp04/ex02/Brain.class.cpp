#include "Brain.class.hpp"

Brain::Brain( void )
{
	std::cout << "default constructeur Brain called" << std::endl;
}

Brain::Brain( Brain const & b )
{
	std::cout << "Copy constructeur Brain called" << std::endl;
	*this = b;
}

Brain::~Brain( void )
{
	std::cout << "destructeur Brain called" << std::endl;
}

Brain&		Brain::operator=(Brain const & rhs)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = rhs.getIdea(i);
	return (*this);
}

std::string	Brain::getIdea(int index) const
{
	return (this->ideas[index]);
}

void		Brain::putIdea(int index, std::string idea )
{
	this->ideas[index] = idea;
}