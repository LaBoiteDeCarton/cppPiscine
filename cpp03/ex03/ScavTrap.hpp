#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <string>
# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
public:
	ScavTrap( void );
	ScavTrap( std::string name );
	ScavTrap( ScavTrap const & ct );
	~ScavTrap();

	ScavTrap&	operator=( ScavTrap const & ct );
	void		attack( const std::string& target );
    void		guardGate();
protected:
	int			_hitPoint;
	int			_energyPoint;
	int			_attackDamage;
};

#endif