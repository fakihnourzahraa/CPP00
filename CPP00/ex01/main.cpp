/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfakih <nfakih@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 18:19:16 by nfakih            #+#    #+#             */
/*   Updated: 2025/12/29 18:23:37 by nfakih           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Phonebook.hpp"

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
