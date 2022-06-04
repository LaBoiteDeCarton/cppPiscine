#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <string>
# include <iostream>

class ClapTrap
{
public:
	ClapTrap( void );
	ClapTrap( std::string name );
	ClapTrap( ClapTrap const &ct );
	~ClapTrap();

	ClapTrap&	operator=( ClapTrap const & ct );

	void		attack( const std::string& target );
	void		takeDamage( unsigned int amount );
	void		beRepaired( unsigned int amount );

	std::string	getName() const;
	int			getHitPoint() const;
	int			getEnergyPoint() const;
	int			getAttackDamage() const;
private:
	std::string	_name;
	int			_hitPoint;
	int			_energyPoint;
	int			_attackDamage;
};

#endif