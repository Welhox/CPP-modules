/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clundber < clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 14:51:44 by clundber          #+#    #+#             */
/*   Updated: 2024/09/23 13:26:07 by clundber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"
# include <iostream>

//canonical functions

ClapTrap::ClapTrap(std::string newName): name(newName)
{
	energyPoints	= 10;
	hitPoints		= 10;
	attackDamage	= 0;
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

// ClapTrap::ClapTrap(ClapTrap& other)
// {
// 	std::cout << "ClapTrap copy constructor called" << std::endl;
// 	//add copy elements
// }

// ClapTrap& ClapTrap::operator=(ClapTrap& oldClass)
// {
// 	std::cout << "ClapTrap copy assigment operator called" << std::endl;
// 	//add the meat
// }

// attack etc. functions

void ClapTrap::attack(const std::string& target)
{
	if (energyPoints > 0)
	{
		energyPoints--;
		std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << "points of damage!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << name << " has run out of energy :(" << std::endl; 
}


void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount > 9999)
		amount = 9999;
	hitPoints -= amount;
	std::cout << "ClapTrap " << name << "takes " << amount << "points of damage!" << std::endl;
	if (hitPoints <= 0)
	{
		hitPoints = 0;
		std::cout << "ClapTrap " << name <<	"died" << std::endl;
	}
}


void ClapTrap::beRepaired(unsigned int amount)
{
	if (amount > 10)
		amount = 10;
	if (energyPoints > 0)
	{
		energyPoints--;
		if (hitPoints < 10)
			hitPoints += amount;
		if (hitPoints > 10)
			hitPoints = 10;
		std::cout << "ClapTrap " << name << " repairs itself for " << amount << " hit points, total health after repair: " << hitPoints << std::endl;
	}
	else
		std::cout << "ClapTrap " << name << " has run out of energy :(" << std::endl; 
}