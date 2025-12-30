/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nour <nour@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 20:28:04 by nour              #+#    #+#             */
/*   Updated: 2025/12/30 18:27:31 by nour             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "iostream"
# include "fstream"
# include "iomanip"
# include "cstdlib"
# include "Weapon.hpp"

class HumanB
{
    private:
    Weapon      *weapon;
    std::string name;

    public:
	void		attack(void);
    HumanB(std::string name);
    void        set_name(std::string name);
    std::string get_name(void);
    Weapon      *get_weapon(void);
    void        set_weapon(Weapon w);
};

#endif