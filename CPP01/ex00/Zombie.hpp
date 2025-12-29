/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfakih <nfakih@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 20:28:04 by nour              #+#    #+#             */
/*   Updated: 2025/12/29 14:39:02 by nfakih           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include "fstream"
#include "iomanip"
#include "cstdlib"

class Zombie {
    private: 
    std::string name;

    public:
	~Zombie();
	void		set_name(std::string name);
    void		announce(void);
};

Zombie *newZombie(std::string name);
void	randomChump(std::string name);

#endif