#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed
{
public:
	Fixed( void );
	Fixed( Fixed const & src);
	Fixed( int const value);
	Fixed( float const value);
	~Fixed( void );
	
	Fixed&	operator=( Fixed const & rhs);
	bool	operator==(Fixed const & rhs);
	bool	operator<(Fixed const & rhs);
	bool	operator>(Fixed const & rhs);
	bool	operator>=(Fixed const & rhs);
	bool	operator<=(Fixed const & rhs);
	bool	operator!=(Fixed const & rhs);

	Fixed	operator+(Fixed const & rhs);
	Fixed	operator-(Fixed const & rhs);
	Fixed	operator*(Fixed const & rhs);
	Fixed	operator/(Fixed const & rhs);
	float	toFloat( void ) const;
	int		toInt( void ) const;
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
private:
	int			_fixed;
	static const int	_binaryPoint;
};

std::ostream &	operator<<( std::ostream & o, Fixed const & rhs);

#endif