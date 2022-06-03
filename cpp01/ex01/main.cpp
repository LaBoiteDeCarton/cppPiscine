#include "Zombie.hpp"

int	main()
{
	Zombie *zomb = zombieHorde(10, "George");
	
	for (int i = 0; i < 10; i++)
		zomb[i].announce();
	delete [] zomb;
	return (0);
}