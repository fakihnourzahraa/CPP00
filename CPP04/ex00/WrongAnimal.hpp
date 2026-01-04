/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nour <nour@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 20:28:04 by nour              #+#    #+#             */
/*   Updated: 2026/01/04 11:41:42 by nour             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include "iostream"
# include "fstream"
# include "iomanip"
# include "cstdlib"

class WrongAnimal
{
    protected:
    std::string		type;

    public:
	WrongAnimal();
	~WrongAnimal();
	WrongAnimal(std::string type);
	WrongAnimal &operator=(const WrongAnimal &other);
	WrongAnimal(const WrongAnimal &other);
	void makeSound() const;
};

#endif