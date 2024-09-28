/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casimirri <clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 22:29:48 by casimirri         #+#    #+#             */
/*   Updated: 2024/09/28 23:48:27 by casimirri        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Brain.hpp"
# include <iostream>
# include <string>

	Brain::Brain()
	{
        ideas[0] = "idea";
        ideas[1] =  "idea2";
        ideas[2] = nullptr;
		std::cout << "Brain spawned" << std::endl;
	}

	Brain::~Brain(){std::cout << "Brain despawnd" << std::endl;}

	Brain::Brain(Brain& other)
	{
		std::cout << "Brain gave birth to another Brain" << std::endl;
	}
	
	Brain& Brain::operator=(Brain& other)
	{
		if (this != &other)
		{
			std::string *ptr;
			ptr = other.ideas;
            this->ideas = ptr;
			std::cout << "Brain taught another Brain" << std::endl;
		}
		return(*this);
	}