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
	std::cout << "HP = " << this->_hitPoint << " | EP = " << this->_energyPoint << " | AD = " << this->_attackDamage << std::endl;
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

std::string	DiamondTrap::getName() const
{
	return (this->_name);
}

int			DiamondTrap::getHitPoint() const
{
	return (this->_hitPoint);
}

int			DiamondTrap::getEnergyPoint() const
{
	return (this->_energyPoint);
}

int			DiamondTrap::getAttackDamage() const
{
	return (this->_attackDamage);
}

void		DiamondTrap::attack(const std::string& target)
{
	return (ScavTrap::attack(target));
}
