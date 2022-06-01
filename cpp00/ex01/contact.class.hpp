#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP
# include <iostream>

class Contact
{
private:
	char	*_firstName;
	char	*_lastName;
	char	*_nickName;
	char	*_phoneNumber;
	char	*_darkestSecret;
public:
	Contact();
	~Contact();
	void	ShortShow(void);
	void	LongShow(void);
	void	Fill(void);
};

#endif