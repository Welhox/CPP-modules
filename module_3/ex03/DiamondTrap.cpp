/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casimirri <clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 14:26:35 by clundber          #+#    #+#             */
/*   Updated: 2024/09/25 22:18:30 by casimirri        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "DiamondTrap.hpp"
# include <iostream>

DiamondTrap::~DiamondTrap(){ std::cout << "DiamondTrap destructor called" << std::endl; }

DiamondTrap::DiamondTrap(std::string new_name): ClapTrap(), FragTrap(), ScavTrap(), name(new_name)
{
	ClapTrap::name = new_name + "_clap_name";
	this->name = new_name;
	this->energyPoints = ScavTrap::energyPoints;
	this->hitPoints = FragTrap::hitPoints;
	this->attackDamage = FragTrap::attackDamage;

	std::cout << "DiamondTrap constructor called" << std::endl;
}

// • Name, which is passed as parameter to a constructor
// • ClapTrap::name (parameter of the constructor + "_clap_name" suffix)
// • Hit points (FragTrap)
// • Energy points (ScavTrap)
// • Attack damage (FragTrap)
// • attack() (Scavtrap)

// Of course, the ClapTrap subobject of the DiamondTrap will be created once, and only
// once. Yes, there’s a trick.