/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nour <nour@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 20:52:27 by nour              #+#    #+#             */
/*   Updated: 2026/01/01 17:06:47 by nour             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

const int Fixed::frac = 8;

//original functions
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
    return (*this);
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

//comparision operations
bool   Fixed::operator>(const Fixed &other) const
{
    if (this->num > other.num)
        return (true);
    return (false);
}
bool   Fixed::operator<(const Fixed &other) const
{
    if (this->num < other.num)
        return (true);
    return (false);   
}
bool   Fixed::operator>=(const Fixed &other) const
{
    if (*this > other || *this == other)
        return (true);
    return (false);
}
bool   Fixed::operator<=(const Fixed &other) const
{
    if (*this < other || *this == other)
        return (true);
    return (false);
}
bool   Fixed::operator==(const Fixed &other) const
{
    if (this->num == other.num)
        return (true);
    return (false);
}
bool   Fixed::operator!=(const Fixed &other) const
{
    if (this->num != other.num)
        return (true);
    return (false);   
}

//finding operations
Fixed	&Fixed::max(Fixed &first, Fixed &second)
{
    if (second > first)
        return (second);
    return (first);
}
Fixed	&Fixed::min(Fixed &first, Fixed &second)
{
    if (second < first)
        return (second);
    return (first);   
}
const Fixed	&Fixed::max(const Fixed &first, const Fixed &second)
{
    if (second > first)
        return (second);
    return (first);
}
const Fixed	&Fixed::min(const Fixed &first, const Fixed &second)
{
    if (second < first)
        return (second);
    return (first);
}

//arithmetic operations
Fixed           Fixed::operator*(const Fixed &other) const
{
    Fixed fixed;
    fixed.num = (this->num * other.num) >> frac;
    return (fixed);
}
Fixed           Fixed::operator/(const Fixed &other) const
{
    Fixed fixed;
    fixed.num = ((num << frac) / other.num);
    return (fixed);  
}
Fixed           Fixed::operator+(const Fixed &other) const
{
    Fixed fixed;
    fixed.num = (this->num + other.num);
    return (fixed);  
}
Fixed           Fixed::operator-(const Fixed &other) const
{
    Fixed fixed;
    fixed.num = (this->num - other.num);
    return (fixed);
}

//incrmentation operations
Fixed           &Fixed::operator++()
{
    num++;
    return (*this);
}
Fixed           Fixed::operator++(int)
{
    Fixed r = *this;
    num++;
    return (r);
}
Fixed           &Fixed::operator--()
{
    num--;
    return (*this);
}
Fixed           Fixed::operator--(int)
{
    Fixed r = *this;
    num--;
    return (r);
}
//post increment are the dummy ones