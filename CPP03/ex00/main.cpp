/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfakih <nfakih@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 13:47:46 by nfakih            #+#    #+#             */
/*   Updated: 2026/01/07 16:04:34 by nfakih           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

int main()
{
    ClapTrap clap("Bob");

    clap.attack("target");
    clap.attack("target");

    std::cout << std::endl;

    clap.beRepaired(5);
    clap.takeDamage(15);

    std::cout << std::endl;

    clap.attack("target");

    ClapTrap clap2(clap);
    ClapTrap clap3("Alice");
	clap3.attack("target");
    clap3 = clap;

    std::cout << std::endl;
    clap3.attack("target");
    clap2.attack("target");
    return 0;
}
