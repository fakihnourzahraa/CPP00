/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nour <nour@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 19:47:25 by nour              #+#    #+#             */
/*   Updated: 2026/01/17 16:30:43 by nour             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
    for (int i = 0; i < 4; i++)
        templates[i] = NULL;
    std::cout << "MateriaSource default constructor is called" << std::endl;
}

MateriaSource::~MateriaSource(void)
{
    for (int i = 0; i < 4; i++)
    {
        if (templates[i])
            delete templates[i];
    }
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

void MateriaSource::learnMateria(AMateria* m)
{
    if (!m)
        return;
    for (int i = 0; i < 4; i++)
    {
        if (!templates[i])
        {
            templates[i] = m;
            return;
        }
    }
    delete m;
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
    {
        if (templates[i] && templates[i]->getType() == type)
            return templates[i]->clone();
    }
    return NULL;
}