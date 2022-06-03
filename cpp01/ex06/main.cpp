#include "Harl.hpp"
#include <iostream>

int	main(int ac, char **av)
{
	Harl 		harl;

	if (ac != 2)
	{
		std::cout << "Error: Bad number of argument" << std::endl;
		return (2);
	}
	harl.complain(av[1]);	
	return (0);
}