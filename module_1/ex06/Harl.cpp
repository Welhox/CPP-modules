/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casimirri <clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 17:01:38 by casimirri         #+#    #+#             */
/*   Updated: 2024/08/02 16:36:47 by casimirri        ###   ########.fr       */
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

void Harl::complain( std::string level, std::string filter)
{
    std::string levels[4] = {"debug", "info", "warning", "error"};
    void(Harl::*comp[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    
    int i = 0;
    int filt = 0;
    while(i < 4 && levels[i].compare(level))
        i++;
    while(filt < 4 && levels[filt].compare(filter))
        filt++;
    switch (filt)
    {
        default :
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl << std::endl;
            break;
        case 3 :
            if(i == 3)
                (this->*comp[i])();
            break;
        case 2 :
            if(i >= 2 && i <= 3)
                (this->*comp[i])();
            break;
        case 1 :
            if(i >= 1 && i <= 3)
                (this->*comp[i])();
            break;
        case 0 :
            if(i >= 0 && i <= 3)
                (this->*comp[i])();
            break;
    }
}
