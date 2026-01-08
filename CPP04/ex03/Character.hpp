/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nour <nour@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 18:51:36 by nour              #+#    #+#             */
/*   Updated: 2026/01/08 19:18:29 by nour             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "iostream"
# include "fstream"
# include "iomanip"
# include "cstdlib"
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
	std::string name;
	AMateria *inventory[4];
	
	public:
	Character();
	~Character();
	Character &operator=(const Character &other);
	Character(const Character &other);
	Character(std::string const &name);

	std::string const &getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};

#endif