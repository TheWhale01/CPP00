#include <iomanip>
#include "phonebook.hpp"

PhoneBook::PhoneBook( void )
{
	this->_nb_contacts = 0;
	return ;
}

PhoneBook::~PhoneBook( void )
{
	std::cout << "Destructor called." << std::endl;
	return ;
}

void PhoneBook::add(void)
{
	int	index;

	if (this->_nb_contacts < 9)
	{
		this->_nb_contacts++;
		index = this->_nb_contacts - 1;
	}
	else
		index = 0;
	std::cout << "Creating new contact\nWhat's his first name ?" << std::endl;
	std::cin >> this->_contacts[index].first_name;
	std::cout << "What's his last name ?" << std::endl;
	std::cin >> this->_contacts[index].last_name;
	std::cout << "What's his nickname ?" << std::endl;
	std::cin >> this->_contacts[index].nickname;
	std::cout << "What's his phone number ?" << std::endl;
	std::cin >> this->_contacts[index].phone_number;
	std::cout << "What's his darkest secrect ?" << std::endl;
	std::cin >> this->_contacts[index].darkest_secret;
	std::cout << "New contact saved !" << std::endl;
}

void	PhoneBook::search(void)
{
	for (int i = 0; i < this->_nb_contacts; i++)
		std::cout << this->_contacts[i].first_name << std::endl;
}