#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP
# include <iostream>

class Contact
{
private:
	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickName;
	std::string	_phoneNumber;
	std::string	_darkestSecret;
public:
	Contact();
	~Contact();
	void		ShortShow(void);
	void		LongShow(void);
	void		Fill(void);
};

#endif