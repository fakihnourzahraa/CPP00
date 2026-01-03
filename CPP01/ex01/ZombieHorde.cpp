/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nour <nour@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 14:25:41 by nour              #+#    #+#             */
/*   Updated: 2026/01/03 13:24:13 by nour             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	int		i;
    Zombie *zombie = new Zombie[N];

	i = 0;
	while (i < N)
	{
		zombie[i].set_name(name);
		i++;
	}
	return (zombie);
}

// Zombie	*zombieHorde(int N, std::string name)
// {
// 	int		i;
//     Zombie *zombie = new Zombie[N];

// 	i = 1;
// 	zombie[0].set_name("mariam");
// 	while (i < N)
// 	{
// 		if (i %2 == 0)
// 			zombie[i].set_name(name);
// 		else
// 			zombie[i].set_name(name + "X");
// 		i++;
// 	}
// 	return (zombie);
// }
