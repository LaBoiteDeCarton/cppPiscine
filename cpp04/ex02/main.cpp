#include "Animal.class.hpp"
#include "Dog.class.hpp"
#include "Cat.class.hpp"

void fun()
{
	AAnimal* j = new Dog();
	AAnimal* i = new Cat();

	i->addIdea("Burn the world");
	i->addIdea("Pee on the floor");
	i->makeSound();
	i->printIdeas();
	j->addIdea("Lick owner face");
	j->addIdea("Eat the sofa");
	j->makeSound();	
	j->printIdeas();

	AAnimal* h = new Dog();
	*h = *j; // ou *h = i est possible aussi
	j->addIdea("Try to catch birds");
	h->addIdea("make a hole in the beach");
	j->printIdeas();
	h->printIdeas();

	//delete meta;
	delete i;
	delete j;
	delete h;
}

int main()
{
	fun();
	system("leaks Animal");
	return 0;
}