/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nour <nour@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 11:08:12 by nour              #+#    #+#             */
/*   Updated: 2026/01/04 11:36:31 by nour             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"

Cat::Cat() : Animal()
{
    type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
}
Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}
void    Cat::makeSound(void) const
{
    std::cout << "Meow Meow!" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
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
    return (*this);
}
