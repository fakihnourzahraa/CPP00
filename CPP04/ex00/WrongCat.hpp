/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nour <nour@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 20:28:04 by nour              #+#    #+#             */
/*   Updated: 2026/01/04 11:41:04 by nour             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "iostream"
# include "fstream"
# include "iomanip"
# include "cstdlib"
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
	WrongCat();
	~WrongCat();
	WrongCat &operator=(const WrongCat &other);
	WrongCat(const WrongCat &other);
	void makeSound(void) const;
};

#endif