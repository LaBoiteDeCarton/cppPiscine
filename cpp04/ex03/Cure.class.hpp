#ifndef CURE_CLASS_HPP
# define CURE_CLASS_HPP
# include "AMateria.abstract.hpp"
# include "ICharacter.interface.hpp"
# include <iostream>

class Cure: public AMateria
{
public:
	Cure( void );
	~Cure( void );

	//operateur =

	AMateria*	clone( void ) const;
	void		use(ICharacter& target);
private:
};


#endif