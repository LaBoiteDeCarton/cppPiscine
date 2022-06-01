#include "phonebook.class.hpp"

Phonebook::Phonebook(void) : _index(0)
{
	return ;
}

Phonebook::~Phonebook(void)
{
	return ;
}
void	Phonebook::Add(void)
{
	this->_index = this->_index + 1 % 8;
	this->_contacts[this->_index].Fill();
	return ;
}

void	Phonebook::Search(void)
{
	return ;
}

void	Phonebook::Exit(void)
{
	return ;
}