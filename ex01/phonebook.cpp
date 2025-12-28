/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nour <nour@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 20:52:27 by nour              #+#    #+#             */
/*   Updated: 2025/12/28 23:15:17 by nour             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Contact::Contact()
{
    first_name = "";
    last_name = "";
    nickname = "";
    phone_number = "";
    darkest_secret = "";
}

void Phonebook::add(int i)
{
    Contact		&contact = Phonebook::contact[i];
    std::string str;

    std::cout << "Enter first name: " <<std::endl;
    std::getline(std::cin, str);
	contact.set_fname(str);
    std::cout << "Enter last name: " <<std::endl;
    std::getline(std::cin, str);
	contact.set_lname(str);
    std::cout << "Enter nickname: " <<std::endl;
    std::getline(std::cin, str);
	contact.set_nickname(str);
    std::cout << "Enter phone number: " <<std::endl;
    std::getline(std::cin, str);
	contact.set_num(str);
    std::cout << "Enter darkest secret:" <<std::endl;
    std::getline(std::cin, str);
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
		std::cout << str << "|"<<std::endl;
		i++;
		contact = Phonebook::contact[i];
	}
	std::cout << "Enter user to display: ";
	std::getline(std::cin, str);
	i = std::atoi(str.c_str());
	if (i >= 8)
	{
		std::cout << "out of range, sorry"<<std::endl;
	}
	else
	{
		contact =Phonebook::contact[i];
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

int main(void)
{
    Phonebook book;
    std::string command;
    int i;

    i = 0;
    while (1)
    {
        std::cout << "Enter a command (ADD, SEARCH, EXIT): " << std::endl;
        std::getline(std::cin, command);
        if (command == "ADD")
        {
            if (i == 8)
                i = 0;
            book.add(i);   
			i++;
        }
        else if (command == "SEARCH")
            book.search();
        else if (command == "EXIT")
            break ;
    }
	book.exit();
    return (0);
}
