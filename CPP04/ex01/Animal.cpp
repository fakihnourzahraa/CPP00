/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nour <nour@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 11:08:12 by nour              #+#    #+#             */
/*   Updated: 2026/01/04 12:55:29 by nour             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal constructor called" << std::endl;
}
Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}
Animal::Animal(std::string type)
{
	this->type = type;
	std::cout << "Animal destructor (" << type << ") called" << std::endl;
}

Animal::Animal(const Animal &other) : type(other.type)
{
    std::cout << "Animal copy constructor is called" <<std::endl;
}

Animal  &Animal::operator=(const Animal &other)
{
    std::cout << "Animal copy assignement constructor is called" << std::endl;
    if (this == &other)
    {
        return *this;
    }
	this->type = other.type;
    return (*this);
}

void    Animal::makeSound() const
{
    std::cout << "Random animal noises" << std::endl;
}

std::string    Animal::getType(void) const
{
    return (type);
}