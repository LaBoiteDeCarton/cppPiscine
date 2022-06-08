#ifndef ICE_CLASS_HPP
# define ICE_CLASS_HPP
# include "AMateria.abstract.hpp"
# include "ICharacter.interface.hpp"
# include <iostream>

class Ice: public AMateria
{
public:
	Ice( void );
	~Ice( void );

	//operateur =
	
	AMateria*	clone( void ) const;
	void		use(ICharacter& target);
private:
};


#endif