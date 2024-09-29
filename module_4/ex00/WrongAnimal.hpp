/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casimirri <clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 10:56:59 by clundber          #+#    #+#             */
/*   Updated: 2024/09/28 22:12:49 by casimirri        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
# include <string>

class WrongAnimal
{
protected:
	std::string type;	

public:
	WrongAnimal();
	~WrongAnimal();
	WrongAnimal(WrongAnimal&);
	WrongAnimal& operator=(WrongAnimal&);
	void makeSound() const;
	std::string getType() const;
};