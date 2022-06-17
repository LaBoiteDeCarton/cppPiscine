#include <iostream>
#include <iomanip>
#include <string>
#include <tgmath.h>

#define M_USAGE "Usage : ./convert <string>"

std::string	getType(std::string const &s)
{
	std::string		special[8] = {"inf", "+inf", "-inf", "nan", "inff", "+inff", "-inff", "nanf"};
	unsigned long	i;
	unsigned long	k;

	for (i = 0; i < 8; i++)
	{
		if (! special[i].compare(s) && i < 4)
			return ("DOUBLE");
		if (! special[i].compare(s))
			return ("FLOAT");
	}
	k = 0;
	if (s.at(0) == '-' || s.at(0) == '+')
		k = 1;
	for (i = k; i < s.length(); i++)
	{
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

void	cast_from_double(std::string arg)
{
	double	d;

	try
	{
		d = std::stod(arg);
	}
	catch (std::exception &e)
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
		return ;
	}
	if (d > 127. || d < 0. || d != d)
		std::cout << "char: impossible" << std::endl;
	else if (d < 32. || d > 126.)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(d) << "'" << std::endl;
	if (d < std::numeric_limits<int>::min() || d > std::numeric_limits<int>::max() || d != d)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(d) << std::endl;
	std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
	std::cout << "double: " << d << std::endl;
}

void	cast_from_float(std::string arg)
{
	float	f;

	try
	{
		f = std::stof(arg);
	}
	catch (std::exception &e)
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
		return ;
	}
	if (f > 127.f || f < 0.f || f != f)
		std::cout << "char: impossible" << std::endl;
	else if (f < 32.f || f > 126.f)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(f) << "'" << std::endl;
	if (f < std::numeric_limits<int>::min() || f > std::numeric_limits<int>::max() || f != f)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(f) << std::endl;
	std::cout << "float: " << f << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(f) << std::endl;
}

void	cast_from_int(std::string arg)
{
	int		i;

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
	if (i > 127)
		std::cout << "char: impossible" << std::endl;
	else if (i < 32 || i > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << std::setprecision(1);
	std::cout << "float: " << static_cast<float>(i) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(i) << std::endl;
}

void	cast_from_char(std::string arg)
{
	char	c;

	if (arg.length() > 1)
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
		return ;
	}
	c = arg.at(0);
	std::cout << "char: '" << c << "'" <<std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << std::setprecision(1);
	std::cout << "float: " << static_cast<float>(c) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << std::endl;
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
	std::cout << std::fixed;
	switch (i)
	{
		case 0: cast_from_char(arg); break ;
		case 1: cast_from_int(arg); break ;
		case 2: cast_from_float(arg); break ;
		case 3: cast_from_double(arg); break ;
	}
	return (0);
}