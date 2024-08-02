/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casimirri <clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 17:01:28 by casimirri         #+#    #+#             */
/*   Updated: 2024/08/02 16:39:15 by casimirri        ###   ########.fr       */
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
    harl.complain("debug", filter);
    harl.complain("error", filter);
    harl.complain("info", filter);
    harl.complain("warning", filter);
    harl.complain("info info", filter);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}