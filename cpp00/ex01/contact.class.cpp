#include "contact.class.hpp"

Contact::Contact(void)
{
	std::cout << "contact created" <<std::endl;
	return ;
}

Contact::~Contact()
{
	return ;
}

void	Contact::ShortShow(int index)
{
	if (this->_firstName.empty())
		return ;
	std::cout << "|" << std::setw(10) << index << "|";
	if (this->_firstName.length() <= 10)
		std::cout << std::setw(10) << this->_firstName;
	else
		std::cout << this->_firstName.substr(0, 9) << ".";
	std::cout << "|";
	if (this->_lastName.length() <= 10)
		std::cout << std::setw(10) << this->_lastName;
	else
		std::cout << this->_lastName.substr(0, 9) << ".";
	std::cout << "|";
	if (this->_nickName.length() <= 10)
		std::cout << std::setw(10) << this->_nickName;
	else
		std::cout << this->_nickName.substr(0, 9) << ".";
	std::cout << "|"<< std::endl;
	return ;
}
void	Contact::LongShow(void)
{
	std::cout << "---Contact Details---------------------------" << std::endl;
	std::cout << "First Name :" << this->_firstName << std::endl;
	std::cout << "Last Name :" << this->_lastName << std::endl;
	std::cout << "Nickname :" << this->_nickName << std::endl;
	std::cout << "Phone Number :" << this->_phoneNumber << std::endl;
	std::cout << "Darkest Secret :" << this->_darkestSecret << std::endl;
	return ;
}

void	Contact::Fill()
{
	std::cout << "---New Contact-------------------------------" << std::endl;
	std::cout << "First Name: ";
	std::getline(std::cin, this->_firstName);
	while (this->_firstName[0] && this->_firstName[0] == ' ')
		this->_firstName.erase();
	while (this->_firstName.empty())
	{
		std::cout << "incorrect input, please retry...." << std::endl;
		std::cout << "First Name: ";
		std::getline(std::cin, this->_firstName);
		while (this->_firstName[0] && this->_firstName[0] == ' ')
			this->_firstName.erase();
	}
	std::cout << "Last Name: ";
	std::getline(std::cin, this->_lastName);
	while (this->_lastName[0] && this->_lastName[0] == ' ')
		this->_lastName.erase();
	while (this->_lastName.empty())
	{
		std::cout << "incorrect input, please retry...." << std::endl;
		std::cout << "Last Name: ";
		std::getline(std::cin, this->_lastName);
		while (this->_lastName[0] && this->_lastName[0] == ' ')
			this->_lastName.erase();
	}
	std::cout << "Nickname: ";
	std::getline(std::cin, this->_nickName);
	while (this->_nickName[0] && this->_nickName[0] == ' ')
		this->_nickName.erase();
	while (this->_nickName.empty())
	{
		std::cout << "incorrect input, please retry...." << std::endl;
		std::cout << "Nickname: ";
		std::getline(std::cin, this->_nickName);
		while (this->_nickName[0] && this->_nickName[0] == ' ')
			this->_nickName.erase();
	}
	std::cout << "Phone Number: ";
	std::getline(std::cin, this->_phoneNumber);
	while (this->_phoneNumber[0] && this->_phoneNumber[0] == ' ')
		this->_phoneNumber.erase();
	while (this->_phoneNumber.empty())
	{
		std::cout << "incorrect input, please retry...." << std::endl;
		std::cout << "Phone Number: ";
		std::getline(std::cin, this->_phoneNumber);
		while (this->_phoneNumber[0] && this->_phoneNumber[0] == ' ')
			this->_phoneNumber.erase();
	}
	std::cout << "Darkest Secret: ";
	std::getline(std::cin, this->_darkestSecret);
	while (this->_darkestSecret[0] && this->_darkestSecret[0] == ' ')
		this->_darkestSecret.erase();
	while (this->_darkestSecret.empty())
	{
		std::cout << "incorrect input, please retry...." << std::endl;
		std::cout << "Darkest Secret: ";
		std::getline(std::cin, this->_darkestSecret);
		while (this->_darkestSecret[0] && this->_darkestSecret[0] == ' ')
			this->_darkestSecret.erase();
	}
	return ;
}
