/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nour <nour@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 20:28:04 by nour              #+#    #+#             */
/*   Updated: 2025/12/30 17:34:58 by nour             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "iostream"
# include "fstream"
# include "iomanip"
# include "cstdlib"
# include "Weapon.hpp"

class HumanA
{
    private:
    Weapon      &weapon;
    std::string name;

    public:
	void		attack(void);
    HumanA(std::string name, Weapon &w);
    void        set_name(std::string name);
    std::string get_name(void);
    Weapon      &get_weapon(void);
};

#endif