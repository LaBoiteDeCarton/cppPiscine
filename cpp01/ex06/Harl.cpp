#include "Harl.hpp"

Harl::Harl( void )
{
	return ;
}

Harl::~Harl()
{
	return ;
}

void    Harl::complain( std::string level )
{
	int		i_lvl;
	
	i_lvl = (level.compare("DEBUG") == 0);
	i_lvl += (level.compare("INFO") == 0) * 2;
	i_lvl += (level.compare("WARNING") == 0) * 3;
	i_lvl += (level.compare("ERROR") == 0) * 4;
	switch (i_lvl)
	{
		case 0: this->random(); break;
		case 1: this->debug();
		case 2: this->info();
		case 3: this->warning();
		case 4: this->error();
	}
	return ;
}

void Harl::debug( void )
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl << std::endl;
}

void Harl::info( void )
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl << std::endl;
}

void Harl::warning( void )
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl << std::endl;
}

void Harl::error( void )
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl << std::endl;
}

void Harl::random ( void )
{
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}
