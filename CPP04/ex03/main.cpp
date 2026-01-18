/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfakih <nfakih@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 13:47:46 by nfakih            #+#    #+#             */
/*   Updated: 2026/01/18 12:03:45 by nfakih           ###   ########.fr       */
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
//     me->use(1, *bob);
// 	me->unequip(0);
//     delete bob;
//     delete me;
//     delete src;
// }

// int main()
// {
//     std::cout << "=== Test 1: Creating Ice and Cure ===" << std::endl;
//     {
//         Ice* ice = new Ice();
//         Cure* cure = new Cure();
        
//         std::cout << "Ice type: " << ice->getType() << std::endl;
//         std::cout << "Cure type: " << cure->getType() << std::endl;
        
//         delete ice;
//         delete cure;
//     }
    
//     std::cout << "\n=== Test 2: Clone functionality ===" << std::endl;
//     {
//         Ice* ice1 = new Ice();
//         AMateria* ice2 = ice1->clone();
        
//         Cure* cure1 = new Cure();
//         AMateria* cure2 = cure1->clone();
        
//         std::cout << "Original ice type: " << ice1->getType() << std::endl;
//         std::cout << "Cloned ice type: " << ice2->getType() << std::endl;
//         std::cout << "Original cure type: " << cure1->getType() << std::endl;
//         std::cout << "Cloned cure type: " << cure2->getType() << std::endl;
        
//         delete ice1;
//         delete ice2;
//         delete cure1;
//         delete cure2;
//     }
    
//     std::cout << "\n=== Test 3: Character creation ===" << std::endl;
//     {
//         Character* bob = new Character("Bob");
//         Character* alice = new Character("Alice");
        
//         std::cout << "Character 1 name: " << bob->getName() << std::endl;
//         std::cout << "Character 2 name: " << alice->getName() << std::endl;
        
//         delete bob;
//         delete alice;
//     }
    
//     std::cout << "\n=== Test 4: Equipping materias ===" << std::endl;
//     {
//         Character* hero = new Character("Hero");

//         std::cout << "Equipping Ice..." << std::endl;
//         hero->equip(new Ice());
//                 std::cout<< std::endl;
//         std::cout << "Equipping Cure..." << std::endl;
//         hero->equip(new Cure());
//         std::cout<< std::endl;
//         std::cout << "Equipping another Ice..." << std::endl;
//         hero->equip(new Ice());
//                 std::cout<< std::endl;
//         std::cout << "Equipping another Cure..." << std::endl;
//         hero->equip(new Cure());
//                 std::cout<< std::endl;
//         std::cout << "Trying to equip 5th materia (should fail)..." << std::endl;
//         hero->equip(new Ice());
        
//                 std::cout<< std::endl;        std::cout<< std::endl;
//         delete hero;
//     }
    
//     std::cout << "\n=== Test 5: Using materias on target ===" << std::endl;
//     {
//         Character* attacker = new Character("Attacker");
//         Character* target = new Character("Target");
        
//         attacker->equip(new Ice());
//         attacker->equip(new Cure());
        
//         std::cout << "Using materia at index 0:" << std::endl;
//         attacker->use(0, *target);
        
//         std::cout << "Using materia at index 1:" << std::endl;
//         attacker->use(1, *target);
        
//         std::cout << "Using materia at index 2 (empty slot):" << std::endl;
//         attacker->use(2, *target);
        
//         std::cout << "Using materia at invalid index 10:" << std::endl;
//         attacker->use(10, *target);
        
//         std::cout << "Using materia at invalid index -1:" << std::endl;
//         attacker->use(-1, *target);
        
//         delete attacker;
//         delete target;
//     }
    
//     std::cout << "\n=== Test 6: Unequipping materias ===" << std::endl;
//     {
//         Character* hero = new Character("Hero");
        
//         AMateria* ice = new Ice();
//         AMateria* cure = new Cure();
        
//         hero->equip(ice);
//         hero->equip(cure);
        
//         std::cout << "Unequipping slot 0..." << std::endl;
//         hero->unequip(0);
        
//         std::cout << "Trying to use unequipped slot 0:" << std::endl;
//         Character* target = new Character("Target");
//         hero->use(0, *target);
        
//         std::cout << "Using slot 1 (should still work):" << std::endl;
//         hero->use(1, *target);
        
        
//         delete target;
//         delete hero;
//     }
    
//     std::cout << "\n=== Test 7: Equipping NULL ===" << std::endl;
//     {
//         Character* hero = new Character("Hero");
        
//         std::cout << "Trying to equip NULL..." << std::endl;
//         hero->equip(NULL);
        
//         delete hero;
//     }
    
//     std::cout << "\n=== Test 8: Character copy constructor ===" << std::endl;
//     {
//         Character* original = new Character("Original");
//         original->equip(new Ice());
//         original->equip(new Cure());
        
//         std::cout << "Creating copy of character..." << std::endl;
//         Character* copy = new Character(*original);
        
//         std::cout << "Original name: " << original->getName() << std::endl;
//         std::cout << "Copy name: " << copy->getName() << std::endl;
        
//         Character* target = new Character("Target");
        
//         std::cout << "Original using materia:" << std::endl;
//         original->use(0, *target);
        
//         std::cout << "Copy using materia:" << std::endl;
//         copy->use(0, *target);
        
//         delete target;
//         delete original;
//         delete copy;
//     }
    
//     std::cout << "\n=== Test 9: Character assignment operator ===" << std::endl;
//     {
//         Character* char1 = new Character("Character1");
//         char1->equip(new Ice());
        
//         Character* char2 = new Character("Character2");
//         char2->equip(new Cure());
        
//         std::cout << "Before assignment:" << std::endl;
//         std::cout << "char1 name: " << char1->getName() << std::endl;
//         std::cout << "char2 name: " << char2->getName() << std::endl;
        
//         std::cout << "Assigning char1 to char2..." << std::endl;
//         *char2 = *char1;
        
//         std::cout << "After assignment:" << std::endl;
//         std::cout << "char1 name: " << char1->getName() << std::endl;
//         std::cout << "char2 name: " << char2->getName() << std::endl;
        
//         delete char1;
//         delete char2;
//     }
    
//     std::cout << "\n=== Test 10: Multiple unequips and re-equips ===" << std::endl;
//     {
//         Character* hero = new Character("Hero");
//         Character* target = new Character("Target");
        
//         hero->equip(new Ice());
//         hero->equip(new Cure());
//         hero->equip(new Ice());
//         hero->equip(new Cure());
        
//         std::cout << "Full inventory, using all slots:" << std::endl;
//         hero->use(0, *target);
//         hero->use(1, *target);
//         hero->use(2, *target);
//         hero->use(3, *target);
        
//         std::cout << "\nUnequipping slots 1 and 3..." << std::endl;
//         hero->unequip(1);
//         hero->unequip(3);
        
//         std::cout << "Using all slots after unequip:" << std::endl;
//         hero->use(0, *target);
//         hero->use(1, *target);
//         hero->use(2, *target);
//         hero->use(3, *target);
        
//         std::cout << "\nRe-equipping new materias in slots 1 and 3..." << std::endl;
//         hero->equip(new Cure());
//         hero->equip(new Ice());
        
//         std::cout << "Using all slots after re-equip:" << std::endl;
//         hero->use(0, *target);
//         hero->use(1, *target);
//         hero->use(2, *target);
//         hero->use(3, *target);
        
//         delete target;
//         delete hero;
//     }
    
//     return 0;
// }

int main()
{
    std::cout << "\n=== TEST 1: Basic MateriaSource ===\n";
    {
        IMateriaSource* src = new MateriaSource();
        src->learnMateria(new Ice());
        src->learnMateria(new Cure());
        
        AMateria* ice = src->createMateria("ice");
        AMateria* cure = src->createMateria("cure");
        AMateria* unknown = src->createMateria("fire");
        
        std::cout << "Ice type: " << (ice ? ice->getType() : "NULL") << std::endl;
        std::cout << "Cure type: " << (cure ? cure->getType() : "NULL") << std::endl;
        std::cout << "Unknown type: " << (unknown ? "Created" : "NULL (expected)") << std::endl;
        
        delete ice;
        delete cure;
        delete src;
    }
    
    std::cout << "\n=== TEST 2: Subject Main (from PDF) ===\n";
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
        
        delete bob;
        delete me;
        delete src;
    }
    
    std::cout << "\n=== TEST 3: Full Inventory ===\n";
    {
        ICharacter* hero = new Character("Hero");
        
        hero->equip(new Ice());
        hero->equip(new Cure());
        hero->equip(new Ice());
        hero->equip(new Cure());
        
        std::cout << "Trying to equip 5th materia (should not equip):\n";
        hero->equip(new Ice());
        
        delete hero;
    }
    
    std::cout << "\n=== TEST 4: Using Materias ===\n";
    {
        ICharacter* attacker = new Character("Attacker");
        ICharacter* target = new Character("Target");
        
        attacker->equip(new Ice());
        attacker->equip(new Cure());
        
        std::cout << "Using slot 0:\n";
        attacker->use(0, *target);
        
        std::cout << "Using slot 1:\n";
        attacker->use(1, *target);
        
        std::cout << "Using empty slot 2:\n";
        attacker->use(2, *target);
        
        std::cout << "Using invalid slot 10:\n";
        attacker->use(10, *target);
        
        delete attacker;
        delete target;
    }
    
    std::cout << "\n=== TEST 5: Unequip and Memory Management ===\n";
    {
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
    }
    
    std::cout << "\n=== TEST 6: Character Deep Copy ===\n";
    {
        Character* original = new Character("Original");
        original->equip(new Ice());
        original->equip(new Cure());
        
        std::cout << "Creating copy...\n";
        Character* copy = new Character(*original);
        
        ICharacter* target = new Character("Target");
        
        std::cout << "\nOriginal using materias:\n";
        original->use(0, *target);
        original->use(1, *target);
        
        std::cout << "\nCopy using materias:\n";
        copy->use(0, *target);
        copy->use(1, *target);
        
        delete target;
        delete original;
        delete copy;
    }
    
    std::cout << "\n=== TEST 7: Assignment Operator ===\n";
    {
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
        
        ICharacter* target = new Character("Target");
        std::cout << "\nchar2 using materias:\n";
        char2->use(0, *target);
        char2->use(1, *target);
        
        delete target;
        delete char1;
        delete char2;
    }
    
    std::cout << "\n=== TEST 8: MateriaSource Learning Limit ===\n";
    {
        IMateriaSource* src = new MateriaSource();
        
        std::cout << "Learning 4 materias:\n";
        src->learnMateria(new Ice());
        src->learnMateria(new Cure());
        src->learnMateria(new Ice());
        src->learnMateria(new Cure());
        
        std::cout << "Trying to learn 5th materia (should not learn):\n";
        src->learnMateria(new Ice());
        
        delete src;
    }
    
    std::cout << "\n=== TEST 9: NULL Materia Equip ===\n";
    {
        ICharacter* hero = new Character("Hero");
        
        std::cout << "Trying to equip NULL:\n";
        hero->equip(NULL);
        
        delete hero;
    }
    
    std::cout << "\n=== TEST 10: Multiple Unequips ===\n";
    {
        ICharacter* hero = new Character("Hero");
        ICharacter* target = new Character("Target");
        
        hero->equip(new Ice());
        hero->equip(new Cure());
        hero->equip(new Ice());
        hero->equip(new Cure());
        
        std::cout << "Full inventory:\n";
        hero->use(0, *target);
        hero->use(1, *target);
        hero->use(2, *target);
        hero->use(3, *target);
        
        std::cout << "\nUnequipping slots 1 and 3...\n";
        hero->unequip(1);
        hero->unequip(3);
        
        std::cout << "After unequip:\n";
        hero->use(0, *target);
        hero->use(1, *target);  // Empty
        hero->use(2, *target);
        hero->use(3, *target);  // Empty
        
        std::cout << "\nRe-equipping:\n";
        hero->equip(new Cure());
        hero->equip(new Ice());
        
        std::cout << "After re-equip:\n";
        hero->use(0, *target);
        hero->use(1, *target);
        hero->use(2, *target);
        hero->use(3, *target);
        
        delete target;
        delete hero;
    }
    
    std::cout << "\n=== All tests completed ===\n";
    return 0;
}