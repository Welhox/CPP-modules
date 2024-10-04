/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casimirri <clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 22:03:09 by casimirri         #+#    #+#             */
/*   Updated: 2024/10/04 22:37:29 by casimirri        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
#include "Animal.hpp"
# include "Brain.hpp"
# include <iostream>

class Cat: public Animal
{
private:
	Brain* brain;
	
public:
	Cat();
	~Cat();
	Cat(Cat&);
	Cat& operator=(Cat&);
	void makeSound() const override;
	void setIdea(unsigned int index, std::string idea);
	std::string getIdea(unsigned int index);
};