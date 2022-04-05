#include <chrono>
#include <iostream>
#include "Account.hpp"

void Account::_displayTimestamp(void)
{
	std::cout << "[" << std::chrono::system_clock::now() << "]";
}

