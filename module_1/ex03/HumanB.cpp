/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clundber < clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 16:52:07 by casimirri         #+#    #+#             */
/*   Updated: 2024/09/11 14:53:07 by clundber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

void    HumanB::attack()
{
    if (weapon)
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    else
        std::cout << name << " attacks with their " << "fists" << std::endl;
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