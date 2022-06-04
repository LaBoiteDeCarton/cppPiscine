#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
public:
	DiamondTrap( void );
	DiamondTrap( std::string name );
	DiamondTrap( DiamondTrap const & src);
	~DiamondTrap( void );
	
	DiamondTrap&	operator=( DiamondTrap const & ct );
	
	void			whoAmI( void );
	using			ScavTrap::attack;
private:
	std::string		_name;
};



#endif