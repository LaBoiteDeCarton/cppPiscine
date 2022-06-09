#include "FragTrap.hpp"

FragTrap::FragTrap( void )
{
	std::cout << "FragTrap Default constructor called" << std::endl;
	this->_hitPoint = 100; 
	this->_energyPoint = 100;
	this->_attackDamage = 30;
	this->setName("default");
	return ;
}

FragTrap::FragTrap( std::string name )
{
	std::cout << "FragTrap constructor called" << std::endl;
	this->_hitPoint = 100;
	this->_energyPoint = 100;
	this->_attackDamage = 30;
	this->setName(name);
	return ;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called" << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap const & ct): ClapTrap(ct.getName())
{
	std::cout << "FragTrap Copy constructor called" << std::endl;
	*this = ct;
	return ;
}

FragTrap&	FragTrap::operator=(FragTrap const & ct)
{
	this->setName(ct.getName());
	this->_hitPoint = ct.getHitPoint();
	this->_energyPoint = ct.getEnergyPoint();
	this->_attackDamage = ct.getAttackDamage();
	return (*this);
}

void		FragTrap::attack( const std::string& target )
{
	if (!this->_energyPoint)
	{
		std::cout << "No more energy, FragTrap is tired" << std::endl;
		return ;
	}
	this->_energyPoint--;
	std::cout << "FragTrap " << this->getName();
	std::cout << " attacks " << target;
	std::cout << ", causing "<< this->_attackDamage;
	std::cout << " points of damage!" << std::endl;
	return ;
}

void		FragTrap::highFivesGuys( void )
{
	std::cout << "FragTrap is asking a high five" << std::endl;
}
