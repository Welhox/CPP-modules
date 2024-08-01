/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casimirri <clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 16:31:44 by casimirri         #+#    #+#             */
/*   Updated: 2024/08/01 12:42:38 by casimirri        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include "Weapon.hpp"

class HumanA
{
private:
    Weapon& weapon;
    std::string name;
public:
    void attack();
    HumanA(std::string new_name, Weapon& weap);
};