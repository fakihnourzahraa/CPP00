/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfakih <nfakih@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 13:47:46 by nfakih            #+#    #+#             */
/*   Updated: 2026/01/07 16:11:22 by nfakih           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

int main()
{
    FragTrap frag("Charlie");
    frag.attack("target");
    frag.highFiveGuys();

    std::cout << std::endl;
    frag.beRepaired(20);
    frag.takeDamage(180);

    frag.attack("target");
    
    std::cout << std::endl;

    FragTrap frag2(frag);
    frag2 = frag;
    FragTrap frag3("Diana");

    
    std::cout << std::endl;
    return 0;
}