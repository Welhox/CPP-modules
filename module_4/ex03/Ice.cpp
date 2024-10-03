/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clundber < clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 11:25:33 by clundber          #+#    #+#             */
/*   Updated: 2024/10/03 11:37:15 by clundber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Ice.hpp"
# include <iostream>

	Ice::Ice():AMateria()
	{
		type = "ice";
		std::cout << "Ice created" << std::endl;
	}

	Ice::~Ice()
	{
		std::cout << "Ice undone" << std::endl;
	}

	Ice::Ice(Ice& other)
	{
		std::cout << "Ice duplicated" << std::endl;
		this->type = other.type;
	}
	
	Ice& Ice::operator=(Ice& other)
	{
		if (this != &other)
		{
			std::cout << "Ice = operator called" << std::endl;
			this->type = other.type;
		}
		return(*this);
	}

	AMateria* Ice::clone() const
	{
		Ice *temp = new Ice();
		return (temp);
		//this needs fixing
	}
