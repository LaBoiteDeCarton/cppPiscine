#include <iostream>

int main(int ac, char **av)
{
	int i;
	int j;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	i = 1;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
			std::cout << (char)toupper(av[i][j++]);
		i++;
	}
	std::cout << std::endl;
	return (0);
}
