/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nour <nour@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 11:08:12 by nour              #+#    #+#             */
/*   Updated: 2026/01/04 12:56:22 by nour             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"

Dog::Dog() : Animal()
{
    type = "Dog";
    brain = new Brain();
	std::cout << "Dog constructor called" << std::endl;
}
Dog::~Dog()
{
    delete brain;
	std::cout << "Dog destructor called" << std::endl;
}
void    Dog::makeSound(void) const
{
    std::cout << "Woof Woof!" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
    brain = new Brain(*other.brain);
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
    delete brain;
    brain = new Brain(*other.brain);
    return (*this);
}

Brain *Dog::getBrain(void) const
{
    return (brain);
}