/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nour <nour@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 11:08:12 by nour              #+#    #+#             */
/*   Updated: 2026/01/04 11:36:31 by nour             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    type = "WrongCat";
	std::cout << "WrongCat constructor called" << std::endl;
}
WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}
void    WrongCat::makeSound(void) const
{
    std::cout << "Meow Meow!" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
    std::cout << "WrongCat copy constructor is called" <<std::endl;
}
WrongCat  &WrongCat::operator=(const WrongCat &other)
{
    std::cout << "WrongCat copy assignement constructor is called" << std::endl;
    if (this == &other)
    {
		return *this;
	}
	WrongAnimal::operator=(other);
    return (*this);
}
