/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nour <nour@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 18:52:13 by nour              #+#    #+#             */
/*   Updated: 2026/01/08 19:46:14 by nour             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Character.hpp"

Character::Character()
{
	std::cout << "Character constructor is called" << std::endl;
}

Character::~Character()
{
	std::cout << "Character destructor is called" << std::endl;
}

Character::Character(std::string const &name)
{
	this->name = name;
	std::cout << "Character constructor is called" << std::endl;
}

Character &Character::operator=(const Character &other)
{
	std::cout << "Character copy assignment operator called" << std::endl;
    if (this != &other)
        return (*this);
	this->name = other.name;
    return (*this);
}

Character::Character(const Character &other)
{
	std::cout << "Character copy operator is called" << std::endl;
}

std::string const &Character::getName() const
{
	return (this->name);
}

void	Character::equip(AMateria *m)
{
	
}
void	Character::unequip(int inx)
{
	
}

void	Character::use(int idx, ICharacter &target)
{
	
}
