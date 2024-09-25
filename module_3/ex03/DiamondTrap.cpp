/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clundber < clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 14:26:35 by clundber          #+#    #+#             */
/*   Updated: 2024/09/25 17:44:03 by clundber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "DiamondTrap.hpp"
# include <iostream>

DiamondTrap::~DiamondTrap(){ std::cout << "DiamondTrap destructor called" << std::endl; }

DiamondTrap::DiamondTrap(std::string new_name): ClapTrap(new_name + "_clap_name"), ScavTrap(), FragTrap(), name(new_name)
{
	// this->name = new_name;
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