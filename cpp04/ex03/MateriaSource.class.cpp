#include "MateriaSource.class.hpp"

MateriaSource::MateriaSource( void )
{
	return ;
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
	*this = src;
	return ;
}

MateriaSource::~MateriaSource( void )
{
	for (int i = 0; i < 4; i++)
		if (this->_inventory[i])
			delete this->_inventory[i];
	return ;
}


MateriaSource&	MateriaSource::operator=(MateriaSource const & src)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
		this->_inventory[i] = src.getItem(i)->clone();
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria* item)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
		{
			this->_inventory[i] = item;
			break ;
		}
	}
	return ;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] && this->_inventory[i]->getType() == type)
			return (this->_inventory[i]->clone());
	}
	return (NULL);
}

AMateria*		MateriaSource::getItem(int idx) const
{
	return (this->_inventory[idx]);
}
