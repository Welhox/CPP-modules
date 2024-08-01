/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casimirri <clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 16:22:46 by casimirri         #+#    #+#             */
/*   Updated: 2024/08/01 12:22:27 by casimirri        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string& Weapon::getType()
{
    std::string& refType = type;
    return(refType);
}

void  Weapon::setType(std::string new_type)
{
    type = new_type;
}

Weapon::Weapon(std::string new_type)
{
    type = new_type;
}
