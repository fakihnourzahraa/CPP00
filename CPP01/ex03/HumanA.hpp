/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfakih <nfakih@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 20:28:04 by nour              #+#    #+#             */
/*   Updated: 2026/01/05 11:22:24 by nfakih           ###   ########.fr       */
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
    HumanA(std::string name, Weapon &w);
	void		attack(void);
    void        set_name(std::string name);
    std::string get_name(void);
    Weapon      &get_weapon(void);
};

#endif