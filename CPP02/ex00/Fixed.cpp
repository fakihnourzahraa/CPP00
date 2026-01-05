/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfakih <nfakih@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 20:52:27 by nour              #+#    #+#             */
/*   Updated: 2026/01/05 15:11:46 by nfakih           ###   ########.fr       */
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
	std::cout << "getRawBits member function called" << std::endl;
    return (num);
}