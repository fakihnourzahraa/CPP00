/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nour <nour@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 13:47:46 by nfakih            #+#    #+#             */
/*   Updated: 2026/01/03 15:37:46 by nour             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"

int main()
{
    ScavTrap scav("Charlie");
    scav.attack("target");
    scav.guardGate();

    std::cout << std::endl;
    scav.beRepaired(20);
    scav.takeDamage(80);
    scav.takeDamage(60);

    scav.attack("target");
    
    std::cout << std::endl;

    ScavTrap scav2(scav);
    ScavTrap scav3("Diana");
    scav3 = scav;
    
    std::cout << std::endl;
    return 0;
}