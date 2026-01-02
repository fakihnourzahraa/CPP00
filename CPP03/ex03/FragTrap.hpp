/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nour <nour@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 17:05:16 by nour              #+#    #+#             */
/*   Updated: 2026/01/02 17:35:20 by nour             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "iostream"
# include "fstream"
# include "iomanip"
# include "cstdlib"
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap 
{
    public:
	FragTrap();
	~FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap &other);
	FragTrap &operator=(const FragTrap &other);
	void			attack(const std::string &target);
	void			highFiveGuys(void);
};

#endif