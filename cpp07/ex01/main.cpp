#include "iter.hpp"

int main()
{
	int	const tab[4] = { 1, 5050, 2222, 9878};
	float	const f_tab[4] = { 1.000f, 5050.f, 22.22f, 98.78f};
	std::string	const s_tab[3] = { "Hello", "42", "Vive CPP 07"};

	iter<int, int>(tab, 4, show<int>);	//Explicit template instantiation
	iter(f_tab, 4, show);				//Implicit template instantiation
	iter(s_tab, 3, show<std::string>);
	return (0);
}