/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nour <nour@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 19:47:25 by nour              #+#    #+#             */
/*   Updated: 2026/01/17 16:02:48 by nour             ###   ########.fr       */
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

void MateriaSource::learnMateria(AMateria*)
{

}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
(void) type;
return (NULL);
}
	void learnMateria(AMateria*);
	AMateria	*createMateria(std::string const &type);