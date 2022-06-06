#include "Dog.class.hpp"

Dog::Dog( void ) : AAnimal("Dog")
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

AAnimal&	Dog::operator=(AAnimal const & rhs)
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

void			Dog::printIdeas() const
{
	std::cout << "Printing Ideas" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		if (this->_brain->getIdea(i).empty())
			break;
		std::cout << "Idea number " << i + 1 << " " << this->_brain->getIdea(i) << std::endl;
	}
}

void			Dog::addIdea(std::string idea)
{
	int i;

	for (i = 0; i < 100; i++)
		if (this->_brain->getIdea(i).empty())
			break;
	if (i >= 100)
		std::cout << "Brain overload" << std::endl;
	else
		this->_brain->putIdea(i, idea);
}
