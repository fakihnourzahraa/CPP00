/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfakih <nfakih@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 13:47:46 by nfakih            #+#    #+#             */
/*   Updated: 2026/01/05 11:49:06 by nfakih           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanA.hpp"
# include "HumanB.hpp"

int main(void)
{
	Weapon w = Weapon("crude spiked club");
	HumanA bob("Bob", w);
	bob.attack();
	w.setType("something");
	bob.attack();
	w.setType("club");
	HumanB jim("Jim");
	std::cout << std::endl;
	jim.attack();
	jim.set_weapon(w);
	jim.attack();
	w.setType("other");
	jim.attack();
    return (0);
}
