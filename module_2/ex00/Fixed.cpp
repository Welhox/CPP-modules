/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clundber < clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 10:50:31 by clundber          #+#    #+#             */
/*   Updated: 2024/09/18 12:00:01 by clundber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "Fixed.hpp"

int	Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return(value);
}

Fixed::Fixed()
{
	setRawBits(0);
	std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(Fixed& oldClass)
{
	std::cout << "Copy constructor called" << std::endl;
	setRawBits(oldClass.getRawBits());
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

void Fixed::setRawBits(int const raw)
{
	value = raw;
}

Fixed& Fixed::operator=(Fixed& oldClass)
{
	setRawBits(oldClass.getRawBits());
	std::cout << "Copy assigment operator called" << std::endl;
	return(*this);
}