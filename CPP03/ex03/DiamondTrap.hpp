/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfakih <nfakih@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 17:32:14 by nour              #+#    #+#             */
/*   Updated: 2026/01/07 16:41:47 by nfakih           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "iostream"
# include "fstream"
# include "iomanip"
# include "cstdlib"
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
	std::string name;

    public:
	DiamondTrap();
	~DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap &other);
	DiamondTrap &operator=(const DiamondTrap &other);
	using ScavTrap::attack;
	void			highFiveGuys(void);
	void			whoAmI(void);
};

#endif