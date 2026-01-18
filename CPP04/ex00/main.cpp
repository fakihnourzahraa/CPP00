/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfakih <nfakih@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 13:47:46 by nfakih            #+#    #+#             */
/*   Updated: 2026/01/18 12:18:29 by nfakih           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"
# include "Dog.hpp"
# include "Cat.hpp"
# include "WrongAnimal.hpp"
# include "WrongCat.hpp"

int main()
{
    const Animal *animal = new Animal();
    animal->makeSound();
    std::cout << std::endl;
	
    const Animal *dog = new Dog();
    dog->makeSound();
    std::cout << std::endl;
    const Animal *cat = new Cat();
    cat->makeSound();
    std::cout << std::endl;

    const WrongAnimal *wa = new WrongAnimal();
    wa->makeSound();
    std::cout << std::endl;

    const WrongAnimal *wc = new WrongCat();
    wc->makeSound();

    std::cout << std::endl;
    animal->~Animal();
    std::cout << std::endl;
    delete animal;
    std::cout << std::endl;
    delete dog;
    std::cout << std::endl;
    delete cat;
    std::cout << std::endl;
    delete wa;
    std::cout << std::endl;
    delete wc;

    return (0);
}
