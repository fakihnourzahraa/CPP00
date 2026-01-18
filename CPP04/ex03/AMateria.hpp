/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfakih <nfakih@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 20:28:04 by nour              #+#    #+#             */
/*   Updated: 2026/01/18 12:37:20 by nfakih           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "iostream"
# include "fstream"
# include "iomanip"
# include "cstdlib"

class ICharacter;

class AMateria
{
    protected:
    std::string type;

    public:
	AMateria(std::string const &type);

	std::string	const &getType() const;
	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter &target);

	AMateria();
	virtual ~AMateria();
	AMateria &operator=(const AMateria &other);
	AMateria(const AMateria &other);
};

#endif