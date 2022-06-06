#include "Cat.class.hpp"

Cat::Cat( void ) : AAnimal("Cat")
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

AAnimal&	Cat::operator=(AAnimal const & rhs)
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

void			Cat::printIdeas() const
{
	for (int i = 0; i < 100; i++)
	{
		if (this->_brain->getIdea(i).empty())
			break;
		std::cout << "Idea number " << i + 1 << " " << this->_brain->getIdea(i) << std::endl;
	}
}

void			Cat::addIdea(std::string idea)
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

