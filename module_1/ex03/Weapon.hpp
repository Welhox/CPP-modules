/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casimirri <clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 16:18:31 by casimirri         #+#    #+#             */
/*   Updated: 2024/08/01 12:22:06 by casimirri        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class Weapon
{
private:
    std::string type;

public:
//    Weapon();
    Weapon(std::string new_type);

    const std::string& getType();
    void  setType(std::string new_type);

};