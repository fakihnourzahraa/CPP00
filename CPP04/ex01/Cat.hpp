/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nour <nour@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 20:28:04 by nour              #+#    #+#             */
/*   Updated: 2026/01/04 12:57:55 by nour             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "iostream"
# include "fstream"
# include "iomanip"
# include "cstdlib"
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
	Brain *brain;

    public:
	Cat();
	~Cat();
	Cat &operator=(const Cat &other);
	Cat(const Cat &other);
	void makeSound(void) const;
	Brain *getBrain(void) const;
};

#endif