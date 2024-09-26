/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clundber < clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 14:26:46 by clundber          #+#    #+#             */
/*   Updated: 2024/09/26 15:14:38 by clundber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap 
{
private:
	std::string name;

public:
	DiamondTrap();
	DiamondTrap(std::string);
	~DiamondTrap();
	DiamondTrap(DiamondTrap&);
	DiamondTrap& operator=(DiamondTrap&);
	void whoAmI();
};