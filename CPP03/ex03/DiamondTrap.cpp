/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfakih <nfakih@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 17:31:50 by nour              #+#    #+#             */
/*   Updated: 2026/01/07 17:37:26 by nfakih           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("default_clap_name"), ScavTrap(), FragTrap()
{
	this->name = "default";

	this->hit_points = FragTrap::hit_points;
	this->energy_points = ScavTrap::energy_points;
	this->attack_damage = FragTrap::attack_damage;
	std::cout << "DiamondTrap default is created" << std::endl;
}
DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	this->name = name;
	this->hit_points = FragTrap::hit_points;
	this->energy_points = ScavTrap::energy_points;
	this->attack_damage = FragTrap::attack_damage;
	std::cout << "DiamondTrap " << name << " is created" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->name << " destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other), ScavTrap(other), FragTrap(other)
{
	name = other.name;
	hit_points = other.hit_points;
	energy_points = other.energy_points;
	attack_damage = other.attack_damage;
    std::cout << "DiamondTrap copy constructor is called" <<std::endl;
}
DiamondTrap  &DiamondTrap::operator=(const DiamondTrap &other)
{
    std::cout << "DiamondTrap copy assignement constructor is called" << std::endl;
    if (this == &other)
    {    
		return (*this);
	}
	this->name = other.name;
	ClapTrap::operator=(other);
    return (*this);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "I am diamond trap " << this->name << " and my clap trap name is " << ClapTrap::name << std::endl;
}
