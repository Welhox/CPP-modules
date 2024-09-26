/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clundber < clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 14:14:35 by clundber          #+#    #+#             */
/*   Updated: 2024/09/26 15:16:19 by clundber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"
#include <iostream>

FragTrap::~FragTrap(){ std::cout << "FragTrap destructor called" << std::endl; }

FragTrap::FragTrap(): ClapTrap()
{
	name = "default";
	energyPoints = 100;
	hitPoints = 100;
	attackDamage = 30;

	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string newName): ClapTrap()
{
	name = newName;
	energyPoints = 100;
	hitPoints = 100;
	attackDamage = 30;

	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap& other): FragTrap()
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = other;
}

FragTrap& FragTrap::operator=(FragTrap& other)
{
	std::cout << "FragTrap copy assigment operator called" << std::endl;
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
	return(*this);
}

void FragTrap::highFivesGuys(void){std::cout << "FragTrap " << name << " Requests the highest of fives!" << std::endl;  }