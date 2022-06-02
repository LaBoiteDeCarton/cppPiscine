#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP
# include "contact.class.hpp"

class Phonebook
{
public:
	Phonebook(void);
	~Phonebook(void);
	void	Add(void);
	void	Show(void);
	void	Exit(void);
private:
	Contact _contacts[8];
	int		_index;
};

#endif