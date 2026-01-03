/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nour <nour@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 20:52:27 by nour              #+#    #+#             */
/*   Updated: 2026/01/03 13:30:25 by nour             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanB.hpp"

void HumanB::attack(void)
{
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
	return ;
}
HumanB::HumanB(std:: string n)
{
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
void	HumanB::set_weapon(Weapon w)
{
	Weapon *ref = &w;
	weapon = ref;
	return ;
}
