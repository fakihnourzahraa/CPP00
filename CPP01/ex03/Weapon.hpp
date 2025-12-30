/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nour <nour@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 20:28:04 by nour              #+#    #+#             */
/*   Updated: 2025/12/30 17:35:20 by nour             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include "iostream"
# include "fstream"
# include "iomanip"
# include "cstdlib"

class Weapon
{
    private: 
    std::string type;

    public:
    Weapon(std::string type);
	const std::string  &getType(void);
    void                setType(std::string type);
};


#endif