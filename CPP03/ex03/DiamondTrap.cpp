/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nour <nour@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 17:31:50 by nour              #+#    #+#             */
/*   Updated: 2026/01/02 17:53:25 by nour             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("default"), ScavTrap(), FragTrap()
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

void	DiamondTrap::attack(const std::string &target)
{
	if (this->hit_points > 0 && this->energy_points > 0)
	{
		std::cout << "DiamondTrap " << this->name << " is attacking " << target << " causing "
		<< this->attack_damage << " points of damage" << std::endl;
		this->energy_points = this->energy_points - 1;
	}
	else
	{
		std::cout << "DiamondTrap " << this->name << " doesn't have enough points" << std::endl;
	}
	return ;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->name << " destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other), FragTrap()
{
    std::cout << "DiamondTrap copy constructor is called" <<std::endl;
}
DiamondTrap  &DiamondTrap::operator=(const DiamondTrap &other)
{
    std::cout << "DiamondTrap copy assignement constructor is called" << std::endl;
    if (this == &other)
        return *this;
	this->name = other.name;
	ClapTrap::operator=(other);
	ScavTrap::operator=(other);
	FragTrap::operator=(other);
    return (*this);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "I am diamond trap " << this->name << " and my clap trap name is " << ClapTrap::name << std::endl;
}
