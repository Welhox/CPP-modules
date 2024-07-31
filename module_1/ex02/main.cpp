/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casimirri <clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 15:32:04 by casimirri         #+#    #+#             */
/*   Updated: 2024/07/31 16:05:42 by casimirri        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *PTR = &str;
    std::string& REF = str;

    std::cout << "str adress = " << &str << std::endl;
    std::cout << "PTR adress = " << &PTR << std::endl;
    std::cout << "REF adress = " << &REF << std::endl << std::endl;

    std::cout << "str value = " << str << std::endl;
    std::cout << "PTR value = " << *PTR << std::endl;  
    std::cout << "REF value = " << REF << std::endl;  
}
