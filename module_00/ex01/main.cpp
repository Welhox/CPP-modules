/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casimirri <clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 14:35:49 by casimirri         #+#    #+#             */
/*   Updated: 2024/07/30 15:22:11 by casimirri        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

int main(void)
{
    try
    {
        PhoneBook phonebook;
        std::string input;
        while (42)
        {
            std::cout << "INPUT : ADD, SEARCH or EXIT" << std::endl;
            std::getline(std::cin, input);
            if (std::cin.eof())
                throw std::runtime_error("error");
            if (input == "ADD")
                phonebook.add_contact();
            else if (input == "SEARCH")
                phonebook.search_contacts();
            else if (input == "EXIT")
                break ;
            else
                std::cout << "INVALID INPUT" << std::endl;
        }
    }
    catch(std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    return (0);
}