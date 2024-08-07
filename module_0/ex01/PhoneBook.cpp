/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clundber < clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 14:40:45 by clundber          #+#    #+#             */
/*   Updated: 2024/08/07 12:07:19 by clundber         ###   ########.fr       */
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
    std::string temp;
    while (new_contact.getFn().empty())
    {
        std::cout << "FIRST NAME: ";
        std::getline(std::cin, temp);
        if (std::cin.eof())
            throw std::runtime_error("error");
        new_contact.setFn(temp);
    }
    while (new_contact.getLn().empty())
    {
        std::cout << "LAST NAME: ";
        std::getline(std::cin, temp);
        if (std::cin.eof())
            throw std::runtime_error("error");
        new_contact.setLn(temp);
    }
    while (new_contact.getNn().empty())
    {    
        std::cout << "NICKNAME: ";
        std::getline(std::cin, temp);
        if (std::cin.eof())
            throw std::runtime_error("error");
        new_contact.setNn(temp);
    }
    while (42)
    {
        std::cout << "PHONENUMBER: ";
        std::getline(std::cin, temp);
        new_contact.setPn(temp);
        if(new_contact.getPn() != "" && check_number(new_contact.getPn()) == 0)
            break ;
        if (std::cin.eof())
            throw std::runtime_error("error");
    }
    while (new_contact.getDs().empty())
    {    
        std::cout << "DARKEST SECRET: ";
        std::getline(std::cin, temp);
        if (std::cin.eof())
            throw std::runtime_error("error");
        new_contact.setDs(temp);
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
    if (contact.getFn().empty())
    {
        std::cout << "EMPTY INDEX SELECTED" << std::endl;
        return ;
    }
    std::cout << "FIRST NAME: " << contact.getFn() << std::endl;
    std::cout << "LAST NAME: " << contact.getLn() << std::endl;
    std::cout << "NICKNAME: " << contact.getNn() << std::endl;
    std::cout << "PHONENUMBER: " << contact.getPn() << std::endl;
    std::cout << "DARKEST SECRET: " << contact.getDs() << std::endl;
}

void PhoneBook::search_contacts()
{
    std::string index;
    int         ind = -1;
    std::cout << "     INDEX|FIRST NAME| LAST NAME|  NICKNAME" << std::endl;
    for (int i = 0; i < 8; i++)
    {
        print_search(std::to_string(i), false);
        print_search(contact[i].getFn(), false);
        print_search(contact[i].getLn(), false);
        print_search(contact[i].getNn(), true);
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
