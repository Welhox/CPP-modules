/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casimirri <clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 22:29:20 by casimirri         #+#    #+#             */
/*   Updated: 2024/09/29 11:28:18 by casimirri        ###   ########.fr       */
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
	std::string getIdea(unsigned int);
	void setIdea(unsigned int, std::string);
};