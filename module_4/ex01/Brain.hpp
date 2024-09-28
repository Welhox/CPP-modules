/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casimirri <clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 22:29:20 by casimirri         #+#    #+#             */
/*   Updated: 2024/09/28 23:42:44 by casimirri        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
#include <iostream>
class Brain
{
private:
    std::string ideas[100];
    
public:
	Brain();
	~Brain();
	Brain(Brain&);
	Brain& operator=(Brain&);
};