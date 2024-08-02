/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casimirri <clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 17:01:28 by casimirri         #+#    #+#             */
/*   Updated: 2024/08/02 14:53:46 by casimirri        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main(void)
{
    Harl harl;
    harl.complain("error");
    harl.complain("debug");
    harl.complain("info");
    harl.complain("warning");
    std::cout << "now testing gibberish" << std::endl;
    harl.complain("info info");
}