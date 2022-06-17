#include "data.struct.hpp"
#include <iostream>

int main()
{
	Data		p;
	Data*		ptr;
	uintptr_t	serialized;

	p.some_int = 4;
	serialized = serialize(&p);
	std::cout << serialized << " " << &p << std::endl;
	ptr = deserialize(serialized);
	std::cout << ptr << " " << &p << std::endl;
	return (0);
}