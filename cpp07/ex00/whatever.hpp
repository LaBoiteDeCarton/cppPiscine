#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template< typename T >
void	swap(T & l, T & r)
{
	T tmp = l;

	l = r;
	r = tmp;
}

template< typename T >
T const &	min(T const & l, T const & r)
{
	return (l < r ? l : r);
}

template< typename T >
T const &	max(T const & l, T const & r)
{
	return (l > r ? l : r);
}

#endif