#include "Point.hpp"

Point::Point(): _x(Fixed(0)), _y(Fixed(0))
{
	return ;
}

Point::Point( float const & x, float const & y): _x(Fixed(x)), _y(Fixed(y))
{
	return ;
}

Point::Point (Point const & src)
{
	*this = src;
	return ;
}

Point::~Point()
{
	return ;
}

Point&		Point::operator=(Point const & src)
{
	this->_x = src.getX();
	this->_y = src.getY();
	return (*this);
}

Fixed	Point::getX( void ) const
{
	return (this->_x);
}

Fixed	Point::getY( void ) const
{
	return (this->_y);
}

std::ostream &	operator<<( std::ostream & o, Point const & rhs)
{
	o << "(" << rhs.getX() << "," << rhs.getY() << ")";
	return (o);
}