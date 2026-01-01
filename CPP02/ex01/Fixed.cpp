/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nour <nour@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 20:52:27 by nour              #+#    #+#             */
/*   Updated: 2026/01/01 16:02:04 by nour             ###   ########.fr       */
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
        return *this;
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

void    Fixed::setRawBits(int const raw)
{
    num = raw;
    return ;
}

int        Fixed::getRawBits(void) const
{
    return (num);
}

Fixed::Fixed(const int a)
{
    num = a << frac;
}

Fixed::Fixed(const float a)
{
    num = roundf(a * (1 << frac));
}

float Fixed::toFloat(void) const
{
    return (float)num / (1 << frac);
}

int Fixed::toInt(void) const
{
    return (num >> frac);
}

std::ostream    &operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return (out);
}
