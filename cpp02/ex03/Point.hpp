#ifndef POINT_HPP
# define POINT_HPP
# include "Fixed.hpp"

class Point
{
public:
	Point( void );
	Point( float const & x, float const & y);
	Point (Point const & src);
	~Point();

	Point&		operator=(Point const & src);

	Fixed		getX( void ) const;
	Fixed		getY( void ) const;
private:
	Fixed		_x;
	Fixed		_y;
};

std::ostream &	operator<<( std::ostream & o, Point const & rhs);

bool	bsp( Point const a, Point const b, Point const c, Point const point);

#endif