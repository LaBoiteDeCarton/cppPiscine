#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP
# include "contact.class.hpp"

class Phonebook
{
public:
	Phonebook(void);
	~Phonebook(void);
	void	Add(void);
	void	Search(void);
	void	Exit(void);

private:
	int	_index;
	Contact _contacts[8];
};

#endif