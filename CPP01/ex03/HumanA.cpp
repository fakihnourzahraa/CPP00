/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nour <nour@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 20:52:27 by nour              #+#    #+#             */
/*   Updated: 2026/01/03 13:30:11 by nour             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanA.hpp"

void HumanA::attack(void)
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
	return ;
}

HumanA::HumanA(std:: string n, Weapon &w) : weapon (w)
{
	name = n;
}
//references need to be initialized
void HumanA::set_name(std::string str)
{
    name = str;
	return ;
}

std::string HumanA::get_name(void)
{
	return (name);
}
Weapon      &HumanA::get_weapon(void)
{
	return (weapon);
}
