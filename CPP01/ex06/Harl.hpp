/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nour <nour@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 20:28:04 by nour              #+#    #+#             */
/*   Updated: 2026/01/01 13:27:37 by nour             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include "iostream"
# include "fstream"
# include "iomanip"
# include "cstdlib"

class Harl
{
    private: 
    void    debug(void);
    void    info(void);
    void    warning(void);
    void    error(void);

    public:
	void		complain(std::string level);

};

#endif