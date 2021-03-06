#include "Animal.class.hpp"
#include "Dog.class.hpp"
#include "Cat.class.hpp"
#include "WrongAnimal.class.hpp"
#include "WrongCat.class.hpp"

void fun()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* k = new WrongAnimal();
	const WrongAnimal* l = new WrongCat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	meta->makeSound();
	i->makeSound();
	j->makeSound();	
	k->makeSound();	
	l->makeSound();

	delete meta;
	delete i;
	delete j;
	delete k;
	delete l;
}

int main()
{
	fun();
	system("leaks Animal");
	return 0;
}