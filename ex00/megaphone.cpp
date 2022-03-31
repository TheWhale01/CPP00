/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hubretec <hubretec@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:24:06 by hubretec          #+#    #+#             */
/*   Updated: 2022/03/31 18:40:45 by hubretec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void print_upper_str(std::string str)
{
	for (size_t i = 0; i < str.length(); i++)
		std::cout << static_cast<char>(std::toupper(str[i]));
}

int main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < ac; i++)
		{
			std::string str(av[i]);
			print_upper_str(str);
		}
		std::cout << std::endl;
	}
	return (0);
}