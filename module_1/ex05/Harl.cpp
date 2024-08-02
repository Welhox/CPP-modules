/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casimirri <clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 17:01:38 by casimirri         #+#    #+#             */
/*   Updated: 2024/08/02 14:52:49 by casimirri        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <string>
#include <iostream>

void Harl::debug( void )
{
    std::cout << "DEBUG this ********" << std::endl;
}

void Harl::info( void )
{
    std::cout << "This is INFO" << std::endl;
}

void Harl::warning( void )
{
    std::cout << "WARNING WARNING WARNING" << std::endl;
}

void Harl::error( void )
{
    std::cout << "Could this perhaps be a ERROR?" << std::endl;
}

void Harl::complain( std::string level )
{
    std::string levels[4] = {"error", "debug", "info", "warning"};
    void(Harl::*comp[4])() = {&Harl::error, &Harl::debug, &Harl::info, &Harl::warning};
    
    int i = 0;
    while(i < 4 && levels[i].compare(level))
        i++;
    if (i < 4)
        return((this->*comp[i])());
}