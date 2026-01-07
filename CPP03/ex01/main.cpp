/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfakih <nfakih@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 13:47:46 by nfakih            #+#    #+#             */
/*   Updated: 2026/01/07 16:07:38 by nfakih           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"

int main()
{
    ScavTrap scav("Sarah");
    scav.attack("target");
    scav.attack("target");

    std::cout << std::endl;

    scav.guardGate();
    std::cout << std::endl;

    scav.beRepaired(20);
    scav.takeDamage(50);
    scav.takeDamage(100);
    std::cout << std::endl;
    scav.attack("target");
    std::cout << std::endl;
    ScavTrap scav3("Ali");
    scav3 = scav;
    ScavTrap scav2("Mohamad");
    std::cout << std::endl;
    std::cout << std::endl;
    return (0);
}