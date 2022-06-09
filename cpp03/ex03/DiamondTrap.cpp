#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void )
{
	this->ClapTrap::setName("default_clap_name");
	this->_attackDamage = this->FragTrap::_attackDamage;
	this->_energyPoint = this->ScavTrap::_energyPoint;
	this->_hitPoint = this->FragTrap::_hitPoint;
	this->_name = "default";
}

DiamondTrap::DiamondTrap( std::string name )
{
	this->ClapTrap::setName(name + "_clap_name");
	this->_name = name;
	this->_attackDamage = this->FragTrap::_attackDamage;
	this->_energyPoint = this->ScavTrap::_energyPoint;
	this->_hitPoint = this->FragTrap::_hitPoint;
	return ;
}

DiamondTrap::DiamondTrap( DiamondTrap const & src)
{
	this->_name = src.getName();
	this->_attackDamage = this->FragTrap::_attackDamage;
	this->_energyPoint = this->ScavTrap::_energyPoint;
	this->_hitPoint = this->FragTrap::_hitPoint;
}

DiamondTrap::~DiamondTrap()
{
	return ;
}

DiamondTrap&	DiamondTrap::operator=(DiamondTrap const & ct)
{
	this->setName(ct.getName());
	this->_hitPoint = ct.getHitPoint();
	this->_energyPoint = ct.getEnergyPoint();
	this->_attackDamage = ct.getAttackDamage();
	return (*this);
}

void DiamondTrap::whoAmI( void )
{
	std::cout << "I'm " << this->_name << " my ClapTrap name is " << this->ClapTrap::getName() << std::endl;
}

void	DiamondTrap::attack( const std::string& target )
{
	ScavTrap::attack(target);
	return ;
}