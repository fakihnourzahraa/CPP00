/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nour <nour@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 18:52:13 by nour              #+#    #+#             */
/*   Updated: 2026/01/17 15:19:41 by nour             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Character.hpp"

Character::Character()
{
	for (int j = 0; j < 4; j++)
		availability[j] = 0;
	this->name = "Default";
	this->r = 0;
	capacity = 100;
	std::cout << "Default character constructor is called" << std::endl;
}

Character::~Character()
{
	int j = 0;
	while (j < r)
	{
		if(disposal[j])
		{
			delete (disposal[j]);
			disposal[j] = NULL;
		}
		j++;
	}

	int i = 0;
	while (i < 4)
	{
		if (availability[i] == 0)
		{
			if (inventory[i])
			{	delete inventory[i];
				inventory[i] = NULL;
			}
		}
		i++;
	}
	std::cout << "Character destructor is called" << std::endl;
}

Character::Character(std::string const &name)
{
	for (int j = 0; j < 4; j++)
		availability[j] = 1;
	this->name = name;
	this->r = 0;
	std::cout << "Character constructor is called" << std::endl;
}

Character &Character::operator=(const Character &other)
{
	// int j = 0;
	std::cout << "Character copy assignment operator called" << std::endl;
    if (this != &other)
    {
	    return (*this);
	}
	this->name = other.name;
	this->r = other.r;
    return (*this);
}

Character::Character(const Character &other)
{
	(void) other;
	std::cout << "Character copy operator is called" << std::endl;
}

std::string const &Character::getName() const
{
	return (this->name);
}

void	Character::equip(AMateria *m)
{
	int i = 0;
	while (i < 4)
	{
		if (availability[i] == 1)
		{
			availability[i] = 0;
			inventory[i] = m;
			return ;
		}
		i++;
	}
	disposal[r] = m;
	r++;
}

void	Character::unequip(int inx)
{
	if (inx >= 4 || inx < 0)
		return ;
	if (availability[inx] == 0)
	{
		availability[inx] = 1;
		disposal[r] = inventory[inx];
		r++;
		inventory[inx] = NULL;
	}
}

void	Character::use(int idx, ICharacter &target)
{
	(void) idx;
	(void) target;
}
