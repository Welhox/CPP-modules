/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casimirri <clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 14:40:45 by clundber          #+#    #+#             */
/*   Updated: 2024/07/30 15:47:54 by casimirri        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include <cstring>
#include <iomanip>

int check_number(std::string number)
{
    int i = 0;

    if (number[i] == '+' || isdigit(number[i]))
        i++;
    else
        return (1);
    while (number[i])
    {
        if (!isdigit(number[i]))
            return (1);
        i++;
    }
    return (0);
}

Contact input_info()
{
    Contact new_contact;
    std::cout << "INPUT NEW CONTACT INFORMATION:" << std::endl;
    while (new_contact.first_name == "")
    {
        std::cout << "FIRST NAME: ";
        std::getline(std::cin, new_contact.first_name);
        if (std::cin.eof())
            throw std::runtime_error("error");
    }
    while (new_contact.last_name == "")
    {
        std::cout << "LAST NAME: ";
        std::getline(std::cin, new_contact.last_name);
        if (std::cin.eof())
            throw std::runtime_error("error");
    }
    while (new_contact.nickname == "")
    {    
        std::cout << "NICKNAME: ";
        std::getline(std::cin, new_contact.nickname);
        if (std::cin.eof())
            throw std::runtime_error("error");
    }
    while (42)
    {
        std::cout << "PHONENUMBER: ";
        std::getline(std::cin, new_contact.phone_number);
        if(new_contact.phone_number != "" && check_number(new_contact.phone_number) == 0)
            break ;
        if (std::cin.eof())
            throw std::runtime_error("error");
    }
    while (new_contact.darkest_secret == "")
    {    
        std::cout << "DARK SECRET: ";
        std::getline(std::cin, new_contact.darkest_secret);
        if (std::cin.eof())
            throw std::runtime_error("error");
    }
    return(new_contact);
}

void PhoneBook::add_contact()
{
    static int i = 0;

    contact[i] = input_info();
    i++;
    i %= 8;
}
void    print_search(std::string to_print, bool end)
{
    int     length = to_print.length();
    bool    dot = false;
    length--;

    if (length > 9)
    {
        dot = true;
        length = 9;
    }
    if (dot == false)
        std::cout << std::setw(10) << to_print;
    else
        std::cout << to_print.substr(0, 9);
    if (dot == true)
        std::cout << ".";
    if (end == false)
        std::cout << "|";
}

void    print_contact(Contact contact)
{
    if (contact.first_name == "")
    {
        std::cout << "EMPTY INDEX SELECTED" << std::endl;
        return ;
    }
    std::cout << "FIRST NAME: " << contact.first_name << std::endl;
    std::cout << "LAST NAME: " << contact.last_name << std::endl;
    std::cout << "NICKNAME: " << contact.nickname << std::endl;
    std::cout << "PHONENUMBER: " << contact.phone_number << std::endl;
    std::cout << "DARKEST SECRET: " << contact.darkest_secret << std::endl;
}

void PhoneBook::search_contacts()
{
    std::string index;
    int         ind = -1;
    std::cout << "     INDEX|FIRST NAME| LAST NAME|  NICKNAME" << std::endl;
    for (int i = 0; i < 8; i++)
    {
        print_search(std::to_string(i), false);
        print_search(contact[i].first_name, false);
        print_search(contact[i].last_name, false);
        print_search(contact[i].nickname, true);
        std::cout << std::endl;
    }
    while (42)
    {
        std::cout << "CHOOSE CONTACT INDEX: ";
        std::getline(std::cin, index);
        if (std::cin.eof())
            throw std::runtime_error("error");
        if (index.length() == 1 && isdigit(index[0]))
            ind = stoi(index);
        if (ind < 0 ||ind > 7)
            std::cout << "INCORRECT INDEX CHOSEN" << std::endl;
        else
        {
            print_contact(contact[ind]);
            break ;
        }
    }
}
