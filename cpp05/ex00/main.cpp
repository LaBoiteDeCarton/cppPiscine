#include "Bureaucrat.hpp"
#include <iostream>

int main ()
{
	Bureaucrat *a = new Bureaucrat("Bob", 10);

	std::cout << *a;
	a->downmote();
	a->downmote();
	std::cout << *a;
	a->promote();
	a->promote();
	a->promote();
	a->promote();
	std::cout << *a;
	delete a;
	return (0);
}