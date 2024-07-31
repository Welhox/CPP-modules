/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casimirri <clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 15:59:18 by casimirri         #+#    #+#             */
/*   Updated: 2024/07/31 12:31:20 by casimirri        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

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

int main()
{
    Zombie *new_zombie;
    randomChump("Kevin");
    new_zombie = newZombie("Olle");
    new_zombie->announce();
    delete new_zombie;
}