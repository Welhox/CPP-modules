/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casimirri <clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 14:07:26 by clundber          #+#    #+#             */
/*   Updated: 2024/09/28 22:17:03 by casimirri        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"
# include <iostream>

	Dog::Dog(): Animal()
	{
		type = "Dog";
		std::cout << "Doggo spawned" << std::endl;
	}

	Dog::~Dog(){std::cout << "Doggo despawnd" << std::endl;}

	Dog::Dog(Dog& other): Animal()
	{
		std::cout << "Doggo gave birth to another doggo" << std::endl;
		this->type = other.type;
	}
	
	Dog& Dog::operator=(Dog& other)
	{
		if (this != &other)
		{
			std::cout << "Doggo taught another doggo" << std::endl;
			this->type = other.type;
		}
		return(*this);
	}
	void Dog::makeSound() const
	{
		std::cout << "Bark Bark" << std::endl;
	}