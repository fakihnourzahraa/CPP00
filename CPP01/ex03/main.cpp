/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nour <nour@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 13:47:46 by nfakih            #+#    #+#             */
/*   Updated: 2025/12/30 18:27:34 by nour             ###   ########.fr       */
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
	Weapon	c = Weapon("club");
	HumanB jim("Jim");
	jim.set_weapon(c);
	jim.attack();
	c.setType("other");
	jim.attack();
    return (0);
}
