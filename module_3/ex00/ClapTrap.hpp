/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clundber < clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 14:49:52 by clundber          #+#    #+#             */
/*   Updated: 2024/09/23 13:25:26 by clundber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <string>

class ClapTrap
{
private:
	std::string name;
	int	energyPoints;
	int	hitPoints;
	int attackDamage;

public:
	ClapTrap(std::string);
	~ClapTrap();
	// ClapTrap(ClapTrap&);
	// ClapTrap& operator=(ClapTrap&);
	
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	
};