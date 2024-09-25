/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clundber < clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 14:14:12 by clundber          #+#    #+#             */
/*   Updated: 2024/09/25 14:18:52 by clundber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"
# include <string>

class FragTrap : public ClapTrap
{
private:

public:
	FragTrap(std::string);
	~FragTrap();
	FragTrap(FragTrap&);
	FragTrap& operator=(FragTrap&);
	
	void attack(const std::string& target);
	void highFivesGuys(void);
	
};