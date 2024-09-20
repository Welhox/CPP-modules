/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clundber < clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 14:49:52 by clundber          #+#    #+#             */
/*   Updated: 2024/09/20 15:16:32 by clundber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <string>

class ClapTrap
{
private:
	std::string name;
	int	energy_points;
	

public:
	ClapTrap();
	~ClapTrap();
	ClapTrap(ClapTrap&);
	ClapTrap& operator=(ClapTrap&);

	
};