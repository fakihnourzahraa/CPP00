/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nour <nour@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 20:28:04 by nour              #+#    #+#             */
/*   Updated: 2026/01/04 20:06:23 by nour             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "iostream"
# include "fstream"
# include "iomanip"
# include "cstdlib"
# include "ICharacter.hpp"
# include "MateriaSource.hpp"

class AMateria
{
    protected:
    std::string const	&type;

    public:
	AMateria(std::string const &type);

	std::string	const &getType(void) const;
	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter &target);

	AMateria();
	~AMateria();
	AMateria &operator=(const AMateria &other);
	AMateria(const AMateria &other);

};

#endif