/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfakih <nfakih@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 20:52:27 by nour              #+#    #+#             */
/*   Updated: 2026/01/05 11:49:24 by nfakih           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanB.hpp"

void HumanB::attack(void)
{
	if (weapon)
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
	else
		std::cout << name << " doesn't have a weapon to attack with" << std::endl;
	return ;
}
HumanB::HumanB(std:: string n)
{
	weapon = NULL;
	name = n;
}
void HumanB::set_name(std::string str)
{
    name = str;
	return ;
}

std::string HumanB::get_name(void)
{
	return (name);
}
Weapon      *HumanB::get_weapon(void)
{
	return (weapon);
}
void	HumanB::set_weapon(Weapon &w)
{
	weapon = &w;
	return ;
}
