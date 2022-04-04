#include <iomanip>
#include <cstring>
#include <stdlib.h>
#include "phonebook.hpp"

PhoneBook::PhoneBook( void )
{
	this->_nb_contacts = 0;
	return ;
}

PhoneBook::~PhoneBook( void )
{
	std::cout << "Quit PhoneBook." << std::endl;
	return ;
}

void PhoneBook::add(void)
{
	int	index;
	std::string line;

	if (this->_nb_contacts < 9)
	{
		this->_nb_contacts++;
		index = this->_nb_contacts - 1;
	}
	else
		index = 0;
	std::cout << "What's your first name : ";
	std::getline(std::cin, this->_contacts[index].first_name);
	std::cout << "What's your last name : ";
	std::getline(std::cin, this->_contacts[index].last_name);
	std::cout << "What's your nickname : ";
	std::getline(std::cin, this->_contacts[index].nickname);
	std::cout << "What's your phone number : ";
	std::getline(std::cin, this->_contacts[index].phone_number);
	std::cout << "What's your darkest secret : ";
	std::getline(std::cin, this->_contacts[index].darkest_secret);
}

void	PhoneBook::_print_info(std::string str)
{
	if (str.length() > 10)
	{
		str = str.insert(9, ".");
		str = str.substr(0, 10);
	}
	std::cout << "|" << std::setw(10) << std::setfill(' ') << str;
}

void	PhoneBook::search(void)
{
	int index;
	std::string line;

	std::cout << "|-------------------------------------------|" << std::endl;
    std::cout << "|   Index  |first name|last name | nickname |" << std::endl;
    std::cout << "|----------|----------|----------|----------|" << std::endl;
	for (int i = 0; i < this->_nb_contacts; i++)
	{
		std::cout << "|" << std::setw(10) << std::setfill(' ') << i + 1;
		this->_print_info(this->_contacts[i].first_name);
		this->_print_info(this->_contacts[i].last_name);
		this->_print_info(this->_contacts[i].nickname);
		std::cout << "|" << std::endl;
	}
	std::cout << "|-------------------------------------------|" << std::endl;
	if (!this->_nb_contacts)
		return ;
	std::cout << "Please enter an index : ";
	std::getline(std::cin, line);
	index = atoi(line.c_str());
	if (index > this->_nb_contacts || index <= 0)
	{
		std::cout << "Index not in range." << std::endl;
		return ;
	}
	std::cout << "First name : " << this->_contacts[index - 1].first_name << std::endl;
	std::cout << "Last name : " << this->_contacts[index - 1].last_name << std::endl;	
	std::cout << "Nickname : " << this->_contacts[index - 1].nickname << std::endl;	
	std::cout << "Phone number : " << this->_contacts[index - 1].phone_number << std::endl;	
	std::cout << "Darkest secret : " << this->_contacts[index - 1].darkest_secret << std::endl;		
}