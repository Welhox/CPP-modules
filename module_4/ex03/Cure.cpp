/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clundber < clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 15:52:22 by clundber          #+#    #+#             */
/*   Updated: 2024/10/03 11:37:02 by clundber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "Cure.hpp"
# include <iostream>

	Cure::Cure():AMateria()
	{
		type = "cure";
		std::cout << "Cure created" << std::endl;
	}

	Cure::~Cure()
	{
		std::cout << "Cure undone" << std::endl;
	}

	Cure::Cure(Cure& other)
	{
		std::cout << "Cure duplicated" << std::endl;
		this->type = other.type;
	}
	
	Cure& Cure::operator=(Cure& other)
	{
		if (this != &other)
		{
			std::cout << "Cure = operator called" << std::endl;
			this->type = other.type;
		}
		return(*this);
	}

	AMateria* Cure::clone() const
	{
		Cure *temp = new Cure();
		return (temp);
		//this need fixing
	}
