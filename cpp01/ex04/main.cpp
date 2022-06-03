#include <string>
#include <iostream>
#include <fstream>

std::string	ft_replace(std::string line, std::string sed1, std::string sed2)
{
	std::string newline;

	while (!line.empty())
	{
		if (!line.compare(0, sed1.length(), sed1))
		{
			newline.append(sed2);
			line.erase(0, sed1.length());
		}
		else
		{
			newline.append(line, 0, 1);
			line.erase(line.begin());
		}
	}
	return (newline);
}

int	main(int ac, char **av)
{
	std::ifstream	ifs;
	std::ofstream	ofs;
	std::string		file;
	std::string		buff;

	if (ac != 4)
	{
		std::cout << "Error: bad number of argument" << std::endl;
		return (2);
	}
	file = av[1];
	ifs.open(file, std::ifstream::in);
	if (!ifs.is_open())
	{
		std::cout << "Error: bad input file" << std::endl;
		return (2);
	}
	ofs.open(file + ".replace", std::ofstream::out);
	if (!ofs.is_open())
	{
		std::cout << "Error: something went wrong on creating the file";
		ifs.close();
		return (2);
	}
	while (getline(ifs, buff))
		ofs << ft_replace(buff, av[2], av[3]) << std::endl;
	ofs.close();
	ifs.close();
	return (0);
}