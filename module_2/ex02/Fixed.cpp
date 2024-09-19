/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clundber < clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 11:59:33 by clundber          #+#    #+#             */
/*   Updated: 2024/09/19 15:10:50 by clundber         ###   ########.fr       */
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

Fixed::Fixed(const Fixed& oldClass)
{
	std::cout << "Copy constructor called" << std::endl;
	setRawBits(oldClass.value);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

void Fixed::setRawBits(int const raw)
{
	value = raw;
}

Fixed& Fixed::operator=(const Fixed& oldClass)
{
	if (this != &oldClass)
	{
		setRawBits(oldClass.value);
		std::cout << "Copy assigment operator called" << std::endl;
	}
	return(*this);
}

std::ostream& operator<<(std::ostream& stream, const Fixed& fixed)
{
	stream << fixed.toFloat();
	return(stream);	
}

int Fixed::toInt() const
{
	return (value >> fraction);
}
	
float Fixed::toFloat() const
{
	return (((float)value / (float)(1 << fraction)));
}

//comparison operators

bool operator>(const Fixed& c1, const Fixed& c2)
{
	return (c1.toFloat() > c2.toFloat());
}

bool operator<(const Fixed& c1, const Fixed& c2)
{
	return (c1.toFloat() < c2.toFloat());
}

bool operator>=(const Fixed& c1, const Fixed& c2)

{
	return (c1.toFloat() >= c2.toFloat());
}

bool operator<=(const Fixed& c1, const Fixed& c2)
{
	return (c1.toFloat() <= c2.toFloat());
}

bool operator==(const Fixed& c1, const Fixed& c2)
{
	return (c1.toFloat() == c2.toFloat());
}

bool operator!=(const Fixed& c1, const Fixed& c2)
{
	return (c1.toFloat() != c2.toFloat());
}

//arithmetic operators

float operator*(const Fixed& c1, const Fixed& c2)
{
	return (c1.toFloat() * c2.toFloat());
}

float operator/(const Fixed& c1, const Fixed& c2)
{
	return (c1.toFloat() / c2.toFloat());
}

float operator+(const Fixed& c1, const Fixed& c2)
{
	return (c1.toFloat() + c2.toFloat());
}

float operator-(const Fixed& c1, const Fixed& c2)
{
	return (c1.toFloat() - c2.toFloat());
}

//increment / decrement operators

Fixed& Fixed::operator++()
{
	value++;
	return(*this);
}

Fixed Fixed::operator++(int)
{
	Fixed temp = *this;
	++*this;
	return(temp);	
}

Fixed& Fixed::operator--()
{
	value++;
	return(*this);
}

Fixed Fixed::operator--(int)
{
	Fixed temp = *this;
	++*this;
	return(temp);	
}

// max/min

Fixed& Fixed::max(Fixed& c1, Fixed& c2)	
{
	if (c1.toFloat() > c2.toFloat())
		return (c1);
	else
		return (c2);
}
	
const Fixed& Fixed::max(const Fixed& c1, const Fixed& c2)
{
	if (c1.toFloat() > c2.toFloat())
		return (c1);
	else
		return (c2);
}
	
Fixed& Fixed::min(Fixed& c1, Fixed& c2)
{
	if (c1.toFloat() < c2.toFloat())
		return (c1);
	else
		return (c2);
}
	
const Fixed& Fixed::min(const Fixed& c1, const Fixed& c2)
{
	if (c1.toFloat() < c2.toFloat())
		return (c1);
	else
		return (c2);	
}
	