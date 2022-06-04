#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap("default")
{
	std::cout << "ScavTrap Default constructor called" << std::endl;
	this->_hitPoint = 100;
	this->_energyPoint = 50;
	this->_attackDamage = 20;
	return ;
}

ScavTrap::ScavTrap( std::string name ): ClapTrap(name)
{
	std::cout << "ScavTrap Default constructor called" << std::endl;
	this->_hitPoint = 100;
	this->_energyPoint = 50;
	this->_attackDamage = 20;
	return ;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const & ct): ClapTrap(ct.getName())
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	this->_hitPoint = ct.getHitPoint();
	this->_energyPoint = ct.getEnergyPoint();
	this->_attackDamage = ct.getAttackDamage();
	return ;
}

ScavTrap&	ScavTrap::operator=(ScavTrap const & ct)
{
	this->setName(ct.getName());
	this->_hitPoint = ct.getHitPoint();
	this->_energyPoint = ct.getEnergyPoint();
	this->_attackDamage = ct.getAttackDamage();
	return (*this);
}

void		ScavTrap::attack( const std::string& target )
{
	if (!this->_energyPoint)
	{
		std::cout << "No more energy, ScavTrap is tired" << std::endl;
		return ;
	}
	this->_energyPoint--;
	std::cout << "ScavTrap " << this->getName();
	std::cout << " attacks " << target;
	std::cout << ", causing "<< this->_attackDamage;
	std::cout << " points of damage!" << std::endl;
	return ;
}

void		ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in *Guard Mode*" << std::endl;
}
