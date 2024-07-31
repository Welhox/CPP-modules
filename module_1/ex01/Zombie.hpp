/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casimirri <clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 16:01:56 by casimirri         #+#    #+#             */
/*   Updated: 2024/07/31 15:26:43 by casimirri        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Zombie
{
private:
    std::string name;
public:
    Zombie();
    Zombie(std::string name);
    ~Zombie();
    
    void    init(std::string name);
    void    announce();
};

void    randomChump(std::string name);
Zombie* newZombie(std::string name);
Zombie* zombieHorde( int N, std::string name );