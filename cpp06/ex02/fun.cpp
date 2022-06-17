#include "all.class.hpp"
#include <sys/time.h>
#include <iostream>

Base*	generate( void )
{
	struct timeval tv;

	gettimeofday(&tv, NULL);
	switch (tv.tv_usec % 3)
	{
		case 0: std::cout << "Creating  :A" << std::endl; return (new A);
		case 1: std::cout << "Creating  :B" << std::endl; return (new B);
		case 2: std::cout << "Creating  :C" << std::endl; return (new C);
	}
	return (new A);
}

void	identify( Base* p )
{
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
}

void	identify( Base& p )
{
	try
	{
		A & a_ref = dynamic_cast<A &>(p);
		(void)a_ref;
		std::cout << "A" << std::endl;
		return ;
	}
	catch (std::exception &e) {}
	try
	{
		B & b_ref = dynamic_cast<B &>(p);
		(void)b_ref;
		std::cout << "B" << std::endl;
		return ;
	}
	catch (std::exception &e) {}
	try
	{
		C & c_ref = dynamic_cast<C &>(p);
		(void)c_ref;
		std::cout << "C" << std::endl;
		return ;
	}
	catch (std::exception &e) {}
	std::cout << "None of Base child" << std::endl;
}
