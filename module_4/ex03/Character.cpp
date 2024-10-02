/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clundber < clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 12:05:05 by clundber          #+#    #+#             */
/*   Updated: 2024/10/02 15:42:00 by clundber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Character.hpp"

Character::Character()
{
	this->name = "default";
	std::cout << "default Character created" << std::endl;
	for (int i = 0; i < 4; i++)
		this->materias[i] = nullptr;
	disAmount = 0;
}

Character::Character(std::string name)
{
	this->name = name;
	std::cout << "Character created" << std::endl;
	for (int i = 0; i < 4; i++)
		this->materias[i] = nullptr;
	disAmount = 0;
}

Character::~Character()
{
	std::cout << "Character undone" << std::endl;
	if (disAmount > 0)
		delete[] discarded;
	delete[] materias; 
	//probably will leak if there is materias
}

Character::Character(Character& other)
{
	this->name = other.name;
	for (int i = 0; i < 4; i++)
	{
		delete materias[i];
		this->materias[i] = other.materias[i]; // need to add new
	}
	std::cout << "Character duplicated" << std::endl;
}
	
Character& Character::operator=(Character& other)
{
	if (this != &other)
	{
		this->name = other.name;
		for (int i = 0; i < 4; i++)
		{
			delete materias[i];
			this->materias[i] = other.materias[i]; // need to add new
		}
		std::cout << "Character = operator called" << std::endl;
	}
	return(*this);
}

std::string const & Character::getName() const {return(this->name);}

void Character::equip(AMateria* m)
{
	int	i = 0;
	while (i < 4 && this->materias[i] != nullptr)
		i++;
	if (i < 4)
		this->materias[i] = m;
}

void Character::unequip(int idx)
{
	if (idx < 4 && idx >= 0 && materias[idx] != nullptr)
		{
			discarded[disAmount] = materias[idx];
			materias[idx] = nullptr;
			disAmount++;
		}
	//need to fix resizing of the array
	// not working at the moment, will get back to it later
}

//use needs to be implemented still;