#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <string>
# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
public:
	FragTrap( void );
	FragTrap( std::string name );
	FragTrap( FragTrap const & ct );
	~FragTrap();

	FragTrap&	operator=( FragTrap const & ct );
	void		attack( const std::string& target );
    void		highFivesGuys( void );
protected:
	int			_hitPoint;
	int			_energyPoint;
	int			_attackDamage;
};

#endif