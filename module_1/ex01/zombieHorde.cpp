/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casimirri <clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 13:44:36 by casimirri         #+#    #+#             */
/*   Updated: 2024/07/31 15:16:18 by casimirri        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>
#include <iostream>

Zombie* zombieHorde(int N, std::string name)
{
    if (N <= 0)
        throw std::runtime_error("invalid Horde ammount");
    Zombie *horde = new Zombie[N];

    for (int i = 0; i < N; i++)
        horde[i].init(name);
    return(horde);
}