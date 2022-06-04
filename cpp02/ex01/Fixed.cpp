#include "Fixed.hpp"

const int Fixed::_binaryPoint = 8;

Fixed::Fixed( void ) : _fixed(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed::Fixed( Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::Fixed( int const value)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixed = value << this->_binaryPoint;
}

Fixed::Fixed( float const value )
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixed = roundf(value * (1 << this->_binaryPoint));
}
	
Fixed&	Fixed::operator=( Fixed const & rhs )
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixed = rhs.getRawBits();
	return (*this);
}

float	Fixed::toFloat( void ) const
{
	return ((float)this->_fixed / (1 << this->_binaryPoint));
}
int		Fixed::toInt( void ) const
{
	return (this->_fixed >> this->_binaryPoint);
}

int		Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixed);
}

void	Fixed::setRawBits( int const raw )
{
	this->_fixed = raw;
	return ;
}

std::ostream &	operator<<( std::ostream & o, Fixed const & rhs )
{
	o << rhs.toFloat();
	return (o);
}
