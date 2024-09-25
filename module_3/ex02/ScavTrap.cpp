/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clundber < clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 18:57:59 by casimirri         #+#    #+#             */
/*   Updated: 2024/09/25 14:10:23 by clundber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string newName): ClapTrap()
{
	setName(newName);
	setEnergy(50);
	setHitPoints(100);
	setAttackDmg(20);
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap& other)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	this->setName(other.getName());
	this->setHitPoints(other.getHitPoints());
	this->setEnergy(other.getEnergy());
	this->setAttackDmg(other.getAttackDmg());
}

ScavTrap& ScavTrap::operator=(ScavTrap& other)
{
	std::cout << "ScavTrap copy assigment operator called" << std::endl;
	this->setName(other.getName());
	this->setHitPoints(other.getHitPoints());
	this->setEnergy(other.getEnergy());
	this->setAttackDmg(other.getAttackDmg());
	return(*this);
}

void ScavTrap::attack(const std::string& target)
{
	int energy = getEnergy();
	if (energy > 0)
	{
		energy--;
		std::cout << "ScavTrap " << getName() << " attacks " << target << ", causing " << getAttackDmg() << " points of damage!" << std::endl;
		setEnergy(energy);
	}
	else
		std::cout << "ScavTrap " << getName() << " has run out of energy :(" << std::endl; 
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << getName() << " is in Gate keeper mode" << std::endl;
}