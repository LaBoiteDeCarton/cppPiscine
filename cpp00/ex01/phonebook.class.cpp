#include "phonebook.class.hpp"

Phonebook::Phonebook(void) : _index(-1)
{
	return ;
}

Phonebook::~Phonebook(void)
{
	return ;
}
void	Phonebook::NewContact(void)
{
	// this->_index = (this->_index + 1) % 8;
	this->_index = (this->_index + 1) % 8;
	this->_nbTotalContact += 1 * (this->_nbTotalContact < 8);
	this->_contacts[this->_index].Fill();
	return ;
}

void	Phonebook::ShowAllContacts(void) const
{
	int i;

	i = -1;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|  Index   |First Name|Last Name | Nickname |" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	if (Phonebook::_nbTotalContact == 0)
		std::cout << "| The phonebook is empty, don't worry       |" << std::endl << "| you'll find a friend one day              |" << std::endl;
	while (++i < Phonebook::_nbTotalContact)
		this->_ShowShortContact(i);
	std::cout << "---------------------------------------------" << std::endl;
	return ;
}

void		Phonebook::_ShowShortContact(int index) const
{
	if (this->_contacts[index].getFirstName().empty())
		return ;
	std::cout << "|" << std::setw(10) << index << "|";
	if (this->_contacts[index].getFirstName().length() <= 10)
		std::cout << std::setw(10) << this->_contacts[index].getFirstName();
	else
		std::cout << this->_contacts[index].getFirstName().substr(0, 9) << ".";
	std::cout << "|";
	if (this->_contacts[index].getLastName().length() <= 10)
		std::cout << std::setw(10) << this->_contacts[index].getLastName();
	else
		std::cout << this->_contacts[index].getLastName().substr(0, 9) << ".";
	std::cout << "|";
	if (this->_contacts[index].getNicktName().length() <= 10)
		std::cout << std::setw(10) << this->_contacts[index].getNicktName();
	else
		std::cout << this->_contacts[index].getNicktName().substr(0, 9) << ".";
	std::cout << "|"<< std::endl;
	return ;
}

void		Phonebook::ShowContactDetails(int index) const
{
	std::cout << "---Contact Details---------------------------" << std::endl;
 	std::cout << "First Name :" << this->_contacts[index].getFirstName() << std::endl;
 	std::cout << "Last Name :" << this->_contacts[index].getLastName() << std::endl;
 	std::cout << "Nickname :" << this->_contacts[index].getNicktName() << std::endl;
 	std::cout << "Phone Number :" << this->_contacts[index].getPhoneNumber() << std::endl;
 	std::cout << "Darkest Secret :" << this->_contacts[index].getDarkestSecret() << std::endl;
 	return ;
}

int			Phonebook::getNbTotalContact(void) const
{
	return (this->_nbTotalContact);
}