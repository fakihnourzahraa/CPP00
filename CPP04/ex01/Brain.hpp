/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nour <nour@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 11:51:46 by nour              #+#    #+#             */
/*   Updated: 2026/01/08 20:21:21 by nour             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include "iostream"
# include "fstream"
# include "iomanip"
# include "cstdlib"

class Brain
{
	private:
	std::string ideas[100];

    public:
	Brain();
	~Brain();
	Brain &operator=(const Brain &other);
	Brain(const Brain &other);
	std::string	getIdea(int i) const;
	void	setIdea(int i, std::string a);
};

#endif