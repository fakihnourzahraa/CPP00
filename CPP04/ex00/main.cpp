/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nour <nour@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 13:47:46 by nfakih            #+#    #+#             */
/*   Updated: 2026/01/04 11:46:47 by nour             ###   ########.fr       */
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
    const Animal *dog = new Dog();
    dog->makeSound();
    const Animal *cat = new Cat();
    cat->makeSound();
    const WrongAnimal *wa = new WrongAnimal();
    wa->makeSound();
    const WrongAnimal *wc = new WrongCat();
    wc->makeSound();
    animal->~Animal();
    dog->~Animal();
    return (0);
}
