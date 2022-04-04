#ifndef __PHONEBOOK_HPP__
# define __PHONEBOOK_HPP__

# include <iostream>

class Contact
{
	public:
		std::string 	first_name;
		std::string 	last_name;
		std::string 	nickname;
		std::string		phone_number;
		std::string		darkest_secret;
};

class PhoneBook
{
	public:
		PhoneBook( void );
		~PhoneBook( void );
		void	add(void);
		void	search(void);
	
	private:
		int		_nb_contacts;
		Contact _contacts[8];
		void	_print_info(std::string str);
};

#endif