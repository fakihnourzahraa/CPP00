/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nour <nour@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 20:28:04 by nour              #+#    #+#             */
/*   Updated: 2026/01/03 14:05:35 by nour             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include "fstream"
# include "iomanip"
# include "cstdlib"

class Zombie
{
    private: 
    std::string name;

    public:
    Zombie(std::string name);
    Zombie();
	~Zombie();
	void		set_name(std::string name);
    void		announce(void);
};

Zombie *newZombie(std::string name);
void	randomChump(std::string name);

#endif