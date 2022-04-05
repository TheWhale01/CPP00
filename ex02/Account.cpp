#include <ctime>
#include <iomanip>
#include <iostream>
#include "Account.hpp"

Account::Account( int initial_deposit )
{
	this->_amount = initial_deposit;
	return ;
}

Account::~Account( void )
{
	std::cout << "Destructor called." << std::endl;
	return ;
}

int Account::getNbAccounts(void)
{
	_displayTimestamp();
	return (0);
}

int Account::getTotalAmount(void)
{
	_displayTimestamp();
	return (0);
}

int Account::getNbDeposits(void)
{
	_displayTimestamp();
	return (0);
}

int Account::getNbWithdrawals(void)
{
	_displayTimestamp();
	return (0);
}

void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	return ;
}

void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	(void)deposit;
	return ;
}

bool Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	(void)withdrawal;
	return (true);
}

int	Account::checkAmount(void) const
{
	_displayTimestamp();
	return (0);
}

void Account::displayStatus(void) const
{
	_displayTimestamp();
	return ;
}

void Account::_displayTimestamp(void)
{
	std::time_t t = std::time(0);
	std::tm *now = std::localtime(&t);

	std::cout << "[" << now->tm_year + 1900;
	std::cout << std::setw(2) << std::setfill('0') << now->tm_mon + 1;
	std::cout << std::setw(2) << std::setfill('0') << now->tm_mday << "_";
	std::cout << std::setw(2) << std::setfill('0') << now->tm_hour;
	std::cout << std::setw(2) << std::setfill('0') << now->tm_min;
	std::cout << std::setw(2) << std::setfill('0') << now->tm_sec << "]\t";
}
