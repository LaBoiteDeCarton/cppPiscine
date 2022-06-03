#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP
# include <iostream>
# include <iomanip>
# include <string>

class Contact
{
public:
	Contact();
	~Contact();
	std::string	getFirstName() const;
	std::string	getLastName() const;
	std::string	getNicktName() const;
	std::string	getPhoneNumber() const;
	std::string	getDarkestSecret() const;
	void		setFirstName(std::string content);
	void		setLastName(std::string content);
	void		setNicktName(std::string content);
	void		setPhoneNumber(std::string content);
	void		setDarkestSecret(std::string content);
	void		Fill();
private:
	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickName;
	std::string	_phoneNumber;
	std::string	_darkestSecret;
};

#endif