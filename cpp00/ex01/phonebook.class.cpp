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
	this->_index = this->_index + 1 % 8;
	this->_contacts[this->_index].Fill();
	return ;
}

void	Phonebook::Show(void)
{
	int i;

	i = 0;
	while (i < 8)
		this->_contacts[i++].ShortShow();
	return ;
}

void	Phonebook::Exit(void)
{
	return ;
}