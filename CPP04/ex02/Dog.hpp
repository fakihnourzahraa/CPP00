/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nour <nour@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 20:28:04 by nour              #+#    #+#             */
/*   Updated: 2026/01/04 12:56:17 by nour             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "iostream"
# include "fstream"
# include "iomanip"
# include "cstdlib"
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private:
	Brain *brain;

    public:
	Dog();
	~Dog();
	Dog &operator=(const Dog &other);
	Dog(const Dog &other);
	void makeSound(void) const;
	Brain *getBrain(void) const;
};

#endif