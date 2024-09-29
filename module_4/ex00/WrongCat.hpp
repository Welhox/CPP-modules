/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casimirri <clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 22:03:09 by casimirri         #+#    #+#             */
/*   Updated: 2024/09/29 15:02:45 by casimirri        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
private:

public:
	WrongCat();
	~WrongCat();
	WrongCat(WrongCat&);
	WrongCat& operator=(WrongCat&);
	void makeSound() const;
};