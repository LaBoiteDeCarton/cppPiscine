#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie *zombHorde = new Zombie[N];
	
	for (int i = 0; i < N; i++)
		zombHorde[i].setName(name);
	return (zombHorde);
}