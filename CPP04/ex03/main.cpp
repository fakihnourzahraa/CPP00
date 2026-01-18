/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfakih <nfakih@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 13:47:46 by nfakih            #+#    #+#             */
/*   Updated: 2026/01/18 12:14:36 by nfakih           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AMateria.hpp"
# include "Ice.hpp"
# include "Cure.hpp"
# include "ICharacter.hpp"
# include "Character.hpp"
# include "IMateriaSource.hpp"
# include "MateriaSource.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
	me->unequip(0);
    delete bob;
    delete me;
    delete src;
	
	ICharacter* hero = new Character("Hero");
	ICharacter* target = new Character("Target");
	
	hero->equip(new Ice());
	hero->equip(new Cure());
	
	std::cout << "Before unequip:\n";
	hero->use(0, *target);
	hero->use(1, *target);
	
	std::cout << "\nUnequipping slot 0...\n";
	hero->unequip(0);
	
	std::cout << "After unequip:\n";
	hero->use(0, *target);  // Should do nothing
	hero->use(1, *target);  // Should still work
	
	std::cout << "\nRe-equipping slot 0:\n";
	hero->equip(new Ice());
	hero->use(0, *target);
	
	delete target;
	delete hero;

	Character* original = new Character("Original");
	original->equip(new Ice());
	original->equip(new Cure());

	std::cout << "Creating copy...\n";
	Character* copy = new Character(*original);

	ICharacter* m = new Character("m");

	std::cout << "\nOriginal using materias:\n";
	original->use(0, *m);
	original->use(1, *m);

	std::cout << "\nCopy using materias:\n";
	copy->use(0, *m);
	copy->use(1, *m);

	delete m;
	delete original;
	delete copy;

    
	Character* char1 = new Character("Character1");
	char1->equip(new Ice());
	char1->equip(new Cure());

	Character* char2 = new Character("Character2");
	char2->equip(new Ice());

	std::cout << "Before assignment:\n";
	std::cout << "char1 name: " << char1->getName() << std::endl;
	std::cout << "char2 name: " << char2->getName() << std::endl;

	std::cout << "\nAssigning char1 to char2...\n";
	*char2 = *char1;

	std::cout << "After assignment:\n";
	std::cout << "char1 name: " << char1->getName() << std::endl;
	std::cout << "char2 name: " << char2->getName() << std::endl;

	ICharacter* n = new Character("n");
	std::cout << "\nchar2 using materias:\n";
	char2->use(0, *n);
	char2->use(1, *n);

	delete n;
	delete char1;
	delete char2;

}
