#include "contact.class.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::~Contact()
{
	return ;
}

std::string	Contact::getFirstName() const
{
	return (this->_firstName);
}

std::string	Contact::getLastName() const
{
	return (this->_lastName);
}

std::string	Contact::getNicktName() const
{
	return (this->_nickName);
}

std::string	Contact::getPhoneNumber() const
{
	return (this->_phoneNumber);
}

std::string	Contact::getDarkestSecret() const
{
	return (this->_darkestSecret);
}

void		Contact::setFirstName(std::string content)
{
	this->_firstName = content;
	return ;
}

void		Contact::setLastName(std::string content)
{
	this->_lastName = content;
	return ;
}

void		Contact::setNicktName(std::string content)
{
	this->_nickName = content;
	return ;
}

void		Contact::setPhoneNumber(std::string content)
{
	this->_phoneNumber = content;
	return ;
}

void		Contact::setDarkestSecret(std::string content)
{
	this->_darkestSecret = content;
	return ;
}

void	Contact::Fill()
{
	std::cout << "---New Contact-------------------------------" << std::endl;
	std::cout << "First Name: ";
	std::getline(std::cin, this->_firstName);
	if (!std::cin.good())
			return  ;
	while (this->_firstName[0] && this->_firstName[0] == ' ')
		this->_firstName.erase();
	while (this->_firstName.empty())
	{
		std::cout << "incorrect input, please retry...." << std::endl;
		std::cout << "First Name: ";
		std::getline(std::cin, this->_firstName);
		if (!std::cin.good())
			return  ;
		while (this->_firstName[0] && this->_firstName[0] == ' ')
			this->_firstName.erase();
	}
	std::cout << "Last Name: ";
	std::getline(std::cin, this->_lastName);
	if (!std::cin.good())
			return  ;
	while (this->_lastName[0] && this->_lastName[0] == ' ')
		this->_lastName.erase();
	while (this->_lastName.empty())
	{
		std::cout << "incorrect input, please retry...." << std::endl;
		std::cout << "Last Name: ";
		std::getline(std::cin, this->_lastName);
		if (!std::cin.good())
			return  ;
		while (this->_lastName[0] && this->_lastName[0] == ' ')
			this->_lastName.erase();
	}
	std::cout << "Nickname: ";
	std::getline(std::cin, this->_nickName);
	if (!std::cin.good())
			return  ;
	while (this->_nickName[0] && this->_nickName[0] == ' ')
		this->_nickName.erase();
	while (this->_nickName.empty())
	{
		std::cout << "incorrect input, please retry...." << std::endl;
		std::cout << "Nickname: ";
		std::getline(std::cin, this->_nickName);
		if (!std::cin.good())
			return  ;
		while (this->_nickName[0] && this->_nickName[0] == ' ')
			this->_nickName.erase();
	}
	std::cout << "Phone Number: ";
	std::getline(std::cin, this->_phoneNumber);
	if (!std::cin.good())
			return  ;
	while (this->_phoneNumber[0] && this->_phoneNumber[0] == ' ')
		this->_phoneNumber.erase();
	while (this->_phoneNumber.empty())
	{
		std::cout << "incorrect input, please retry...." << std::endl;
		std::cout << "Phone Number: ";
		std::getline(std::cin, this->_phoneNumber);
		if (!std::cin.good())
			return  ;
		while (this->_phoneNumber[0] && this->_phoneNumber[0] == ' ')
			this->_phoneNumber.erase();
	}
	std::cout << "Darkest Secret: ";
	std::getline(std::cin, this->_darkestSecret);
	if (!std::cin.good())
			return  ;
	while (this->_darkestSecret[0] && this->_darkestSecret[0] == ' ')
		this->_darkestSecret.erase();
	while (this->_darkestSecret.empty())
	{
		std::cout << "incorrect input, please retry...." << std::endl;
		std::cout << "Darkest Secret: ";
		std::getline(std::cin, this->_darkestSecret);
		if (!std::cin.good())
			return  ;
		while (this->_darkestSecret[0] && this->_darkestSecret[0] == ' ')
			this->_darkestSecret.erase();
	}
	return ;
}
