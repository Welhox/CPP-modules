/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clundber < clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 14:07:45 by clundber          #+#    #+#             */
/*   Updated: 2024/09/27 14:22:40 by clundber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
#include "Animal.hpp"

class Dog: public Animal
{
private:

public:
	Dog();
	~Dog();
	Dog(Dog&);
	Dog& operator=(Dog&);
	
};