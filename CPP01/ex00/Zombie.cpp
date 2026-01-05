/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfakih <nfakih@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 20:52:27 by nour              #+#    #+#             */
/*   Updated: 2026/01/05 11:08:56 by nfakih           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

void Zombie::set_name(std::string str)
{
    name = str;
}

void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}
Zombie::~Zombie()
{
	std::cout << name << " is destroyed" << std::endl;
}
Zombie::Zombie(std::string name)
{
	set_name(name);
	std::cout << name << " is created" << std::endl;
}
Zombie::Zombie()
{
	name = "Default";
	std::cout << name << " is created" << std::endl;
}