/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clundber < clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:09:13 by clundber          #+#    #+#             */
/*   Updated: 2024/09/19 16:09:15 by clundber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#include <iostream>

class Fixed
{
private:
	int	value;
	static const int fraction = 8;
	
public:
	~Fixed();
	Fixed();
	Fixed(const Fixed&);
	Fixed(const int new_value);
	Fixed(const float new_value);

	int toInt( void ) const;
	float toFloat( void ) const;
	void setRawBits(int const raw);
	int getRawBits() const;
	
	Fixed& operator=(const Fixed&);
	Fixed& operator++();
	Fixed operator++(int);
	Fixed& operator--();
	Fixed operator--(int);
	static Fixed& max(Fixed&, Fixed&);
	static const Fixed& max(const Fixed&, const Fixed&);
	static Fixed& min(Fixed&, Fixed&);
	static const Fixed& min(const Fixed&, const Fixed&);
};

	std::ostream& operator<<(std::ostream& stream, const Fixed& fixed);
	bool operator>(const Fixed& c1, const Fixed& c2);
	bool operator<(const Fixed& c1, const Fixed& c2);
	bool operator>=(const Fixed& c1, const Fixed& c2);
	bool operator<=(const Fixed& c1, const Fixed& c2);
	bool operator==(const Fixed& c1, const Fixed& c2);
	bool operator!=(const Fixed& c1, const Fixed& c2);

	float operator*(const Fixed& c1, const Fixed& c2);
	float operator/(const Fixed& c1, const Fixed& c2);
	float operator+(const Fixed& c1, const Fixed& c2);
	float operator-(const Fixed& c1, const Fixed& c2);