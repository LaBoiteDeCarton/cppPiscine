#include "Bureaucrat.hpp"
#include <iostream>

int main ()
{
	try
	{
		Bureaucrat a = Bureaucrat("Bob", 10);
		Bureaucrat b("Roger", 80);
		Bureaucrat c("Ghislaine", 38);
		Form f("A38", 38, 50);
		a.signForm(f);
		b.signForm(f);
		c.signForm(f);
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	system("leaks Bureaucraty | grep leaked");
	return (0);
}