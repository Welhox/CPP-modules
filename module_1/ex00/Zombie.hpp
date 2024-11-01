/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casimirri <clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 16:01:56 by casimirri         #+#    #+#             */
/*   Updated: 2024/08/01 11:05:47 by casimirri        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Zombie
{
private:
    std::string name;
public:
    Zombie(std::string name);
    ~Zombie();
    void    announce();
};

 Zombie* newZombie(std::string name);
void    randomChump(std::string name);