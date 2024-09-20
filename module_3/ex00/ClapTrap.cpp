/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clundber < clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 14:51:44 by clundber          #+#    #+#             */
/*   Updated: 2024/09/20 15:13:00 by clundber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"
# include <iostream>

//canonical functions

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap& other)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	//add copy elements
}

ClapTrap& ClapTrap::operator=(ClapTrap& oldClass)
{
	std::cout << "ClapTrap copy assigment operator called" << std::endl;
	//add the meat
}
