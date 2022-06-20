#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>

template< typename T , typename U>
void	iter(T const *t, U const n, void (*fun)(T const &))
{
	for (U i = 0; i < n; i++)
		(*fun)(t[i]);
	return ;
}

template< typename T >
void	show(T const & t)
{
	std::cout << "#" << t << std::endl;
}

#endif