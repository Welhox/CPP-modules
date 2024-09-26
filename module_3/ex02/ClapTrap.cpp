/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clundber < clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 14:51:44 by clundber          #+#    #+#             */
/*   Updated: 2024/09/26 15:16:09 by clundber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"
# include <iostream>

//canonical functions

ClapTrap::ClapTrap(): name("default")
{
	energyPoints	= 10;
	hitPoints		= 10;
	attackDamage	= 0;
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string newName): name(newName)
{
	energyPoints	= 10;
	hitPoints		= 10;
	attackDamage	= 0;
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap& other)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = other;
}

ClapTrap& ClapTrap::operator=(ClapTrap& other)
{
	std::cout << "ClapTrap copy assigment operator called" << std::endl;
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
	return(*this);
}

// attack etc. functions

void ClapTrap::attack(const std::string& target)
{
	if (hitPoints > 0)
	{
		if (energyPoints > 0)
		{
			energyPoints--;
			std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
		}
		else
			std::cout << "ClapTrap " << name << " has run out of energy :(" << std::endl; 
	}
	else
		std::cout << "ClapTrap " << name <<	" is dead" << std::endl;			
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPoints > 0)
	{
		if (amount > hitPoints)
			hitPoints = 0;
		else	
			hitPoints -= amount;
		std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!" << std::endl;
		if (hitPoints == 0)
			std::cout << "ClapTrap " << name <<	" died" << std::endl;
	}
	else
		std::cout << "ClapTrap " << name <<	" is already dead" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (hitPoints > 0)
	{
		if (energyPoints > 0)
		{
			energyPoints--;
			hitPoints += amount;
			std::cout << "ClapTrap " << name << " repairs itself for " << amount << " hit points, total health after repair: " << hitPoints << std::endl;
		}
		else
			std::cout << "ClapTrap " << name << " has run out of energy :(" << std::endl; 
	}
	else
		std::cout << "ClapTrap " << name <<	" is dead" << std::endl;
}

//Getters and setters

void ClapTrap::setName(std::string newName){ name = newName; }
void ClapTrap::setEnergy(unsigned int energy){ energyPoints = energy; }
void ClapTrap::setHitPoints(unsigned int health){ hitPoints = health; }
void ClapTrap::setAttackDmg(unsigned int attack){ attackDamage = attack; }

std::string ClapTrap::getName(){ return(name); }
int ClapTrap::getEnergy(){ return(energyPoints); }
int ClapTrap::getHitPoints(){ return (hitPoints); }
int ClapTrap::getAttackDmg(){ return (attackDamage); }