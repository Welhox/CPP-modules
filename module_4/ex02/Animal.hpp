/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clundber < clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 10:56:59 by clundber          #+#    #+#             */
/*   Updated: 2024/10/02 10:13:46 by clundber         ###   ########.fr       */
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
	virtual void makeSound() const = 0;
	std::string getType() const;
};