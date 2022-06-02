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

void	Contact::ShortShow(void)
{
	if (this->_firstName.length() <= 10)
	{
		std::cout << std::setw(10) << this->_firstName;
	}
	else
		std::cout << std::setw(10) << this->_firstName;
	std::cout << std::endl;
	return ;
}
void	Contact::LongShow(void)
{
	return ;
}

void	Contact::Fill()
{
	std::cout << "----------New Contact------------" << std::endl;
	std::cout << "First Name: ";
	std::cin >> this->_firstName;
	// this->_lastName = contact._lastName;
	// this->_nickName = contact._nickName;
	// this->_phoneNumber = contact._phoneNumber;
	// this->_darkestSecret = contact._darkestSecret;
	return ;
}
