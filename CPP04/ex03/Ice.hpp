/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nour <nour@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 20:28:04 by nour              #+#    #+#             */
/*   Updated: 2026/01/04 13:39:39 by nour             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "iostream"
# include "fstream"
# include "iomanip"
# include "cstdlib"
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Ice : public AMateria
{
    public:
	Ice();
	virtual ~Ice();
	Ice &operator=(const Ice &other);
	Ice(const Ice &other);
	AMateria *clone(void) const;
	void use(ICharacter &target);
};

#endif