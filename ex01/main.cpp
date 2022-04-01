#include <iostream>
#include "phonebook.hpp"

int main(void)
{
	PhoneBook phonebook;
	std::string entry;

	std::cout << "Welcome to the PhoneBook !" << std::endl;
	while (1)
	{
		std::cin >> entry;
		if (!entry.compare("EXIT"))
			return (0);
		else if (!entry.compare("ADD"))
			phonebook.add();
		else if (!entry.compare("SEARCH"))
			phonebook.search();
	}
	return (0);
}