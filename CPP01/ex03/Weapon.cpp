/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nour <nour@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 20:52:27 by nour              #+#    #+#             */
/*   Updated: 2025/12/30 17:35:16 by nour             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"

const std::string &Weapon::getType(void)
{
	std::string &ref = type;
    return (ref);
}

void	Weapon::setType(std::string set)
{
	type = set;
	return ;
}

Weapon::Weapon(std::string type)
{
	setType(type);
}