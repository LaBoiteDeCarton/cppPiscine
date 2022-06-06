#include "Animal.class.hpp"
#include "Dog.class.hpp"
#include "Cat.class.hpp"

void fun()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	meta->makeSound();
	i->makeSound();
	j->makeSound();	

	delete meta;
	delete i;
	delete j;
}

int main()
{
	fun();
	system("leaks Animal");
	return 0;
}