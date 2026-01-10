/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfakih <nfakih@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 18:52:13 by nour              #+#    #+#             */
/*   Updated: 2026/01/10 15:58:39 by nfakih           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Character.hpp"

Character::Character()
{
	for (int j = 0; j < 4; j++)
		availability[j] = 0;
	this->name = "Default";
	std::cout << "Default character constructor is called" << std::endl;
}

Character::~Character()
{
	std::cout << "Character destructor is called" << std::endl;
}

Character::Character(std::string const &name)
{
	for (int j = 0; j < 4; j++)
		availability[j] = 0;
	this->name = name;
	std::cout << "Character constructor is called" << std::endl;
}

Character &Character::operator=(const Character &other)
{
	int j = 0;
	std::cout << "Character copy assignment operator called" << std::endl;
    if (this != &other)
    {
	    return (*this);
	}
	this->name = other.name;
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
	while (i < 4)
	{
		if ()
	}
}
void	Character::unequip(int inx)
{
	(void) inx;
}

void	Character::use(int idx, ICharacter &target)
{
	(void) idx;
	(void) target;
}
