/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nour <nour@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 20:28:04 by nour              #+#    #+#             */
/*   Updated: 2026/01/04 11:36:20 by nour             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "iostream"
# include "fstream"
# include "iomanip"
# include "cstdlib"
# include "Animal.hpp"

class Dog : public Animal
{
    public:
	Dog();
	~Dog();
	Dog &operator=(const Dog &other);
	Dog(const Dog &other);
	void makeSound(void) const;

};

#endif