/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clundber < clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 14:49:52 by clundber          #+#    #+#             */
/*   Updated: 2024/09/25 16:10:07 by clundber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <string>

class ClapTrap
{
private:
	std::string 	name;
	unsigned int	energyPoints;
	unsigned int	hitPoints;
	unsigned int 	attackDamage;

public:
	ClapTrap();
	ClapTrap(std::string);
	~ClapTrap();
	ClapTrap(ClapTrap&);
	ClapTrap& operator=(ClapTrap&);
	
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	
	void setName(std::string);
	void setEnergy(unsigned int);
	void setHitPoints(unsigned int);
	void setAttackDmg(unsigned int);

	std::string getName();
	int getEnergy();
	int getHitPoints();
	int getAttackDmg();
};