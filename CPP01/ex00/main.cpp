/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfakih <nfakih@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 13:47:46 by nfakih            #+#    #+#             */
/*   Updated: 2026/01/05 11:08:49 by nfakih           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int main(void)
{
	Zombie default_zombie;
	default_zombie.announce();
	default_zombie.set_name("Aya");
	default_zombie.announce();

	std::cout << std::endl;
	Zombie *zom = newZombie("Foo");
	zom->announce();
	delete zom;

	std::cout << std::endl;
	randomChump("random");
    return (0);
}
