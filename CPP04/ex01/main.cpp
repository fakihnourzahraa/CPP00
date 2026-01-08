/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nour <nour@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 13:47:46 by nfakih            #+#    #+#             */
/*   Updated: 2026/01/08 20:31:23 by nour             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"
# include "Dog.hpp"
# include "Cat.hpp"
#include "Brain.hpp"

// int main()
// {
//     Dog basic;
//     std::cout << std::endl;
//     {
//         Dog tmp(basic);
//         std::cout << std::endl;
//     }
//         std::cout << std::endl;
//     return (0);
// }

int main()
{
    const Animal *animals[10];
    for (int i = 0; i < 5; i++)
    {
        animals[i] = new Dog();
    }
    std::cout << std::endl;
    for (int i = 5; i < 10; i++)
    {
        animals[i] = new Cat();
    }
    std::cout << std::endl;
    for (int i = 0; i < 10; i++)
    {
        std::cout << animals[i]->getType() << " says: " << std::endl;
        animals[i]->makeSound();
        std::cout << std::endl;
    }
    for (int i = 0; i < 10; i++)
    {
        delete animals[i];
    }
    Dog* originalDog = new Dog();
    originalDog->getBrain()->setIdea(0, "I want to chase cats!");
    originalDog->getBrain()->setIdea(1, "I love bones!");

    Dog* copiedDog = new Dog(*originalDog);
    std::cout << "Idea 0: " << originalDog->getBrain()->getIdea(0) << std::endl;
    std::cout << "Idea 1: " << originalDog->getBrain()->getIdea(1) << std::endl;
    std::cout << "Idea 0: " << copiedDog->getBrain()->getIdea(0) << std::endl;
    std::cout << "Idea 1: " << copiedDog->getBrain()->getIdea(1) << std::endl;
    originalDog->getBrain()->setIdea(0, "I want to sleep!");
    originalDog->getBrain()->setIdea(1, "Where is my food?");
    std::cout << "Idea 0: " << originalDog->getBrain()->getIdea(0) << std::endl;
    std::cout << "Idea 1: " << originalDog->getBrain()->getIdea(1) << std::endl;
    std::cout << "Idea 0: " << copiedDog->getBrain()->getIdea(0) << std::endl;
    std::cout << "Idea 1: " << copiedDog->getBrain()->getIdea(1) << std::endl;

    
    delete originalDog;
    delete copiedDog;

    Cat* cat1 = new Cat();
    Cat* cat2 = new Cat();
    
    cat1->getBrain()->setIdea(0, "I hate dogs!");
    cat1->getBrain()->setIdea(1, "I need to catch that mouse!");
    
    cat2->getBrain()->setIdea(0, "I love sleeping!");
    cat2->getBrain()->setIdea(1, "Time to eat!");
    
    std::cout << "Cat1 Idea 0: " << cat1->getBrain()->getIdea(0) << std::endl;
    std::cout << "Cat2 Idea 0: " << cat2->getBrain()->getIdea(0) << std::endl;
    *cat2 = *cat1;
    
    std::cout << "Cat1 Idea 0: " << cat1->getBrain()->getIdea(0) << std::endl;
    std::cout << "Cat2 Idea 0: " << cat2->getBrain()->getIdea(0) << std::endl;
    cat1->getBrain()->setIdea(0, "NEW IDEA!");
    
    std::cout << "Cat1 Idea 0: " << cat1->getBrain()->getIdea(0) << std::endl;
    
    delete cat1;
    delete cat2;

    return 0;
}
