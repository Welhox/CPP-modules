/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clundber < clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:18:41 by clundber          #+#    #+#             */
/*   Updated: 2024/09/25 14:10:42 by clundber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"

int	main()
{
	// ClapTrap tom("Tom");
	ClapTrap kevin("Kevin");
	ScavTrap casi("Casi");	

	casi.attack("Kevin");
	kevin.takeDamage(20);
	kevin.attack("Casi");
	casi.takeDamage(0);
	ScavTrap copy(casi);
	ScavTrap clone("clone");

	clone = copy;
	copy.guardGate();
}