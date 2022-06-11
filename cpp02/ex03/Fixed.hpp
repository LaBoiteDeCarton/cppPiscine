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
	
	Fixed&					operator=( Fixed const & rhs);
	bool					operator==(Fixed const & rhs) const;
	bool					operator<(Fixed const & rhs) const;
	bool					operator>(Fixed const & rhs) const;
	bool					operator>=(Fixed const & rhs) const;
	bool					operator<=(Fixed const & rhs) const;
	bool					operator!=(Fixed const & rhs) const;

	Fixed					operator+(Fixed const & rhs);
	Fixed					operator-(Fixed const & rhs);
	Fixed					operator*(Fixed const & rhs);
	Fixed					operator/(Fixed const & rhs);

	Fixed&					operator++();
	Fixed					operator++(int);
	Fixed&					operator--();
	Fixed					operator--(int);

	static Fixed const &	min(Fixed const & lhs, Fixed const & rhs);
	static Fixed&			min(Fixed & lhs, Fixed & rhs);
	static Fixed const &	max(Fixed const & lhs, Fixed const & rhs);
	static Fixed&			max(Fixed & lhs, Fixed & rhs);
	

	float					toFloat( void ) const;
	int						toInt( void ) const;
	int						getRawBits( void ) const;
	void					setRawBits( int const raw );
private:
	int						_fixed;
	static const int		_binaryPoint;
};

std::ostream &	operator<<( std::ostream & o, Fixed const & rhs);

#endif