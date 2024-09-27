/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clundber < clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 14:07:26 by clundber          #+#    #+#             */
/*   Updated: 2024/09/27 15:49:57 by clundber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"
# include <iostream>

	Dog::Dog(): Animal()
	{
		type = "Dog";
		std::cout << "Dog default constructor called" << std::endl;
	}

	
	~Dog();
	Dog(Dog&);
	Dog& operator=(Dog&);