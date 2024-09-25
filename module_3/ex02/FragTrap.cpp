/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clundber < clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 14:14:35 by clundber          #+#    #+#             */
/*   Updated: 2024/09/25 14:25:19 by clundber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"
#include <iostream>

FragTrap::~FragTrap(){ std::cout << "FragTrap destructor called" << std::endl; }

FragTrap::FragTrap(std::string newName): ClapTrap()
{
	setName(newName);
	setEnergy(100);
	setHitPoints(100);
	setAttackDmg(30);
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap& other)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	this->setName(other.getName());
	this->setHitPoints(other.getHitPoints());
	this->setEnergy(other.getEnergy());
	this->setAttackDmg(other.getAttackDmg());
}

FragTrap& FragTrap::operator=(FragTrap& other)
{
	std::cout << "FragTrap copy assigment operator called" << std::endl;
	this->setName(other.getName());
	this->setHitPoints(other.getHitPoints());
	this->setEnergy(other.getEnergy());
	this->setAttackDmg(other.getAttackDmg());
	return(*this);
}

void FragTrap::highFivesGuys(void){std::cout << "FragTrap " << getName() << " Requests the highest of fives!" << std::endl;  }