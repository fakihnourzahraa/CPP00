/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfakih <nfakih@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 14:40:14 by nfakih            #+#    #+#             */
/*   Updated: 2025/12/29 14:55:00 by nfakih           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

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