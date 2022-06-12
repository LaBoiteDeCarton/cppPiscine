#include "Fixed.hpp"
#include <iostream>

int main( void ) 
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed c(42.42f);
	Fixed d(1);

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	std::cout << c + d << std::endl;
	std::cout << c - d - d << std::endl;
	std::cout << d / c << std::endl;
	if (c >= d)
		std::cout << c << ">=" << d << std::endl;
	if (c > d)
		std::cout << c << ">" << d << std::endl;
	if (c <= d)
		std::cout << c << "<=" << d << std::endl;
	if (c < d)
		std::cout << c << "<=" << d << std::endl;
	return 0;
}