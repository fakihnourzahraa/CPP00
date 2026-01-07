/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfakih <nfakih@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 13:47:46 by nfakih            #+#    #+#             */
/*   Updated: 2026/01/07 17:11:41 by nfakih           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "DiamondTrap.hpp"

int main()
{

    DiamondTrap diamond("aya");
	std::cout << std::endl;

    diamond.attack("target1");

    diamond.takeDamage(30);
	std::cout << std::endl;

    diamond.beRepaired(20);
		std::cout << std::endl;

    diamond.guardGate();
	std::cout << std::endl;

    diamond.whoAmI();
	std::cout << std::endl;

    DiamondTrap copy(diamond);
    copy.whoAmI();
	std::cout << std::endl;

    DiamondTrap assigned("rayan");
    assigned = diamond;
    assigned.whoAmI();
    
    std::cout << std::endl;
  
    return 0;
}


