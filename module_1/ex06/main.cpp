/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clundber < clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 17:01:28 by casimirri         #+#    #+#             */
/*   Updated: 2024/09/11 15:33:44 by clundber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main(int argc, char *argv[])
{
    try
    {
    if (argc != 2)
        throw(std::invalid_argument("invalid argument count"));
    std::string filter = argv[1];
    Harl harl;
    harl.complain(filter);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}