/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nour <nour@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 11:08:12 by nour              #+#    #+#             */
/*   Updated: 2026/01/08 18:29:18 by nour             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Ice.hpp"
# include "ICharacter.hpp"
//  public:
// 	Ice();
// 	virtual ~Ice();
// 	Ice &operator=(const Ice &other);
// 	Ice(const Ice &other);
// 	AMateria *clone(void) const;
// 	void use(ICharacter &target);
// };

Ice::Ice(void) : AMateria("ice")
{
	std::cout << "Ice constructor called" << std::endl;
}
Ice::~Ice(void)
{
	std::cout << "Ice destructor called" << std::endl;
}
Ice &Ice::operator=(const Ice &other)
{
	std::cout << "Ice copy assignment operator called" << std::endl;
    if (this != &other)
        AMateria::operator=(other);
    return *this;
}
Ice::Ice(const Ice &other) :AMateria(other)
{
	std::cout << "Ice copy operator is called" << std::endl;
}
AMateria *Ice::clone(void) const
{
	return (new Ice(*this));
}
void    Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
