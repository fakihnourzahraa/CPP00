/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfakih <nfakih@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 13:47:46 by nfakih            #+#    #+#             */
/*   Updated: 2025/12/29 15:40:54 by nfakih           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "fstream"
#include "iomanip"
#include "cstdlib"

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Memory address of string var: " << &str << std::endl;
	std::cout << "Memory address held by stringptr: " << stringPTR << std::endl;
	std::cout << "Memory address held by stringref: " << &stringREF << std::endl;
	
	std::cout << "Value of string var: " << str << std::endl;
	std::cout << "Value held by stringptr: " << *stringPTR << std::endl;
	std::cout << "Value held by stringref: " << stringREF << std::endl;
    return (0);
}