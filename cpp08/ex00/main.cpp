#include <list>
#include <vector>
#include <iostream>
#include <algorithm>
#include "easyfind.hpp"

template<typename T>
void	show(T const & t)
{
	std::cout << t << std::endl;
}

int main()
{
	std::list<int> A;

	//Fill the list
	A.push_back(42);
	A.push_back(43);
	A.push_back(2);
	A.push_back(3);
	A.begin();

	//printing the List
	for_each(A.begin(), A.end(), show<int>);
	
	//Searching and printing for the occurence
	std::list<int>::iterator it  = easyfind(A, 3);
	std::cout << "easy find found : " << *it << std::endl;

	//Doing the same job for Vector but const
	std::vector<int> const Vect(10, 30);
	std::cout << "easy find found : " << *(easyfind(Vect,30)) << std::endl;
	
	//This show the difference beetween const_iterator and iterator, the compiler don't compile the following
	// std::vector<int>::const_iterator c_it = (easyfind(Vect,30));
	// *c_it = 42; 	//not possible because the iterator content is const
	return (0);
}