/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nour <nour@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 11:08:12 by nour              #+#    #+#             */
/*   Updated: 2026/01/08 18:36:00 by nour             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cure.hpp"
# include "ICharacter.hpp"

Cure::Cure(void) : AMateria("cure")
{
	std::cout << "Cure constructor called" << std::endl;
}
Cure::~Cure(void)
{
	std::cout << "Cure destructor called" << std::endl;
}
Cure &Cure::operator=(const Cure &other)
{
	std::cout << "Cure copy assignment operator called" << std::endl;
    if (this != &other)
        AMateria::operator=(other);
    return *this;
}
Cure::Cure(const Cure &other) :AMateria(other)
{
	std::cout << "Cure copy operator is called" << std::endl;
}
AMateria *Cure::clone(void) const
{
	return (new Cure(*this));
}
void    Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
