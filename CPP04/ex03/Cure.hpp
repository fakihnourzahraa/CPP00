/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nour <nour@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 20:28:04 by nour              #+#    #+#             */
/*   Updated: 2026/01/08 18:32:42 by nour             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "iostream"
# include "fstream"
# include "iomanip"
# include "cstdlib"
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Cure : public AMateria
{
    public:
	Cure();
	virtual ~Cure();
	Cure &operator=(const Cure &other);
	Cure(const Cure &other);
	AMateria *clone(void) const;
	void use(ICharacter &target);
};

#endif