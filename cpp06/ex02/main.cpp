#include "all.class.hpp"
#include <unistd.h>
#include <iostream>

int main()
{
	Base	*b;

	for (int i = 0; i < 10; i++)
	{
		b = generate();
		std::cout << "Id by ptr :";
		identify(b);
		std::cout << "Id by ref :";
		identify(*b);
		usleep(10);
		delete b;
		std::cout << std::endl;
	}
	return (0);
}