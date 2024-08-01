/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casimirri <clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 17:01:38 by casimirri         #+#    #+#             */
/*   Updated: 2024/08/01 17:43:09 by casimirri        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <string>
#include <iostream>

void Harl::debug( void )
{
    std::cout << "DEBUG this ********" << std::endl;
}

void info( void )
{
    std::cout << "This is INFO" << std::endl;
}

void warning( void )
{
    std::cout << "WARNING WARNING WARNING" << std::endl;
}

void error( void )
{
    std::cout << "Could this perhaps be a ERROR?" << std::endl;
}

void complain( std::string level )
{
    Harl *complain; //array of member functions
    // match level to correct member function;

    char lvl;
    
    lvl = level[0];
    switch(lvl)
    {
        case 'A':
            //debug
        case 'B':
            //info
        case 'C':
            //warning
        case 'D':
            //error
    }

}