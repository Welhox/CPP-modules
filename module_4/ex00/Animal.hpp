/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clundber < clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 10:56:59 by clundber          #+#    #+#             */
/*   Updated: 2024/09/27 14:24:27 by clundber         ###   ########.fr       */
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
	~Animal();
	Animal(Animal&);
	Animal& operator=(Animal&);
	void makeSound();
};