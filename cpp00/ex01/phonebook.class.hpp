#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP
# include "contact.class.hpp"

class Phonebook
{
public:
	Phonebook(void);
	~Phonebook(void);
	void		NewContact(void);
	void		ShowAllContacts(void);
	void		ShowContactDetails(int index);
	int			getNbTotalContact(void);
private:
	void		_ShowShortContact(int index);
	Contact 	_contacts[8];
	int			_index;
	int			_nbTotalContact;
};

#endif