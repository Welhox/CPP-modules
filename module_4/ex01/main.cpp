/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casimirri <clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 21:49:27 by casimirri         #+#    #+#             */
/*   Updated: 2024/10/04 22:41:56 by casimirri        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

// int main()
// {
// const Animal* meta = new Animal();
// const Animal* j = new Dog();
// const Animal* i = new Cat();
// std::cout << j->getType() << " " << std::endl;
// std::cout << i->getType() << " " << std::endl;
// i->makeSound();
// j->makeSound();
// meta->makeSound();
// delete meta;
// delete j;
// delete i;
// return 0;
// }

int main()
{
const Animal* j = new Dog();
const Animal* i = new Cat();
Dog* bull = new Dog();
bull->setIdea(5, "crazy idea");
Dog* chichi = bull;
std::cout << chichi->getIdea(5) << std::endl;
delete bull;
std::cout << chichi->getIdea(5) << std::endl;
delete j;//should not create a leak
delete i;
return 0;
}
