#include "Character.class.hpp"

Character::Character( void ): _name("unknown stranger")
{
	return ;
}

Character::Character( std::string const & name ): _name(name)
{
	return ;
}

Character::Character( Character const &src)
{
	*this = src;
	return ;
}

Character::~Character( void )
{
	this->_clearInventory();
	return ;
}

Character&			Character::operator=(Character const & src)
{
	this->_clearInventory();
	for (int i = 0; i < 4; i++)
		this->equip(src.getItem(i)->clone());
	return (*this);
}

std::string const &	Character::getName( void ) const
{
	return (this->_name);
}

void	Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!(this->_inventory)[i])
		{
			this->_inventory[i] = m;
			break ;
		}	
	}
	return ;
}

void	Character::unequip(int idx)
{
	this->_inventory[idx] = NULL;
	return ;
}

void	Character::use(int idx, ICharacter& target)
{
	return (this->_inventory[idx]->use(target));
}

AMateria*			Character::getItem(int idx) const
{
	return (this->_inventory[idx]);
}

void	Character::_clearInventory( void )
{
	for (int i = 0; i < 4; i++)
		if (this->_inventory[i])
			delete this->_inventory[i];
}