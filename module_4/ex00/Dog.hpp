/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casimirri <clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 14:07:45 by clundber          #+#    #+#             */
/*   Updated: 2024/09/29 15:05:03 by casimirri        ###   ########.fr       */
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
	void makeSound() const override;
};