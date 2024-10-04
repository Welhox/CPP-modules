/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casimirri <clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 22:29:48 by casimirri         #+#    #+#             */
/*   Updated: 2024/10/04 22:32:04 by casimirri        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Brain.hpp"
# include <iostream>
# include <string>

	Brain::Brain()
	{
		std::cout << "Brain spawned" << std::endl;
	}

	Brain::~Brain(){std::cout << "Brain despawnd" << std::endl;}

	Brain::Brain(Brain& other)
	{
		std::cout << "Brain gave birth to another Brain" << std::endl;
		*this = other;
	}
	
	Brain& Brain::operator=(Brain& other)
	{
		if (this != &other)
		{
			for (int i = 0; i < 100; i++)
			{
				this->ideas[i] = other.ideas[i];
			}
			std::cout << "Brain taught another Brain" << std::endl;
		}
		return(*this);
	}

	std::string Brain::getIdea(unsigned int index)
	{
		if (index < 100)
			return (this->ideas[index]);
		return ("incorrect index");
	}

	void	Brain::setIdea(unsigned int index, std::string idea)
	{
		if (index < 100)
			this->ideas[index] = idea;
	}