/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nour <nour@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 20:28:04 by nour              #+#    #+#             */
/*   Updated: 2026/01/02 17:19:47 by nour             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include "iostream"
# include "fstream"
# include "iomanip"
# include "cstdlib"

class ClapTrap
{
    protected:
    std::string		name;
    unsigned int	hit_points;
	unsigned int	energy_points;
	unsigned int	attack_damage;

    public:
	ClapTrap();
	~ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &other);
	ClapTrap &operator=(const ClapTrap &other);
	void			attack(const std::string &target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);
	// unsigned int	get_hitPoints(void);
	// unsigned int	get_energyPoints(void);
	// unsigned int	get_attackDamage(void);
	// std::string		get_name(void);
};

#endif