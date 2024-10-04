/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casimirri <clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 14:07:45 by clundber          #+#    #+#             */
/*   Updated: 2024/10/04 22:34:56 by casimirri        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
#include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal
{
private:
	Brain* brain;
public:
	Dog();
	~Dog();
	Dog(Dog&);
	Dog& operator=(Dog&);
	void makeSound() const override;
	void setIdea(unsigned int index, std::string idea);
	std::string getIdea(unsigned int index);
};