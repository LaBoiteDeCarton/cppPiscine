#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP
# include "contact.class.hpp"

class Phonebook
{
public:
	Phonebook( void );
	~Phonebook( void );
	void		NewContact(void);
	void		ShowAllContacts(void) const;
	void		ShowContactDetails(int index) const;
	int			getNbTotalContact(void) const;
private:
	void		_ShowShortContact(int index) const;
	Contact 	_contacts[8];
	int			_index;
	int			_nbTotalContact;
};

#endif