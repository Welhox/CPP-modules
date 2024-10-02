/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clundber < clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 11:07:08 by clundber          #+#    #+#             */
/*   Updated: 2024/10/02 15:35:25 by clundber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "AMateria.hpp"
# include "Character.hpp"

	AMateria::AMateria()
	{
		this->type = "default";
		std::cout << "AMateria default spawned" << std::endl;
	}
	AMateria::AMateria(std::string const & type)
	{
		this->type = type;
		std::cout << "AMateria spawned" << std::endl;
	}
	
	AMateria::~AMateria()
	{
		std::cout << "AMateria despawned" << std::endl;
	}

	AMateria::AMateria(AMateria& other)
	{
		this->type = other.type;
		std::cout << "AMateria duplicated" << std::endl;
	}
	
	AMateria& AMateria::operator=(AMateria& other)
	{
		if (this != &other)
		{
			this->type = other.type;
			std::cout << "AMateria = operator called" << std::endl;
		}
		return(*this);
	}

	std::string const & AMateria::getType() const
	{
		return (this->type);
	}

	void AMateria::use(ICharacter& target)
	{
		if (this->type == "ice")
			std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
		else if (this->type == "cure")
			std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
		else
			std::cout << "the wand sizzles, but nothing happends to " << target.getName() << std::endl;
	}