/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nour <nour@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 13:47:46 by nfakih            #+#    #+#             */
/*   Updated: 2026/01/03 12:48:38 by nour             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int main(void)
{
	Zombie default_zombie;
	default_zombie.set_name("aya");
	default_zombie.announce();

	std::cout << std::endl;
	Zombie *zom = newZombie("nour");
	zom->announce();
	zom->~Zombie();

	std::cout << std::endl;
	randomChump("random");
    return (0);
}
