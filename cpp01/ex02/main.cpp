#include <string>
#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string* stringPTR = &str;
	std::string& stringREF = str;

	std::cout << "Printing memory adress" << std::endl;
	std::cout << "Str address: " << &str << std::endl;
	std::cout << "StrPTR address: " << &stringPTR << std::endl;
	std::cout << "StrREF address: " << &stringREF << std::endl;
	std::cout << "Printing string content" << std::endl;
	std::cout << str << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
	stringREF[4] = 'o';
	std::cout << "Printing string content" << std::endl;
	std::cout << str << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
	str[6] = 'o';
	std::cout << "Printing string content" << std::endl;
	std::cout << str << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
	(*stringPTR)[9] = 'o';
	std::cout << "Printing string content" << std::endl;
	std::cout << str << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
	return (0);
}