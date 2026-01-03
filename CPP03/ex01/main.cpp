/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nour <nour@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 13:47:46 by nfakih            #+#    #+#             */
/*   Updated: 2026/01/03 15:23:46 by nour             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{

    ScavTrap scav("Sarah");
    scav.attack("target");
    scav.attack("target");

    std::cout << std::endl;

    scav.guardGate();

    scav.beRepaired(20);
    scav.takeDamage(50);
    scav.takeDamage(100);

    scav.attack("target");
    std::cout << std::endl;
    ScavTrap scav2(scav);

    ScavTrap scav3("Ali");
    scav3 = scav;
    std::cout << std::endl;
    return (0);
}