#include "phonebook.class.hpp"
#include "contact.class.hpp"
#include <iostream>
#include <cstring>


static void	add_to_phoneBook(Phonebook *phoneBook)
{

}

static void	search_in_phoneBook(Phonebook *phoneBook)
{
	
}

int	main(int ac, char **av)
{
	char buff[512];
	Phonebook phoneBook;

	std::cout << "----------------------------------------" << std::endl;
	std::cout << "|  Phone Book v0.10.5 Pro ©            |" << std::endl;
	std::cout << "----------------------------------------" << std::endl;
	while (1)
	{
		std::cout << "$>";
		std::cin >> buff;
		if (!std::strcmp(buff, "ADD"))
			add_to_phoneBook(&phoneBook);
		if (!std::strcmp(buff, "SEARCH"))
			search_in_phoneBook(&phoneBook);
		if (!std::strcmp(buff, "EXIT"))
			break ;
		
	}
	std::cout << "Good bye from Phone Book Compagny" << std::endl;
}
