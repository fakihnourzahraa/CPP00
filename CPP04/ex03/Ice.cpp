/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nour <nour@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 11:08:12 by nour              #+#    #+#             */
/*   Updated: 2026/01/04 13:42:52 by nour             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Ice.hpp"

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
void    AMateria::use(ICharacter &target)
{
    
}
