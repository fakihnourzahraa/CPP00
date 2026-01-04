/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nour <nour@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 11:08:12 by nour              #+#    #+#             */
/*   Updated: 2026/01/04 13:31:36 by nour             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AMateria.hpp"
// AMateria(std::string const &type);

// 	std::string	const &getType(void) const;
// 	virtual AMateria *clone() const = 0;
// 	virtual void use(ICharacter &target);

// 	AMateria();
// 	~AMateria();
// 	AMateria &operator=(const AMateria &other);
// 	AMateria(const AMateria &other);
//    std::string const	type;

AMateria::AMateria(std::string const &type) : type(type)
{
}

std::string const &AMateria::getType(void) const
{
    return (this->type);
}

void    AMateria::use(ICharacter &target)
{
    
}
