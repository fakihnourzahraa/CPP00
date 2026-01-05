/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfakih <nfakih@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 13:54:05 by nour              #+#    #+#             */
/*   Updated: 2026/01/05 14:44:06 by nfakih           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <fstream>
# include <iomanip>
# include <cstdlib>

class Fixed
{
    private: 
    int                 num;
	static const int 	frac = 8;

    public:
    Fixed();
    ~Fixed();
    Fixed(const Fixed& other);
    Fixed&  operator=(const Fixed &other);
    void    setRawBits(int const raw);
    int     getRawBits(void) const;
};

#endif