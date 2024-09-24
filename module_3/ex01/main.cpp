/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casimirri <clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:18:41 by clundber          #+#    #+#             */
/*   Updated: 2024/09/24 16:03:39 by casimirri        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

int	main()
{
	ClapTrap tom("Tom");
	ClapTrap kevin("Kevin");
	tom.attack("Kevin");
	kevin.takeDamage(0);
	kevin.attack("Tom");
	tom.takeDamage(5);
	tom.beRepaired(2);

	ClapTrap george(tom);
	ClapTrap steve("steve");
	steve = tom;

	george.beRepaired(1);
	tom.beRepaired(1);
	steve.beRepaired(1);
	// 	kevin.attack("Tom");
	// tom.takeDamage(5);
	// tom.beRepaired(2);

	// 	kevin.attack("Tom");
	// tom.takeDamage(5);
	// tom.beRepaired(2);

	// 	kevin.attack("Tom");
	// tom.takeDamage(5);
	// tom.beRepaired(2);
}