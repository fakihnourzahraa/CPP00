/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nour <nour@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 20:52:27 by nour              #+#    #+#             */
/*   Updated: 2026/01/04 11:37:44 by nour             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

const int Fixed::frac = 8;

Fixed::Fixed(const Fixed& other) : num(other.num)
{
    std::cout << "Copy constructor is called" <<std::endl;
}
Fixed &Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignement constructor is called" << std::endl;
    if (this == &other)
    {
        return *this;
    }
    num = other.num;
    return *this;
}

Fixed::Fixed()
{
    num = 0;
    std::cout <<"Default constructor is called" << std::endl;
}
Fixed::~Fixed()
{
	std::cout <<"Default destructor is called" << std::endl;
}
void	Fixed::setRawBits(int const raw)
{
    num = raw;
    return ;
}
int	Fixed::getRawBits(void) const
{
    return (num);
}