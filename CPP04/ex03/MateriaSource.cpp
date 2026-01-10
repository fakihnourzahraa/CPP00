/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfakih <nfakih@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 19:47:25 by nour              #+#    #+#             */
/*   Updated: 2026/01/10 15:23:55 by nfakih           ###   ########.fr       */
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
	(void) other;
    std::cout << "MateriaSource copy constructor is called" <<std::endl;
}

MateriaSource  &MateriaSource::operator=(const MateriaSource &other)
{
    std::cout << "MateriaSource copy assignement constructor is called" << std::endl;
    (void)other;
    return (*this);
}

void MateriaSource::learnMateria(MateriaSource*)
{
	
}

MateriaSource	*MateriaSource::createMateria(std::string const &type)
{
(void) type;
return (this);
}
