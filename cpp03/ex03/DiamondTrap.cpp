#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ): ClapTrap("default_clap_name"), _name("default") //ScavTrap(), FragTrap(), 
{
	this->_attackDamage = this->ClapTrap::_attackDamage;
	this->_energyPoint = this->ScavTrap::_energyPoint;
	this->_hitPoint = this->FragTrap::_hitPoint;
}

DiamondTrap::DiamondTrap( std::string name ): ClapTrap(name + "_clap_name"), _name(name) //ScavTrap(), FragTrap(), 
{
	this->_attackDamage = this->ClapTrap::_attackDamage;
	this->_energyPoint = this->ScavTrap::_energyPoint;
	this->_hitPoint = this->FragTrap::_hitPoint;
	return ;
}

DiamondTrap::DiamondTrap( DiamondTrap const & src) : ClapTrap(src.getName()) //ScavTrap(src.getName()), FragTrap(src.getName())
{
	this->_name = src.getName();
	//this->ClapTrap::setName(src.getName() + "_clap_name");
	this->_attackDamage = this->ClapTrap::_attackDamage;
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
