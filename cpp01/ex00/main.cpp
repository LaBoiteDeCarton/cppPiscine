#include "Zombie.hpp"

int	main()
{
	Zombie *zomb = newZombie("Ralph");
	
	zomb->announce();
	randomChump("Anna");
	delete zomb;
	return (0);
}