#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : _name(name)
{
	this->_weapon = NULL;
	return ;
}

HumanB::HumanB( std::string name, Weapon &weapon ) : _name(name)
{
	this->_weapon = &weapon;
	return ;
}

HumanB::~HumanB( void )
{
	return ;
}

void		HumanB::setWeapon( Weapon &weapon)
{
	this->_weapon = &weapon;
	return ;
}

void	HumanB::attack( void ) const
{
	if (this->_weapon)
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
	else
		std::cout << this->_name << " waves his arms frantically creating a slight breeze" << std::endl;
}
