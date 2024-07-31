/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casimirri <clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 16:07:27 by casimirri         #+#    #+#             */
/*   Updated: 2024/07/31 14:57:57 by casimirri        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name)
{
    Zombie::name = name;
}

Zombie::Zombie()
{    
}

void Zombie::init(std::string name)
{
    Zombie::name = name;
}

Zombie::~Zombie()
{
    std::cout << name << " stepped on a LEGO and died in agony" << std::endl;
}

void    Zombie::announce(void)
{
    std::cout << Zombie::name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

 Zombie* newZombie(std::string name)
{
    Zombie *new_zombie = new Zombie(name);
    return(new_zombie);
}

void    randomChump(std::string name)
{
    Zombie new_zombie(name);
    new_zombie.announce();
}
