/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nour <nour@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 13:47:46 by nfakih            #+#    #+#             */
/*   Updated: 2026/01/02 17:00:06 by nour             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    std::cout << "=== Creating ClapTrap ===" << std::endl;
    ClapTrap clap("Bob");
    
    std::cout << "\n=== Testing ClapTrap attack ===" << std::endl;
    clap.attack("target1");
    clap.attack("target2");
    clap.attack("target3");
    
    std::cout << "\n=== Testing ClapTrap repair ===" << std::endl;
    clap.beRepaired(5);
    clap.beRepaired(3);
    
    std::cout << "\n=== Testing ClapTrap take damage ===" << std::endl;
    clap.takeDamage(8);
    clap.takeDamage(5);
    
    std::cout << "\n=== Testing ClapTrap with no hit points ===" << std::endl;
    clap.attack("target4");
    clap.beRepaired(10);
    
    std::cout << "\n=== Testing ClapTrap copy constructor ===" << std::endl;
    ClapTrap clap2(clap);
    
    std::cout << "\n=== Testing ClapTrap assignment operator ===" << std::endl;
    ClapTrap clap3("Alice");
    clap3 = clap;
    
    std::cout << "\n\n========== SCAVTRAP TESTS ==========" << std::endl;
    
    std::cout << "\n=== Creating ScavTrap ===" << std::endl;
    ScavTrap scav("Charlie");
    
    std::cout << "\n=== Testing ScavTrap attack ===" << std::endl;
    scav.attack("enemy1");
    scav.attack("enemy2");
    
    std::cout << "\n=== Testing ScavTrap special ability ===" << std::endl;
    scav.guardGate();
    
    std::cout << "\n=== Testing ScavTrap repair (inherited) ===" << std::endl;
    scav.beRepaired(20);
    
    std::cout << "\n=== Testing ScavTrap take damage (inherited) ===" << std::endl;
    scav.takeDamage(50);
    scav.takeDamage(60);
    
    std::cout << "\n=== Testing ScavTrap with no hit points ===" << std::endl;
    scav.attack("enemy3");
    scav.beRepaired(10);
    
    std::cout << "\n=== Testing ScavTrap copy constructor ===" << std::endl;
    ScavTrap scav2(scav);
    
    std::cout << "\n=== Testing ScavTrap assignment operator ===" << std::endl;
    ScavTrap scav3("Diana");
    scav3 = scav;
    
    std::cout << "\n=== Destructors ===" << std::endl;
    return 0;
}