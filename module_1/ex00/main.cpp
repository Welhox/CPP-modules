/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casimirri <clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 15:59:18 by casimirri         #+#    #+#             */
/*   Updated: 2024/08/01 11:05:07 by casimirri        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *new_zombie;
    randomChump("Kevin");
    new_zombie = newZombie("Olle");
    new_zombie->announce();
    delete new_zombie;
}