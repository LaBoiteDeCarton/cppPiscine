#include "Account.hpp"
#include <iostream>
#include <iomanip>

Account::Account( int initial_deposit )
{
	
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_amount = initial_deposit;
	this->_accountIndex = Account::_nbAccounts++;
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex;
	std::cout << ";amount:" << this->checkAmount();
	std::cout << ";created" << std::endl;
	return ;
}

Account::~Account( void )
{
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex;
	std::cout << ";amount:" << this->checkAmount();
	std::cout << ";closed" << std::endl;
	return ;
}

int Account::getNbAccounts( void )
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals( void )
{
	return (Account::_totalNbWithdrawals);
}

void	Account::makeDeposit( int deposit )
{
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->checkAmount();
	std::cout << "deposit:" << deposit;
	this->_amount += deposit;
	this->_nbDeposits++;
	std::cout << ";p_amount:" << this->checkAmount();
	std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
	Account::_totalAmount += deposit;
	Account::_nbDeposits++;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->checkAmount();
	if (withdrawal > this->checkAmount())
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return (false);
	}
	std::cout << ";withdrawal:"<< withdrawal;
	this->_amount -= withdrawal;
	std::cout << ";p_amount:" << this->checkAmount();
	this->_nbWithdrawals++;
	Account::_totalAmount -= withdrawal;
	std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	Account::_nbWithdrawals++;
	return (true);
}

int	Account::checkAmount( void ) const
{
	return (this->_amount);
}

void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex;
	std::cout << ";amount:" << this->checkAmount();
	std::cout << "deposits:" << this->_nbDeposits;
	std::cout << ";withdrawals:" << this->_nbWithdrawals;
	std::cout << std::endl;
}

void Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << " accounts:" << Account::getNbAccounts();
	std::cout << ";total:" << Account::getTotalAmount();
	std::cout << "deposits:" << Account::getNbDeposits();
	std::cout << ";withdrawals:" << Account::getNbWithdrawals();
	std::cout << std::endl;
}

void Account::_displayTimestamp( void )
{
	time_t tt;
	struct tm *curr_time;

	tt = time(0);
	curr_time = localtime(&tt);
	std::cout << "[" << 1900 + curr_time->tm_year << std::setw(2) << std::setfill ('0') << curr_time->tm_mon << std::setw(2) << curr_time->tm_mday;
	std::cout << "_"<< std::setw(2) << curr_time->tm_hour << std::setw(2) << curr_time->tm_min << std::setw(2) << curr_time->tm_sec << "]";
	return ;
}

Account::Account( void )
{
	return ;
}

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

