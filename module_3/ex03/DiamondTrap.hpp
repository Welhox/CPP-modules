/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casimirri <clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 14:26:46 by clundber          #+#    #+#             */
/*   Updated: 2024/09/25 22:16:35 by casimirri        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap
{
private:
	std::string name;

public:
	DiamondTrap(std::string);
	~DiamondTrap();
	// DiamondTrap(DiamondTrap&);
	// DiamondTrap& operator=(DiamondTrap&);

	// void whoAmI();
};