#include "phonebook.class.hpp"
#include "contact.class.hpp"
#include <iostream>
#include <cstring>

static bool	str_isdigit(std::string str)
{
	for (int i = 0; str[i]; i++)
		if (!isdigit(str[i]))
			return false;
	return true;
}

static void	search_in_phoneBook(Phonebook *phoneBook)
{
	int	i;
	std::string buff;

	phoneBook->ShowAllContacts();
	if (phoneBook->getNbTotalContact() == 0)
		return ;
digitcheck:
	std::cout << "Select index :";
	std::cin >> buff;
	if (!std::cin.good())
		return ;
	if (!str_isdigit(buff))
	{
		std::cout << "incorrect input: only digits exepcted" << std::endl;
		goto digitcheck;
	}
	i = std::stoi(buff);
	if (i < 0 || i >= phoneBook->getNbTotalContact())
	{
		std::cout << "incorrect input: the index doesn't exist" << std::endl;
		goto digitcheck;
	}
	phoneBook->ShowContactDetails(i);
}

int	main(int ac, char **av)
{
	(void)ac;
	(void)av;
	std::string buff;
	Phonebook phoneBook;

	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|  Phone Book v0.10.5 Pro ©                 |" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	while (1)
	{
		std::cout << "$>";
		std::cin.clear();
		std::getline(std::cin, buff);
		if (!std::cin.good())
			break ;
		if (!buff.compare("ADD"))
			phoneBook.NewContact();
		else if (!buff.compare("SEARCH"))
			search_in_phoneBook(&phoneBook);
		else if (!buff.compare("EXIT"))
			break ;
	}
	std::cout << "Good bye from Phone Book Compagny" << std::endl;
	system("leaks phonebook");
	return (EXIT_SUCCESS);
}
