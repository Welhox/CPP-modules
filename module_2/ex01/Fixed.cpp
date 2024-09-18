/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clundber < clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:27:19 by clundber          #+#    #+#             */
/*   Updated: 2024/09/18 15:32:11 by clundber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



# include <iostream>
# include "Fixed.hpp"
# include <cmath>

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
Fixed::Fixed(const int new_value)
{
	std::cout << "Int constructor called" << std::endl;
	value = new_value << fraction;
}

Fixed::Fixed(const float new_value)
{
	std::cout << "Float constructor called" << std::endl;
	value = roundf(new_value * (1 << fraction));
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

std::ostream& Fixed::operator<<(std::ostream& stream)
{
	stream << toFloat();
	return(stream);	
}

// float Fixed::operator<<(float output)
// {
// 	return (toFloat());
// }

int Fixed::toInt() const
{
	return (value >> fraction);
}
	
float Fixed::toFloat() const
{
	return (((float)value / (float)(1 << fraction)));
}