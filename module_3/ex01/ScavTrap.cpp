/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clundber < clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 18:57:59 by casimirri         #+#    #+#             */
/*   Updated: 2024/09/26 15:15:48 by clundber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(): ClapTrap()
{
	name = "default";
	energyPoints = 50;
	hitPoints = 100;
	attackDamage = 20;

	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string newName): ClapTrap()
{
	name = newName;
	energyPoints = 50;
	hitPoints = 100;
	attackDamage = 20;
	
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap& other): ClapTrap()
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	
	*this = other;
}

ScavTrap& ScavTrap::operator=(ScavTrap& other)
{
	std::cout << "ScavTrap copy assigment operator called" << std::endl;
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;

	return(*this);
}

void ScavTrap::attack(const std::string& target)
{
	if (energyPoints > 0)
	{
		energyPoints--;
		std::cout << "ScavTrap " << getName() << " attacks " << target << ", causing " << getAttackDmg() << " points of damage!" << std::endl;
	}
	else
		std::cout << "ScavTrap " << getName() << " has run out of energy :(" << std::endl; 
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << getName() << " is in Gate keeper mode" << std::endl;
}