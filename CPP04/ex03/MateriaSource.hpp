/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nour <nour@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 19:21:27 by nour              #+#    #+#             */
/*   Updated: 2026/01/08 19:55:37 by nour             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASORUCE_HPP

# include "iostream"
# include "fstream"
# include "iomanip"
# include "cstdlib"
# include "IMateriaSource.hpp"

class MateriaSource
{
	MateriaSource();
	~MateriaSource();
	MateriaSource &operator=(const MateriaSource &other);
	MateriaSource(const MateriaSource &other);
	void learnMateria(MateriaSource*);
	MateriaSource	*createMateria(std::string const &type);
};


#endif