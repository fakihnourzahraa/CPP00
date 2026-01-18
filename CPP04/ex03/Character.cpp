/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfakih <nfakih@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 18:52:13 by nour              #+#    #+#             */
/*   Updated: 2026/01/18 12:02:31 by nfakih           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Character.hpp"

Character::Character()
{
	for (int j = 0; j < 4; j++)
	{
		availability[j] = 1;
		inventory[j] = NULL;
	}
	this->disposal = new AMateria*[100];
	for (int i = 0; i < 100; i++)
		disposal[i] = NULL;
	this->name = "Default";
	this->r = 0;
	this->capacity = 100;
	std::cout << "Default character constructor is called" << std::endl;
}

Character::Character(std::string const &name)
{
	for (int j = 0; j < 4; j++)
	{
		availability[j] = 1;
		inventory[j] = NULL;
	}
	this->disposal = new AMateria*[100];
	for (int i = 0; i < 100; i++)
		disposal[i] = NULL;
	this->name = name;
	this->r = 0;
	this->capacity = 100;
	std::cout << "Character constructor is called" << std::endl;
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
	delete[] disposal;

	int i = 0;
	while (i < 4)
	{
		if (availability[i] == 0)
		{
			if (inventory[i])
			{
				delete inventory[i];
				inventory[i] = NULL;
			}
		}
		i++;
	}
	std::cout << "Character destructor is called" << std::endl;
}

Character &Character::operator=(const Character &other)
{
	std::cout << "Character copy assignment operator called" << std::endl;
    if (this == &other)
    {
	    return (*this);
	}
    for (int i = 0; i < r; i++)
    {
        if (disposal[i])
        {
            delete disposal[i];
            disposal[i] = NULL;
        }
    }
	for (int i = 0; i < 4; i++)
	{
	    if (availability[i] == 0 && inventory[i])
	    {
			delete inventory[i];
			inventory[i] = NULL;
	    }
	}
	this->name = other.name;;
	this->r = other.r;
	this->capacity = other.capacity;
	for (int j = 0; j < 4; j++)
	{
		this->availability[j] = other.availability[j];
	}
	for (int i = 0; i < 4; i++)
	{
	    if (other.availability[i] == 0 && other.inventory[i])
	    {
			this->inventory[i] = other.inventory[i]->clone();
	    }
	    else
	    {
			this->inventory[i] = NULL;
	    }
	}
	for (int i = 0; i < other.r; i++)
	{
	    if (other.disposal[i])
	    {
			this->disposal[i] = other.disposal[i]->clone();
	    }
	    else
	    {
			this->disposal[i] = NULL;
	    }
	}
    return (*this);
}

Character::Character(const Character &other)
{
	std::cout << "Character copy operator is called" << std::endl;
	this->name = other.name;;
	this->r = other.r;
	this->capacity = other.capacity;
	this->disposal = new AMateria*[capacity];
	for (int i = 0; i < other.r; i++)
	{
	    if (other.disposal[i])
	    {
			this->disposal[i] = other.disposal[i]->clone();
	    }
	    else
	    {
			this->disposal[i] = NULL;
	    }
	}
	for (int j = 0; j < 4; j++)
	{
		this->availability[j] = other.availability[j];
	}
	for (int i = 0; i < 4; i++)
	{
	    if (other.availability[i] == 0 && other.inventory[i])
	    {
			this->inventory[i] = other.inventory[i]->clone();
	    }
	    else
	    {
			this->inventory[i] = NULL;
	    }
	}

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
	}
	if (r < capacity)
        {
            disposal[r] = inventory[inx];
            r++;
        }
        else
        {
            AMateria **new_disposal = new AMateria *[capacity * 2];
            for (int i = 0; i < r; i++)
            {
                new_disposal[i] = disposal[i];
            }
            new_disposal[r] = inventory[inx];
			delete []disposal;
			disposal = new_disposal;
			capacity = capacity*2;
			r++;
        }
        inventory[inx] = NULL;
}


void	Character::use(int idx, ICharacter &target)
{
	if (idx < 4 && idx >= 0 && availability[idx] == 0)
	{
		inventory[idx]->use(target);
	}
}
