/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfakih <nfakih@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 20:52:27 by nour              #+#    #+#             */
/*   Updated: 2026/01/07 15:50:49 by nfakih           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	name = "default";
	hit_points = 10;
	energy_points = 10;
	attack_damage = 0;
	std::cout << "ClapTrap default constructor is called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
	std::cout << "ClapTrap " << name << " is created" << std::endl;
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->hit_points > 0 && this->energy_points > 0)
	{
		std::cout << "ClapTrap " << this->name << " is attacking " << target << " causing "
		<< this->attack_damage << " points of damage" << std::endl;
		this->energy_points = this->energy_points - 1;
	}
	else
	{
		std::cout << "ClapTrap " << this->name << " doesn't have enough points" << std::endl;
	}
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hit_points > 0 && this->energy_points > 0)
	{
		std::cout << "ClapTrap " << this->name << " is repairing, regaining " << amount << " points." << std::endl;
		this->energy_points = this->energy_points - 1;	
		this->hit_points = this->hit_points + amount;
	}
	else
	{
		std::cout << "ClapTrap " << this->name << " doesn't have enough points" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	int a = hit_points - amount;
	if (a >= 0)
		this->hit_points = (unsigned int)a;
	else
		this->hit_points = 0;
	std::cout << "ClapTrap " << this->name << " lost " << amount << " hit points" << std::endl; 
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->name << " destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) : name(other.name), hit_points(other.hit_points), energy_points(other.energy_points), attack_damage(other.attack_damage)
{
    std::cout << "Copy constructor is called" <<std::endl;
}

ClapTrap  &ClapTrap::operator=(const ClapTrap &other)
{
    std::cout << "Copy assignement constructor is called" << std::endl;
    if (this == &other)
    {
        return *this;
    }
    name = other.name;
	hit_points = other.hit_points;
	energy_points = other.energy_points;
	attack_damage = other.attack_damage;
    return (*this);
}

// unsigned int	ClapTrap::get_hitPoints(void)
// {
// 	return (this->hit_points);
// }

// unsigned int	ClapTrap::get_energyPoints(void)
// {
// 	return (energy_points);
// }

// unsigned int	ClapTrap::get_attackDamage(void)
// {
// 	return (attack_damage);	
// }

// std::string	ClapTrap::get_name(void)
// {
// 	return (name);
// }
