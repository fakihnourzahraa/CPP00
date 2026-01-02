/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nour <nour@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 13:47:46 by nfakih            #+#    #+#             */
/*   Updated: 2026/01/02 14:51:38 by nour             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

int main()
{
    std::cout << "=== Creating ClapTrap ===" << std::endl;
    ClapTrap clap("Bob");
    
    std::cout << "\n=== Testing attack ===" << std::endl;
    clap.attack("target1");
    clap.attack("target2");
    clap.attack("target3");
    
    std::cout << "\n=== Testing repair ===" << std::endl;
    clap.beRepaired(5);
    clap.beRepaired(3);
    
    std::cout << "\n=== Testing take damage ===" << std::endl;
    clap.takeDamage(8);
    clap.takeDamage(5);
    
    std::cout << "\n=== Testing with no hit points ===" << std::endl;
    clap.attack("target4");
    clap.beRepaired(10);
    
    std::cout << "\n=== Testing copy constructor ===" << std::endl;
    ClapTrap clap2(clap);
    
    std::cout << "\n=== Testing assignment operator ===" << std::endl;
    ClapTrap clap3("Alice");
    clap3 = clap;
    
    std::cout << "\n=== Destructors ===" << std::endl;
    return 0;
}
