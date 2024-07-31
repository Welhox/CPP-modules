/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casimirri <clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 16:45:38 by casimirri         #+#    #+#             */
/*   Updated: 2024/07/31 16:57:19 by casimirri        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

void    HumanA::attack()
{
    std::cout << name << " attacks with their " << weapon.getType() << std::endl; 
}

HumanA::HumanA(std::string weap)
{
    weapon.setType(weap);
}