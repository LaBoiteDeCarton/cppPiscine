#include "Fixed.hpp"

const int Fixed::_binaryPoint = 8;

Fixed::Fixed( void ) : _fixed(0)
{
	return ;
}

Fixed::~Fixed( void )
{
	return ;
}

Fixed::Fixed( Fixed const & src)
{
	*this = src;
	return ;
}

Fixed::Fixed( int const value)
{
	this->_fixed = value << this->_binaryPoint;
}

Fixed::Fixed( float const value )
{
	this->_fixed = roundf(value * (1 << this->_binaryPoint));
}
	
Fixed&	Fixed::operator=( Fixed const & rhs )
{
	this->_fixed = rhs.getRawBits();
	return (*this);
}

bool	Fixed::operator==(Fixed const & rhs) const
{
	return (this->_fixed == rhs.getRawBits());
}

bool	Fixed::operator<(Fixed const & rhs) const
{
	return (this->_fixed < rhs.getRawBits());
}

bool	Fixed::operator>(Fixed const & rhs) const
{
	return (this->_fixed > rhs.getRawBits());
}

bool	Fixed::operator>=(Fixed const & rhs) const
{
	return (this->_fixed >= rhs.getRawBits());
}

bool	Fixed::operator<=(Fixed const & rhs) const
{
	return (this->_fixed <= rhs.getRawBits());
}

bool	Fixed::operator!=(Fixed const & rhs) const
{
	return (this->_fixed != rhs.getRawBits());
}

Fixed	Fixed::operator+(Fixed const & rhs)
{
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed	Fixed::operator-(Fixed const & rhs)
{
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed	Fixed::operator*(Fixed const & rhs)
{
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed	Fixed::operator/(Fixed const & rhs)
{
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

Fixed&	Fixed::operator++()
{
	this->_fixed++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed temp(this->_fixed);
	++*this;
	return (temp);
}

Fixed&	Fixed::operator--()
{
	this->_fixed--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed temp(this->_fixed);
	--*this;
	return (temp);
}

Fixed const &	Fixed::min(Fixed const & lhs, Fixed const & rhs)
{
	if (lhs <= rhs)
		return (lhs);
	return (rhs);
}

Fixed&	Fixed::min(Fixed & lhs, Fixed & rhs)
{
	if (lhs <= rhs)
		return (lhs);
	return (rhs);
}

Fixed const &	Fixed::max(Fixed const & lhs, Fixed const & rhs)
{
	if (lhs >= rhs)
		return (lhs);
	return (rhs);
}

Fixed&	Fixed::max(Fixed & lhs, Fixed & rhs)
{
	if (lhs >= rhs)
		return (lhs);
	return (rhs);
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
