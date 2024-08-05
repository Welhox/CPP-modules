/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casimirri <clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 16:52:07 by casimirri         #+#    #+#             */
/*   Updated: 2024/08/05 15:28:22 by casimirri        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

void    HumanB::attack()
{
    if (weapon)
        std::cout << name << " attacks with their " << weapon->getType() << std::endl; 
}

HumanB::HumanB(std::string new_name): weapon()
{
    weapon = NULL;
    name = new_name;
}

void HumanB::setWeapon(Weapon &weap)
{
    weapon = &weap;
}