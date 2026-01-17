/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nour <nour@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 19:21:27 by nour              #+#    #+#             */
/*   Updated: 2026/01/17 16:01:31 by nour             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "iostream"
# include "fstream"
# include "iomanip"
# include "cstdlib"
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public :
	MateriaSource();
	~MateriaSource();
	MateriaSource &operator=(const MateriaSource &other);
	MateriaSource(const MateriaSource &other);
	void learnMateria(AMateria*);
	AMateria	*createMateria(std::string const &type);
};


#endif