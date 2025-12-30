/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nour <nour@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 20:28:04 by nour              #+#    #+#             */
/*   Updated: 2025/12/30 14:30:16 by nour             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include "iostream"
# include "fstream"
# include "iomanip"
# include "cstdlib"

class Zombie
{
    private: 
    std::string name;

    public:
	~Zombie();
	void		set_name(std::string name);
    void		announce(void);
};

Zombie	*zombieHorde(int N, std::string name);

#endif