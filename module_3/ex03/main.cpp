/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clundber < clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:18:41 by clundber          #+#    #+#             */
/*   Updated: 2024/09/25 15:06:01 by clundber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include "DiamondTrap.hpp"
# include <iostream>
int	main()
{
	// ClapTrap tom("Tom");
	// ClapTrap kevin("Kevin");
	// ScavTrap casi("Casi");	

	// casi.attack("Kevin");
	// kevin.takeDamage(20);
	// kevin.attack("Casi");
	// casi.takeDamage(0);
	// ScavTrap copy(casi);
	// ScavTrap clone("clone");

	// clone = copy;
	// copy.guardGate();
	
	// FragTrap fraggy("Fraggy");
	// fraggy.highFivesGuys();

	DiamondTrap timantti("sparkles");
	std::cout << "HP = " << timantti.getHitPoints() << std::endl;
	std::cout << "energy = " << timantti.getEnergy() << std::endl;
	std::cout << "attack dmg = " << timantti.getAttackDmg() << std::endl;
	std::cout << "name = " << timantti.getName() << std::endl;

}