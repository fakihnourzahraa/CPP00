/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfakih <nfakih@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 11:08:12 by nour              #+#    #+#             */
/*   Updated: 2026/01/18 12:32:49 by nfakih           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"

Cat::Cat() : Animal()
{
    type = "Cat";
    brain = new Brain();
	std::cout << "Cat constructor called" << std::endl;
}
Cat::~Cat()
{
    delete brain;
	std::cout << "Cat destructor called" << std::endl;
}
void    Cat::makeSound(void) const
{
    std::cout << "Meow Meow!" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
    brain = new Brain(*other.brain);
    std::cout << "Cat copy constructor is called" <<std::endl;
}
Cat  &Cat::operator=(const Cat &other)
{
    std::cout << "Cat copy assignement constructor is called" << std::endl;
    if (this == &other)
    {
		return *this;
	}
	Animal::operator=(other);
    delete brain;
    brain = new Brain(*other.brain);
    return (*this);
}

Brain *Cat::getBrain(void) const
{
    return (brain);
}