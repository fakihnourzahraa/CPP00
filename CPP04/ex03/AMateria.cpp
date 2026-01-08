/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nour <nour@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 11:08:12 by nour              #+#    #+#             */
/*   Updated: 2026/01/08 18:06:11 by nour             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AMateria.hpp"
# include "ICharacter.hpp"

AMateria::AMateria(void)
{
    this->type = "default";
    std::cout << "AMateria default constructor is called" << std::endl;
}

AMateria::AMateria(std::string const &type)
{
    this->type = type;
    std::cout << "AMateria " << type << "constructor is called" << std::endl;
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
    (void)other;
    return (*this);
}
