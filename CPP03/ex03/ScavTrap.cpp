/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nour <nour@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 20:52:27 by nour              #+#    #+#             */
/*   Updated: 2026/01/03 15:33:57 by nour             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("default")
{
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	std::cout << "ScavTrap default is created" << std::endl;
	
}
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	std::cout << "ScavTrap " << name << " is created" << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->hit_points > 0 && this->energy_points > 0)
	{
		std::cout << "ScavTrap " << this->name << " is attacking " << target << " causing "
		<< this->attack_damage << " points of damage" << std::endl;
		this->energy_points = this->energy_points - 1;
	}
	else
	{
		std::cout << "ScavTrap " << this->name << " doesn't have enough points" << std::endl;
	}
	return ;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->name << " destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
    std::cout << "ScavTrap copy constructor is called" <<std::endl;
}
ScavTrap  &ScavTrap::operator=(const ScavTrap &other)
{
    std::cout << "ScavTrap copy assignement constructor is called" << std::endl;
    if (this == &other)
    {
		return (*this);
	}
	ClapTrap::operator=(other);
    return (*this);
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->name << " is in gate keeper mode" << std::endl;
}
