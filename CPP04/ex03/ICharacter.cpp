/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nour <nour@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 18:36:48 by nour              #+#    #+#             */
/*   Updated: 2026/01/08 18:43:44 by nour             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ICharacter.hpp"
	// ICharacter();
	// ICharacter &operator=(const ICharacter &other);
	// ICharacter(const ICharacter &other);
	// virtual ~ICharacter() {}

ICharacter &ICharacter::operator=(const ICharacter &other)
{
	std::cout << "ICharacter copy assignment operator called" << std::endl;
    if (this != &other)
        return (*this);
    return (*this);
}
ICharacter::ICharacter(const ICharacter &other)
{
	std::cout << "ICharacter copy operator is called" << std::endl;
}
ICharacter::ICharacter()
{
	std::cout << "ICharacter construcor called" << std::endl;
}
