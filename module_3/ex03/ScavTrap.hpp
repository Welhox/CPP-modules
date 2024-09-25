/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clundber < clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 18:58:49 by casimirri         #+#    #+#             */
/*   Updated: 2024/09/25 16:28:33 by clundber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"
# include <string>

class ScavTrap : public virtual ClapTrap
{
private:

public:
	ScavTrap(std::string);
	ScavTrap();
	~ScavTrap();
	ScavTrap(ScavTrap&);
	ScavTrap& operator=(ScavTrap&);
	
	void attack(const std::string& target);
	void guardGate();
	
};