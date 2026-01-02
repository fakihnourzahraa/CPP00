/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nour <nour@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 20:28:04 by nour              #+#    #+#             */
/*   Updated: 2026/01/02 15:33:19 by nour             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "iostream"
# include "fstream"
# include "iomanip"
# include "cstdlib"
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap 
{
    private: 
    std::string		name;
    unsigned int	hit_points;
	unsigned int	energy_points;
	unsigned int	attack_damage;

    public:
	ScavTrap(std::string name);
	~ScavTrap();
	ScavTrap(const ScavTrap &other);
	ScavTrap &operator=(const ScavTrap &other);
	void			attack(const std::string &target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);
	void			guardGate();
	unsigned int	get_hitPoints(void);
	unsigned int	get_energyPoints(void);
	unsigned int	get_attackDamage(void);

};

#endif