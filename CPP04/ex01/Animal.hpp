/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nour <nour@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 20:28:04 by nour              #+#    #+#             */
/*   Updated: 2026/01/08 20:26:50 by nour             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include "iostream"
# include "fstream"
# include "iomanip"
# include "cstdlib"

class Animal
{
    protected:
    std::string		type;

    public:
	Animal();
	virtual ~Animal();
	Animal(std::string type);
	Animal &operator=(const Animal &other);
	Animal(const Animal &other);
	virtual void makeSound() const;
	std::string	getType(void) const;
};

#endif