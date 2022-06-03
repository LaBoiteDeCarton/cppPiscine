#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"
# include <iostream>
# include <string>

class HumanB
{
public:
	HumanB( std::string name );
	HumanB( std::string name, Weapon& weapon );
	~HumanB( void );
	void		setWeapon( Weapon& weapon);
	void		attack( void ) const;
private:
	Weapon*			_weapon;
	std::string		_name;
};


#endif