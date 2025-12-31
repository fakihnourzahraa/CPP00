/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfakih <nfakih@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 20:52:27 by nour              #+#    #+#             */
/*   Updated: 2025/12/31 13:51:17 by nfakih           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int	alpha(std::string str)
{
	for (unsigned long i = 0; i < str.length(); i++)
	{
		if (!isalpha(str[i]))
			return (0);
	}
	return (1);
}
int	digit(std::string str)
{
	for (unsigned long i = 0; i < str.length(); i++)
	{
		if (!isdigit(str[i]))
			return (0);
	}
	return (1);
}

void Phonebook::add(int i)
{
    Contact		&contact = Phonebook::contact[i];
    std::string str;

    std::cout << "Enter first name: " <<std::endl;
    if(!std::getline(std::cin, str) || str == "" || !alpha(str))
	{
		std::cin.clear();
		std::clearerr(stdin);
		std::clearerr(stdin);
		return; 
	}
	contact.set_fname(str);
    std::cout << "Enter last name: " <<std::endl;
    if(!std::getline(std::cin, str) || str == "" || !alpha(str))
	{
		std::cin.clear();
		std::clearerr(stdin);
		return;
	}
	contact.set_lname(str);
    std::cout << "Enter nickname: " <<std::endl;
    if(!std::getline(std::cin, str) || str == "" || !alpha(str))
	{
		std::cin.clear();
		std::clearerr(stdin);
		return;
	}
	contact.set_nickname(str);
    std::cout << "Enter phone number: " <<std::endl;
    if(!std::getline(std::cin, str) || str == "" || !digit(str))
	{
		std::cin.clear();
		std::clearerr(stdin);
		return;
	}
	contact.set_num(str);
    std::cout << "Enter darkest secret: " <<std::endl;
    if(!std::getline(std::cin, str) || str == "" )
	{
		std::cin.clear();
		std::clearerr(stdin);
		return;
	}
	contact.set_secret(str);
}

std::string truncate( std::string str) {
	int	len;

	len = str.length();
	if (len > 10)
	{
		str = str.substr(0, 10);
		str[9] = '.';
	}
	return (str);
}

void Phonebook::search(void)
{
 	Contact		contact;
	int			i;
	std::string	str;

	i = 0;
	std::cout << std::setw(10);
	std::cout << "Index" << "|";
	std::cout << std::setw(10);
	std::cout << "First Name" <<  "|";
	std::cout << std::setw(10);
	std::cout << "Last Name" <<  "|";
	std::cout << std::setw(10);
	std::cout << "Nickname" << "|"<<std::endl;
	
	contact = Phonebook::contact[i];
	while (contact.get_fname() != "")
	{
		std::cout << std::setw(10);
		std::cout << i << "|";
		std::cout << std::setw(10);
		str = truncate(contact.get_fname());
		std::cout << str <<  "|";
		std::cout << std::setw(10);
		str = truncate(contact.get_lname());
		std::cout << str <<  "|";
		std::cout << std::setw(10);
		str = truncate(contact.get_nickname());
		std::cout << str << "|" << std::endl;
		i++;
		contact = Phonebook::contact[i];
	}
	std::cout << "Enter user to display: ";
	if(!std::getline(std::cin, str) || str == "")
		std::exit(0);
	i = std::atoi(str.c_str());
	if (i >= 8 || i < 0)
	{
		std::cout << "out of range, sorry"<<std::endl;
	}
	else
	{
		contact = Phonebook::contact[i];
		if (contact.get_fname() != "")
		{
			std::cout << "First Name: " << contact.get_fname() << std::endl;
			std::cout << "Last Name: " << contact.get_lname() << std::endl;
			std::cout << "Nickname: " << contact.get_nickname() << std::endl;
			std::cout << "Phone Number: " << contact.get_num() << std::endl;
			std::cout << "Darkest Secret: " << contact.get_secret() << std::endl;
		}
	}
}

void	Phonebook::exit(void)
{
	std::exit(0);
}

