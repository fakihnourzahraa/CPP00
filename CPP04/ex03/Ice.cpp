/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfakih <nfakih@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 11:08:12 by nour              #+#    #+#             */
/*   Updated: 2026/01/07 18:26:03 by nfakih           ###   ########.fr       */
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
Ice &Ice::operator=(const Ice &other)
{
	
}
Ice::Ice(const Ice &other)
{
	
}
AMateria *Ice::clone(void) const
{

}
void    AMateria::use(ICharacter &target)
{
    
}
