#include "phonebook.class.hpp"
#include "contact.class.hpp"
#include <iostream>
#include <cstring>


static void	add_to_phoneBook(Phonebook *phoneBook)
{
	Contact contact;


}

static void	search_in_phoneBook(Phonebook *phoneBook)
{
	phoneBook->Show();
}

int	main(int ac, char **av)
{
	std::string buff;
	Phonebook phoneBook;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|  Phone Book v0.10.5 Pro ©                 |" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	while (1)
	{
		if (!std::cin.good())
			break ;
		std::cout << "$>";
		std::getline(std::cin,buff);
		if (!buff.compare("ADD"))
			phoneBook.Add();
		if (!buff.compare("SEARCH"))
			search_in_phoneBook(&phoneBook);
		if (!buff.compare("EXIT"))
			break ;
		
	}
	std::cout << "Good bye from Phone Book Compagny" << std::endl;
	system("leaks phonebook");
}
