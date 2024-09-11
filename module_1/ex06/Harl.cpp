/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clundber < clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 17:01:38 by casimirri         #+#    #+#             */
/*   Updated: 2024/09/11 15:55:11 by clundber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <string>
#include <iostream>

void Harl::debug( void )
{
    std::cout << "[ DEBUG ]" << std::endl << "DEBUG this ********" << std::endl << std::endl;
}

void Harl::info( void )
{
    std::cout << "[ INFO ]" << std::endl << "This is INFO" << std::endl << std::endl;
}

void Harl::warning( void )
{
    std::cout << "[ WARNING ]" << std::endl << "WARNING WARNING WARNING" << std::endl << std::endl;
}

void Harl::error( void )
{
    std::cout << "[ ERROR ]" << std::endl << "Could this perhaps be a ERROR?" << std::endl << std::endl;
}

void Harl::complain(std::string filter)
{
    std::string levels[4] = {"debug", "info", "warning", "error"}; 
    void(Harl::*comp[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    int filt = 0;

    while(filt < 4 && levels[filt].compare(filter))
        filt++;
    switch (filt)
    {
        default :
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
        case 0 :
            (this->*comp[0])();
        case 1 :
            (this->*comp[1])();
        case 2 :
            (this->*comp[2])();
        case 3 :
            (this->*comp[3])();
    }
}
