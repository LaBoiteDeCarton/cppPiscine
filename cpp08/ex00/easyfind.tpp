#ifndef EASYFIND_TPP
# define EASYFIND_TPP
#include <iterator>

template<typename T>
typename T::iterator	easyfind(T &t, const int & n)
{
	typename T::iterator end = t.end();
	for(typename T::iterator i = t.begin(); i != end; i++)
		if (*i == n) return (i);
	return end;
}

template<typename T>
typename T::const_iterator	easyfind(T const &t, const int & n)
{
	typename T::const_iterator end = t.end();
	for(typename T::const_iterator i = t.begin(); i != end; i++)
		if (*i == n) return (i);
	return end;
}

#endif