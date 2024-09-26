/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clundber < clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 18:58:49 by casimirri         #+#    #+#             */
/*   Updated: 2024/09/26 15:08:34 by clundber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"
# include <string>

class ScavTrap : virtual public ClapTrap
{
protected:
	unsigned int default_energy;
public:
	ScavTrap(std::string);
	ScavTrap();
	~ScavTrap();
	ScavTrap(ScavTrap&);
	ScavTrap& operator=(ScavTrap&);
	
	void attack(const std::string& target);
	void guardGate();
};