/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casimirri <clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 15:59:18 by casimirri         #+#    #+#             */
/*   Updated: 2024/07/31 15:16:14 by casimirri        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

void    randomChump(std::string name);
Zombie* newZombie(std::string name);

int main()
{
    int N = 0;
    Zombie *horde;
    try
    {
        horde = zombieHorde(N, "Steve");
        for(int i = 0; i < N; i++)
            horde[i].announce();
        delete [] horde;
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}
