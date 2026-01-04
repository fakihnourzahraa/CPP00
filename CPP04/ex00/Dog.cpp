/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nour <nour@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 11:08:12 by nour              #+#    #+#             */
/*   Updated: 2026/01/04 11:36:35 by nour             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"

Dog::Dog() : Animal()
{
    type = "Dog";
	std::cout << "Dog constructor called" << std::endl;
}
Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}
void    Dog::makeSound(void) const
{
    std::cout << "Woof Woof!" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
    std::cout << "Dog copy constructor is called" <<std::endl;
}
Dog  &Dog::operator=(const Dog &other)
{
    std::cout << "Dog copy assignement constructor is called" << std::endl;
    if (this == &other)
    {
		return *this;
	}
	Animal::operator=(other);
    return (*this);
}
