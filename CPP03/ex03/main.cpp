/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nour <nour@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 13:47:46 by nfakih            #+#    #+#             */
/*   Updated: 2026/01/03 15:39:56 by nour             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "DiamondTrap.hpp"

int main()
{

    DiamondTrap diamond("Diamond");

    diamond.attack("target1");

    diamond.takeDamage(30);

    diamond.beRepaired(20);
    diamond.guardGate();

    diamond.whoAmI();

    DiamondTrap copy(diamond);
    copy.whoAmI();

    DiamondTrap assigned("Assigned");
    assigned = diamond;
    assigned.whoAmI();
    
    std::cout << std::endl;
  
    return 0;
}