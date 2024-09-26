/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clundber < clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 14:26:35 by clundber          #+#    #+#             */
/*   Updated: 2024/09/26 15:13:31 by clundber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "DiamondTrap.hpp"
# include <iostream>

DiamondTrap::~DiamondTrap(){ std::cout << "DiamondTrap destructor called" << std::endl; }

DiamondTrap::DiamondTrap(std::string new_name): ClapTrap(), ScavTrap(), FragTrap(), name(new_name)
{
	ClapTrap::name = new_name + "_clap_name";
	this->energyPoints = ScavTrap::default_energy;
	this->hitPoints = FragTrap::hitPoints;
	this->attackDamage = FragTrap::attackDamage;
	std::cout << "DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(): ClapTrap(), ScavTrap(), FragTrap()
{
	name = "default";
	ClapTrap::name = "default_clap_name";
	this->energyPoints = ScavTrap::default_energy;
	this->hitPoints = FragTrap::hitPoints;
	this->attackDamage = FragTrap::attackDamage;
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap& other): ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	
	*this = other;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap& other)
{
	std::cout << "DiamondTrap copy assigment operator called" << std::endl;
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
	this->ClapTrap::name = other.ClapTrap::name;
	return(*this);
}

void DiamondTrap::whoAmI(){std::cout << "My Diamond name is: " << name << " and my Clap name is: " << ClapTrap::name << std::endl;}
