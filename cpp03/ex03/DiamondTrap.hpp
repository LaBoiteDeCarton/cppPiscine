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
	// void			attack( const std::string& target );
	void		attack( const std::string& target );
	std::string	getName() const;
	int			getHitPoint() const;
	int			getEnergyPoint() const;
	int			getAttackDamage() const;
private:
	std::string		_name;
	int				_hitPoint;
	int				_energyPoint;
	int				_attackDamage;
};



#endif