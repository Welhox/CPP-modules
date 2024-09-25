/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clundber < clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 14:14:12 by clundber          #+#    #+#             */
/*   Updated: 2024/09/25 16:28:41 by clundber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"
# include <string>

class FragTrap : public virtual ClapTrap
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