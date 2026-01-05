/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfakih <nfakih@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 13:47:46 by nfakih            #+#    #+#             */
/*   Updated: 2026/01/05 11:15:52 by nfakih           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int main(void)
{
	int	i = 5;
	Zombie *zom = zombieHorde(5, "nour");
	for (int j = 0; j < i; j++)
	{
		zom[j].announce();
	}

	std::cout << std::endl;
	(zom)->set_name("m");
	zom[0].announce();
	std::cout << std::endl;

	delete[] zom;
    return (0);
}
