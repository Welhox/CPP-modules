/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casimirri <clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 14:14:12 by clundber          #+#    #+#             */
/*   Updated: 2024/09/25 22:22:23 by casimirri        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"
# include <string>

class FragTrap : virtual public ClapTrap
{
private:

public:
	FragTrap(std::string);
	~FragTrap();
	FragTrap(FragTrap&);
	FragTrap& operator=(FragTrap&);
	FragTrap();
	
	void highFivesGuys(void);
	
};