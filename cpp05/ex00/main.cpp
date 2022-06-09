#include "Bureaucrat.hpp"
#include <iostream>

int main ()
{
	Bureaucrat *a;
	Bureaucrat *b;
	Bureaucrat *c;

	try
	{
		a = new Bureaucrat("Bob", 10);
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
	}
	catch(const Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << '\n';
		if (a)
			delete a;
	}
	catch(const Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << '\n';
		if (a)
			delete a;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		if (a)
			delete a;
	}
	try
	{
		b = new Bureaucrat("Ross", 186);
		b->promote();
		delete b;
	}
	catch(const Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << '\n';
		if (b)
			delete b;
	}
	catch(const Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << '\n';
		if (b)
			delete b;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		if (b)
			delete b;
	}
	try
	{
		c = new Bureaucrat("Monica", 150);
		c->promote();
		std::cout << *c;
		c->downmote();
		c->downmote();
		c->downmote();
		delete c;
	}
	catch(const Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << '\n';
		if (c)
			delete c;
	}
	catch(const Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << '\n';
		if (c)
			delete c;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		if (c)
			delete c;
	}
	system("leaks Bureaucraty");
	return (0);
}