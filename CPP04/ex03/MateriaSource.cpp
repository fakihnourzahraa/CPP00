/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nour <nour@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 19:47:25 by nour              #+#    #+#             */
/*   Updated: 2026/01/08 19:54:11 by nour             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
    std::cout << "MateriaSource default constructor is called" << std::endl;
}

MateriaSource::~MateriaSource(void)
{
    std::cout << "MateriaSource destructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
    std::cout << "AMateria copy constructor is called" <<std::endl;
}

AMateria  &AMateria::operator=(const AMateria &other)
{
    std::cout << "AMateria copy assignement constructor is called" << std::endl;
    (void)other;
    return (*this);
}

void MateriaSource::learnMateria(MateriaSource*)
{
	
}

MateriaSource	*MateriaSource::createMateria(std::string const &type)
{
	
}
