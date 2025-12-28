/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nour <nour@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 20:52:27 by nour              #+#    #+#             */
/*   Updated: 2025/12/28 22:30:46 by nour             ###   ########.fr       */
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
// Phonebook::Phonebook()
// {
    
// }

void Phonebook::add(int i)
{
    Contact     &contact = Phonebook::contact[i];
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

void	Phonebook::search()
{
	
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
    // book.exit();
    return (0);
}
