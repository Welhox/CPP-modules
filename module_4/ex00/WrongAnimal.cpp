/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casimirri <clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 10:56:48 by clundber          #+#    #+#             */
/*   Updated: 2024/09/28 22:17:37 by casimirri        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongAnimal.hpp"
# include <iostream>

	//Canonical form

	WrongAnimal::WrongAnimal(): type("Unknown"){std::cout << "WrongAnimal default constructer used" << std::endl;}
	
	WrongAnimal::~WrongAnimal(){std::cout << "WrongAnimal destructor used" << std::endl;}
	
	WrongAnimal::WrongAnimal(WrongAnimal& other)
	{
		std::cout << "WrongAnimal copy constructer used" << std::endl;
		*this = other;
	}
	
	WrongAnimal& WrongAnimal::operator=(WrongAnimal& other)
	{
		if (this != &other)
		{
			this->type = other.type;
			std::cout << "WrongAnimal copy operator used" << std::endl;
		}
		return (*this);
	}

	//memeber functions

 	void WrongAnimal::makeSound() const
	{
		std::cout << "Rabid WrongAnimal noices" << std::endl;
	}

	std::string WrongAnimal::getType() const{return(type);}