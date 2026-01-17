/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nour <nour@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 13:47:46 by nfakih            #+#    #+#             */
/*   Updated: 2026/01/17 16:16:40 by nour             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AMateria.hpp"
# include "Ice.hpp"
# include "Cure.hpp"
# include "ICharacter.hpp"
# include "Character.hpp"
# include "IMateriaSource.hpp"
# include "MateriaSource.hpp"

// int main()
// {
//     IMateriaSource* src = new MateriaSource();
//     src->learnMateria(new Ice());
//     src->learnMateria(new Cure());
//     ICharacter* me = new Character("me");
//     AMateria* tmp;
//     tmp = src->createMateria("ice");
//     me->equip(tmp);
//     tmp = src->createMateria("cure");
//     me->equip(tmp);
//     ICharacter* bob = new Character("bob");
//     me->use(0, *bob);
//     // me->use(1, *bob);
//     delete bob;
//     delete me;
//     delete src;
// }

int main()
{
    // std::cout << "=== Test 1: Creating Ice and Cure ===" << std::endl;
    // {
    //     Ice* ice = new Ice();
    //     Cure* cure = new Cure();
        
    //     std::cout << "Ice type: " << ice->getType() << std::endl;
    //     std::cout << "Cure type: " << cure->getType() << std::endl;
        
    //     delete ice;
    //     delete cure;
    // }
    
    // std::cout << "\n=== Test 2: Clone functionality ===" << std::endl;
    // {
    //     Ice* ice1 = new Ice();
    //     AMateria* ice2 = ice1->clone();
        
    //     Cure* cure1 = new Cure();
    //     AMateria* cure2 = cure1->clone();
        
    //     std::cout << "Original ice type: " << ice1->getType() << std::endl;
    //     std::cout << "Cloned ice type: " << ice2->getType() << std::endl;
    //     std::cout << "Original cure type: " << cure1->getType() << std::endl;
    //     std::cout << "Cloned cure type: " << cure2->getType() << std::endl;
        
    //     delete ice1;
    //     delete ice2;
    //     delete cure1;
    //     delete cure2;
    // }
    
    // std::cout << "\n=== Test 3: Character creation ===" << std::endl;
    // {
    //     Character* bob = new Character("Bob");
    //     Character* alice = new Character("Alice");
        
    //     std::cout << "Character 1 name: " << bob->getName() << std::endl;
    //     std::cout << "Character 2 name: " << alice->getName() << std::endl;
        
    //     delete bob;
    //     delete alice;
    // }
    
    std::cout << "\n=== Test 4: Equipping materias ===" << std::endl;
    {
        Character* hero = new Character("Hero");

        std::cout << "Equipping Ice..." << std::endl;
        hero->equip(new Ice());
                std::cout<< std::endl;
        std::cout << "Equipping Cure..." << std::endl;
        hero->equip(new Cure());
        std::cout<< std::endl;
        std::cout << "Equipping another Ice..." << std::endl;
        hero->equip(new Ice());
                std::cout<< std::endl;
        std::cout << "Equipping another Cure..." << std::endl;
        hero->equip(new Cure());
                std::cout<< std::endl;
        std::cout << "Trying to equip 5th materia (should fail)..." << std::endl;
        hero->equip(new Ice());
        
                std::cout<< std::endl;        std::cout<< std::endl;
        delete hero;
    }
    
    std::cout << "\n=== Test 5: Using materias on target ===" << std::endl;
    {
        Character* attacker = new Character("Attacker");
        Character* target = new Character("Target");
        
        attacker->equip(new Ice());
        attacker->equip(new Cure());
        
        std::cout << "Using materia at index 0:" << std::endl;
        attacker->use(0, *target);
        
        std::cout << "Using materia at index 1:" << std::endl;
        attacker->use(1, *target);
        
        std::cout << "Using materia at index 2 (empty slot):" << std::endl;
        attacker->use(2, *target);
        
        std::cout << "Using materia at invalid index 10:" << std::endl;
        attacker->use(10, *target);
        
        std::cout << "Using materia at invalid index -1:" << std::endl;
        attacker->use(-1, *target);
        
        delete attacker;
        delete target;
    }
    
    std::cout << "\n=== Test 6: Unequipping materias ===" << std::endl;
    {
        Character* hero = new Character("Hero");
        
        AMateria* ice = new Ice();
        AMateria* cure = new Cure();
        
        hero->equip(ice);
        hero->equip(cure);
        
        std::cout << "Unequipping slot 0..." << std::endl;
        hero->unequip(0);
        
        std::cout << "Trying to use unequipped slot 0:" << std::endl;
        Character* target = new Character("Target");
        hero->use(0, *target);
        
        std::cout << "Using slot 1 (should still work):" << std::endl;
        hero->use(1, *target);
        
        
        delete target;
        delete hero;
    }
    
    std::cout << "\n=== Test 7: Equipping NULL ===" << std::endl;
    {
        Character* hero = new Character("Hero");
        
        std::cout << "Trying to equip NULL..." << std::endl;
        hero->equip(NULL);
        
        delete hero;
    }
    
    // std::cout << "\n=== Test 8: Character copy constructor ===" << std::endl;
    // {
    //     Character* original = new Character("Original");
    //     original->equip(new Ice());
    //     original->equip(new Cure());
        
    //     std::cout << "Creating copy of character..." << std::endl;
    //     Character* copy = new Character(*original);
        
    //     std::cout << "Original name: " << original->getName() << std::endl;
    //     std::cout << "Copy name: " << copy->getName() << std::endl;
        
    //     Character* target = new Character("Target");
        
    //     std::cout << "Original using materia:" << std::endl;
    //     original->use(0, *target);
        
    //     std::cout << "Copy using materia:" << std::endl;
    //     copy->use(0, *target);
        
    //     delete target;
    //     delete original;
    //     delete copy;
    // }
    
    std::cout << "\n=== Test 9: Character assignment operator ===" << std::endl;
    {
        Character* char1 = new Character("Character1");
        char1->equip(new Ice());
        
        Character* char2 = new Character("Character2");
        char2->equip(new Cure());
        
        std::cout << "Before assignment:" << std::endl;
        std::cout << "char1 name: " << char1->getName() << std::endl;
        std::cout << "char2 name: " << char2->getName() << std::endl;
        
        std::cout << "Assigning char1 to char2..." << std::endl;
        *char2 = *char1;
        
        std::cout << "After assignment:" << std::endl;
        std::cout << "char1 name: " << char1->getName() << std::endl;
        std::cout << "char2 name: " << char2->getName() << std::endl;
        
        delete char1;
        delete char2;
    }
    
    std::cout << "\n=== Test 10: Multiple unequips and re-equips ===" << std::endl;
    {
        Character* hero = new Character("Hero");
        Character* target = new Character("Target");
        
        hero->equip(new Ice());
        hero->equip(new Cure());
        hero->equip(new Ice());
        hero->equip(new Cure());
        
        std::cout << "Full inventory, using all slots:" << std::endl;
        hero->use(0, *target);
        hero->use(1, *target);
        hero->use(2, *target);
        hero->use(3, *target);
        
        std::cout << "\nUnequipping slots 1 and 3..." << std::endl;
        hero->unequip(1);
        hero->unequip(3);
        
        std::cout << "Using all slots after unequip:" << std::endl;
        hero->use(0, *target);
        hero->use(1, *target);
        hero->use(2, *target);
        hero->use(3, *target);
        
        std::cout << "\nRe-equipping new materias in slots 1 and 3..." << std::endl;
        hero->equip(new Cure());
        hero->equip(new Ice());
        
        std::cout << "Using all slots after re-equip:" << std::endl;
        hero->use(0, *target);
        hero->use(1, *target);
        hero->use(2, *target);
        hero->use(3, *target);
        
        delete target;
        delete hero;
    }
    
    return 0;
}