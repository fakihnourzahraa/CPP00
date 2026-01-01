/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nour <nour@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 20:52:27 by nour              #+#    #+#             */
/*   Updated: 2026/01/01 17:39:03 by nour             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

void    Harl::complain(std::string level)
{
	switch (level[0])
	{
		case 'd':
			this->debug();
		case 'i':
			this->info();
		case 'w':
			this->warning();
		case 'e':
			this->error();		
	}
}


void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}
void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}
void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years, whereas you started working here just last month." << std::endl;
}
void	Harl::error(void)
{
std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;	
}
