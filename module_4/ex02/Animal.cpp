/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clundber < clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 10:56:48 by clundber          #+#    #+#             */
/*   Updated: 2024/10/02 10:41:47 by clundber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"
# include <iostream>

	//Canonical form

	Animal::Animal(): type("Unknown"){std::cout << "Animal default constructer used" << std::endl;}
	
	Animal::~Animal(){std::cout << "Animal destructor used" << std::endl;}
	
	Animal::Animal(Animal& other)
	{
		std::cout << "Animal copy constructer used" << std::endl;
		*this = other;
	}
	
	Animal& Animal::operator=(Animal& other)
	{
		if (this != &other)
		{
			this->type = other.type;
			std::cout << "Animal copy operator used" << std::endl;
		}
		return (*this);
	}
	
	//memeber functions

	std::string Animal::getType() const{return(type);}