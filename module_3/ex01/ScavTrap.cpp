/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casimirri <clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 18:57:59 by casimirri         #+#    #+#             */
/*   Updated: 2024/09/24 23:06:15 by casimirri        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string newName): ClaptTrap(newName)
{
	energyPoints	= 10;
	hitPoints		= 10;
	attackDamage	= 0;
	std::cout << "ScavTrap default constructor called" << std::endl;
}