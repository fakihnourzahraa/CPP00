/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfakih <nfakih@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 11:08:12 by nour              #+#    #+#             */
/*   Updated: 2026/01/07 18:45:07 by nfakih           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AMateria.hpp"

AMateria::AMateria(void) : type("default")
{
    std::cout << "AMateria constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type) : type(type)
{
    std::cout << "AMateria constructor called" << std::endl;
}

AMateria::~AMateria(void)
{
    std::cout << "AMateria destructor called" << std::endl;
}

std::string const &AMateria::getType(void) const
{
    return (this->type);
}

void    AMateria::use(ICharacter &target)
{
	(void)target;
}

AMateria::AMateria(const AMateria &other) : type(other.type)
{
    std::cout << "AMateria copy constructor is called" <<std::endl;
}

AMateria  &AMateria::operator=(const AMateria &other)
{
    std::cout << "AMateria copy assignement constructor is called" << std::endl;
    // if (this == &other)
    // {
    //     return *this;
    // }
    return (*this);
}