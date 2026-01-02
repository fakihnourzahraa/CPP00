/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nour <nour@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 20:52:27 by nour              #+#    #+#             */
/*   Updated: 2026/01/02 15:34:15 by nour             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 10;
	std::cout << name << " created" << std::endl;
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->hit_points > 0 && this->energy_points > 0)
	{
		std::cout << this->name << " attacking" << std::endl;
		this->energy_points = this->energy_points - 1;
	}
	else
	{
		std::cout << this->name << " doesn't have enough points" << std::endl;
	}
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hit_points > 0 && this->energy_points > 0)
	{
		std::cout << this->name << " repairing" << std::endl;
		this->energy_points = this->energy_points - 1;	
		this->hit_points = this->hit_points + amount;
	}
	else
	{
		std::cout << this->name << " doesn't have enough points" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->hit_points = this->hit_points - amount;
	std::cout << this->name << " lost " << amount << " hit points" << std::endl; 
}

ClapTrap::~ClapTrap()
{
	std::cout << this->name << " destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) : name(other.name), hit_points(other.hit_points), energy_points(other.energy_points), attack_damage(other.attack_damage)
{
    std::cout << "Copy constructor is called" <<std::endl;
}

ClapTrap  &ClapTrap::operator=(const ClapTrap &other)
{
    std::cout << "Copy assignement constructor is called" << std::endl;
    if (this == &other)
        return *this;
    name = other.name;
	hit_points = other.hit_points;
	energy_points = other.energy_points;
	attack_damage = other.attack_damage;
    return (*this);
}

unsigned int	ClapTrap::get_hitPoints(void)
{
	return (this->hit_points);
}

unsigned int	ClapTrap::get_energyPoints(void)
{
	return (energy_points);
}

unsigned int	ClapTrap::get_attackDamage(void)
{
	return (attack_damage);	
}
