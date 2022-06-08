#ifndef CHARACTER_CLASS_HPP
# define CHARACTER_CLASS_HPP
# include "ICharacter.interface.hpp"
# include "AMateria.abstract.hpp"

class Character: public ICharacter
{
public:
	Character( void );
	Character( std::string const & name);
	Character( Character const &src);
	~Character( void );

	Character&			operator=(Character const & src);

	std::string const &	getName( void ) const;
	void 				equip(AMateria* m);
	void				unequip(int idx);
	void				use(int idx, ICharacter& target);
	AMateria*			getItem(int idx) const;
private:
	void				_clearInventory();
	std::string			_name;
	AMateria*			_inventory[4];
};

//operateur =

#endif