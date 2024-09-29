/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casimirri <clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 22:01:06 by casimirri         #+#    #+#             */
/*   Updated: 2024/09/28 22:10:21 by casimirri        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongCat.hpp"
# include <iostream>

	WrongCat::WrongCat(): WrongAnimal()
	{
		type = "WrongCat";
		std::cout << "WrongCatto spawned" << std::endl;
	}

	WrongCat::~WrongCat(){std::cout << "WrongCatto despawnd" << std::endl;}

	WrongCat::WrongCat(WrongCat& other): WrongAnimal()
	{
		std::cout << "WrongCatto gave birth to another WrongCatto" << std::endl;
		this->type = other.type;
	}
	
	WrongCat& WrongCat::operator=(WrongCat& other)
	{
		if (this != &other)
		{
			std::cout << "WrongCatto taught another WrongCatto" << std::endl;
			this->type = other.type;
		}
		return(*this);
	}
	void WrongCat::makeSound() const
	{
		std::cout << "Meow meow!" << std::endl;
	}