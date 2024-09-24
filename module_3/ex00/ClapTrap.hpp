/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casimirri <clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 14:49:52 by clundber          #+#    #+#             */
/*   Updated: 2024/09/24 15:50:36 by casimirri        ###   ########.fr       */
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
	ClapTrap(ClapTrap&);
	ClapTrap& operator=(ClapTrap&);
	
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	
};