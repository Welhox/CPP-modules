/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casimirri <clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 10:56:59 by clundber          #+#    #+#             */
/*   Updated: 2024/09/28 22:12:49 by casimirri        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
# include <string>

class Animal
{
protected:
	std::string type;	

public:
	Animal();
	virtual ~Animal();
	Animal(Animal&);
	Animal& operator=(Animal&);
	virtual void makeSound() const;
	std::string getType() const;
};