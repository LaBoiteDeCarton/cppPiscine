#include "Cure.class.hpp"

Cure::Cure( void ): AMateria("cure")
{
	return ;
}

Cure::~Cure( void )
{
	return ;
}

AMateria*	Cure::clone( void ) const
{
	// AMateria *new_cure = new Cure(); 
	return (new Cure());
}

void		Cure::use(ICharacter& target)
{
	std::cout << "* heals "<< target.getName()  << "’s wounds *" << std::endl;
	return ;
}