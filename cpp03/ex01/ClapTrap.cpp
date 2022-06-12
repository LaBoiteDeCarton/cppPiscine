#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : _name("default"), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
	return ;
}

ClapTrap::ClapTrap( std::string name ): _name(name), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
	std::cout << "ClapTrap Default constructor called" << std::endl;
	return ;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const &ct)
{
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	*this = ct;
	return ;
}

ClapTrap&	ClapTrap::operator=(ClapTrap const & ct)
{
	this->_name = ct.getName();
	this->_hitPoint = ct.getHitPoint();
	this->_energyPoint = ct.getEnergyPoint();
	this->_attackDamage = ct.getAttackDamage();
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (!this->_energyPoint)
	{
		std::cout << "No more energy, ClapTrap is tired" << std::endl;
		return ;
	}
	this->_energyPoint--;
	std::cout << "ClapTrap " << this->_name;
	std::cout << " attacks " << target;
	std::cout << ", causing "<< this->_attackDamage;
	std::cout << " points of damage!" << std::endl;
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (!this->_hitPoint)
	{
		std::cout << "ClapTrap " << this->_name;
		std::cout << " is alerady dead! "<< std::endl;
		return ;
	}
	if (!this->_energyPoint)
	{
		std::cout << "No more energy, ClapTrap is tired" << std::endl;
		return ;
	}
	this->_hitPoint -= amount;
	if (this->_hitPoint < 0)
		this->_hitPoint = 0;
	std::cout << "ClapTrap " << this->_name;
	std::cout << " received an attack, taking "<< amount;
	std::cout << " points of damage!" << std::endl;
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (!this->_hitPoint)
	{
		std::cout << "ClapTrap is already dead, nothing to repaire here" << std::endl;
		return ;
	}
	if (!this->_energyPoint)
	{
		std::cout << "No more energy, ClapTrap is tired" << std::endl;
		return ;
	}
	this->_energyPoint--;
	this->_hitPoint += amount;
	std::cout << "ClapTrap " << this->_name;
	std::cout << " drink " << amount;
	std::cout << "ml of RedBull, healing "<< amount;
	std::cout << " points of life!" << std::endl;
	return ;
}

std::string	ClapTrap::getName() const
{
	return (this->_name);
}

void		ClapTrap::setName( std::string const name )
{
	this->_name = name;
	return ;
}

int			ClapTrap::getHitPoint() const
{
	return (this->_hitPoint);
}

int			ClapTrap::getEnergyPoint() const
{
	return (this->_energyPoint);
}

int			ClapTrap::getAttackDamage() const
{
	return (this->_attackDamage);
}

