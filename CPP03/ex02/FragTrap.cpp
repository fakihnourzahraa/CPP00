/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nour <nour@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 20:52:27 by nour              #+#    #+#             */
/*   Updated: 2026/01/02 17:08:29 by nour             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
	std::cout << "FragTrap " << name << " created" << std::endl;
}

void	FragTrap::attack(const std::string &target)
{
	if (this->hit_points > 0 && this->energy_points > 0)
	{
		std::cout << "FragTrap " << this->name << " is attacking" << std::endl;
		this->energy_points = this->energy_points - 1;
	}
	else
	{
		std::cout << "FragTrap " << this->name << " doesn't have enough points" << std::endl;
	}
	return ;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->name << " destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
    std::cout << "FragTrap copy constructor is called" <<std::endl;
}
FragTrap  &FragTrap::operator=(const FragTrap &other)
{
    std::cout << "FragTrap copy assignement constructor is called" << std::endl;
    if (this == &other)
        return *this;
	ClapTrap::operator=(other);
    return (*this);
}

void	FragTrap::highFiveGuys(void)
{
	std::cout << "FragTrap " << this->name << " high fives guys" << std::endl;
}
