#include <iostream>
#include <iomanip>
#include <string>
#include <regex>

#define M_USAGE "Usage : ./convert <string>"

std::string	getType(std::string const &s)
{
	unsigned long i;

	for (i = 0; i < s.length(); i++)
	{
		if ((s.at(i) == 'f' || s.at(i) == 'F') && i == s.length() - 1)
			return ("FLOAT");
		if (s.at(i) == '.')
			break;
		if (!isdigit(s.at(i)))
			return ("CHAR");
	}
	if (i == s.length())
		return ("INT");
	i++;
	for (unsigned long j = i; j < s.length(); j++)
	{
		if ((s.at(j) == 'f' || s.at(j) == 'F') && j == s.length() - 1)
			return ("FLOAT");
		if (!isdigit(s.at(j)))
			return "CHAR";
	}
	return ("DOUBLE");
}

void	cast_from_int(std::string arg)
{
	int		i;
	char	c;
	float	f;
	double	d;

	try
	{
		i = std::stoi(arg);
	}
	catch (std::exception &e)
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
		return ;
	}
	if (i < 32 && i > 126)
		std::cout << "char: " << c << std::endl;
	i = static_cast<int>(c);
	std::cout << "int: " << i << std::endl;
	f = static_cast<float>(c);
	std::cout << "float: " << f << ".0f" << std::endl;
	d = static_cast<double>(c);
	std::cout << "double: " << d << ".0" << std::endl;
}

void	cast_from_char(std::string arg)
{
	char	c;
	int		i;
	float	f;
	double	d;

	if (arg.length() > 1)
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
		return ;
	}
	c = arg.at(0);
	std::cout << "char: " << c << std::endl;
	i = static_cast<int>(c);
	std::cout << "int: " << i << std::endl;
	f = static_cast<float>(c);
	std::cout << "float: " << f << ".0f" << std::endl;
	d = static_cast<double>(c);
	std::cout << "double: " << d << ".0" << std::endl;
}

int main( int ac, char **av )
{
	std::string arg;
	std::string	argType;
	std::string types[4] = { "CHAR", "INT", "FLOAT", "DOUBLE" };
	int			i;

	if (ac > 2)
		std::cerr << "Too much arguments :  " << M_USAGE << std::endl;
	if (ac == 1)
		std::cerr << "Not enough arguments : " << M_USAGE << std::endl;
	if (ac > 2 || ac == 1)
		return (2);
	arg = av[1];
	argType = getType(arg);
	for (i = 0; i < 4; i++)
		if( ! types[i].compare(argType))
			break ;
	switch (i)
	{
		case 0: cast_from_char(arg); break ;
		// case 1: cast_from_int(arg); break ;
		// case 2: cast_form_float(arg); break ;
		// case 3: cast_from_double(arg); break ;
	}
	return (0);
}