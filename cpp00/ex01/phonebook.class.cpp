#include "phonebook.class.hpp"

Phonebook::Phonebook(void) : _index(-1)
{
	return ;
}

Phonebook::~Phonebook(void)
{
	return ;
}
void	Phonebook::Add(void)
{
	this->_index = (this->_index + 1) % 8;
	this->_contacts[this->_index].Fill();
	return ;
}

void	Phonebook::Show(void)
{
	int i;

	i = -1;
	std::cout << "|  Index   |First Name|Last Name | Nickname |" << std::endl;
	while (++i < 8)
		this->_contacts[i].ShortShow(i);
	std::cout << "Select index :";
	std::cin >> i;
	while (i < 0 || i > 7)
	{
		std::cout << "incorrect input, please retry...." << std::endl;
		std::cout << "Select index :";
		std::cin >> i;
	}
	this->_contacts[i].LongShow();
	return ;
}
