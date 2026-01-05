/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfakih <nfakih@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 20:52:27 by nour              #+#    #+#             */
/*   Updated: 2026/01/05 15:22:27 by nfakih           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

Fixed::Fixed(const Fixed& other)
{
    std::cout << "Copy constructor is called" <<std::endl;
	num = other.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignement operator is called" << std::endl;
    if (this == &other)
    {
        return (*this);
    }
    num = other.getRawBits();
    return (*this);
}

Fixed::Fixed()
{
    num = 0;
    std::cout << "Default constructor is called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Default destructor is called" << std::endl;
}

void    Fixed::setRawBits(int const raw)
{
    num = raw;
    return ;
}

int Fixed::getRawBits(void) const
{
    return (num);
}

Fixed::Fixed(const int a)
{
    std::cout << "int constructor is called" << std::endl;
    num = a << frac;
}

Fixed::Fixed(const float a)
{
    std::cout << "float constructor is called" << std::endl;
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
