/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nour <nour@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 13:47:46 by nfakih            #+#    #+#             */
/*   Updated: 2026/01/03 15:28:42 by nour             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap scav("Charlie");
    scav.attack("target");
    scav.guardGate();

    scav.beRepaired(20);
    scav.takeDamage(80);
    scav.takeDamage(60);

    scav.attack("target");
    scav.beRepaired(10);

    ScavTrap scav2(scav);
    

    ScavTrap scav3("Diana");
    scav3 = scav;
    
    std::cout << std::endl;
    return 0;
}