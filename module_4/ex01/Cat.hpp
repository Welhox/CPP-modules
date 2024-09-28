/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casimirri <clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 22:03:09 by casimirri         #+#    #+#             */
/*   Updated: 2024/09/28 22:09:31 by casimirri        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
#include "Animal.hpp"

class Cat: public Animal
{
private:

public:
	Cat();
	~Cat();
	Cat(Cat&);
	Cat& operator=(Cat&);
	void makeSound() const override;
};