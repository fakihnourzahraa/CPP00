/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfakih <nfakih@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 12:06:20 by nour              #+#    #+#             */
/*   Updated: 2026/01/10 14:49:13 by nfakih           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Brain.hpp"

Brain::Brain()
{
	for (int i = 0; i<100; i++)
	{
		ideas[i] = "";
	}
	std::cout << "Brain constructor called" << std::endl;
}
Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}


Brain::Brain(const Brain &other)
{
	for (int i = 0; i<100; i++)
	{
		this->ideas[i] = other.ideas[i];
	}
    std::cout << "Brain copy constructor is called" <<std::endl;
}

Brain  &Brain::operator=(const Brain &other)
{
    std::cout << "Brain copy assignement constructor is called" << std::endl;
    if (this == &other)
    {
        return *this;
    }
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = other.ideas[i];
	}
    return (*this);
}
std::string	Brain::getIdea(int i) const
{
	return (ideas[i]);
}
void	Brain::setIdea(int i, std::string a)
{
	ideas[i] = a;
}