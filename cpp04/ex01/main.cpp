#include "Animal.class.hpp"
#include "Dog.class.hpp"
#include "Cat.class.hpp"

void fun()
{
	Animal* meta = new Animal();
	Dog* j = new Dog();
	Cat* i = new Cat();

	meta->makeSound();

	i->addIdea("Burn the world");
	i->addIdea("Pee on the floor");
	i->makeSound();
	i->printIdeas();
	j->addIdea("Lick owner face");
	j->addIdea("Eat the sofa");
	j->makeSound();	
	j->printIdeas();

	// Dog* h = new Dog();
	// *h = *j;
	// j->addIdea("Try to catch birds");
	// h->addIdea("make a hole in the beach");
	// j->printIdeas();
	// h->printIdeas();

	delete meta;
	delete i;
	delete j;
	//delete h;
}

int main()
{
	fun();
	system("leaks Animal");
	return 0;
}