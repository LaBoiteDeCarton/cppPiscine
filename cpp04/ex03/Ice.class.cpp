#include "Ice.class.hpp"

Ice::Ice( void ): AMateria("ice")
{
	return ;
}

Ice::~Ice( void )
{
	return ;
}

AMateria*	Ice::clone( void ) const
{
	// AMateria *new_ice = new Ice(); 
	return (new Ice());
}

void		Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	return ;
}