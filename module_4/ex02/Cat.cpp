/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casimirri <clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 22:01:06 by casimirri         #+#    #+#             */
/*   Updated: 2024/09/29 11:30:58 by casimirri        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"
# include <iostream>

	Cat::Cat(): Animal()
	{
		type = "Cat";
		brain = new Brain();
		std::cout << "Catto spawned" << std::endl;
	}

	Cat::~Cat()
	{
		delete brain;
		std::cout << "Catto despawnd" << std::endl;
	}

	Cat::Cat(Cat& other): Animal()
	{
		std::cout << "Catto gave birth to another Catto" << std::endl;
		this->type = other.type;
	}
	
	Cat& Cat::operator=(Cat& other)
	{
		if (this != &other)
		{
			std::cout << "Catto taught another Catto" << std::endl;
			this->type = other.type;
		}
		return(*this);
	}
	void Cat::makeSound() const
	{
		std::cout << "Meow meow!" << std::endl;
	}