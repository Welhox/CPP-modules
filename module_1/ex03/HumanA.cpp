/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casimirri <clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 16:45:38 by casimirri         #+#    #+#             */
/*   Updated: 2024/08/01 12:25:40 by casimirri        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

void    HumanA::attack()
{
    std::cout << name << " attacks with their " << weapon.getType() << std::endl; 
}

HumanA::HumanA(std::string new_name, Weapon& weap): weapon(weap), name(new_name)
{
}