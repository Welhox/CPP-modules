/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clundber < clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:27:25 by clundber          #+#    #+#             */
/*   Updated: 2024/09/18 15:32:30 by clundber         ###   ########.fr       */
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
	Fixed(Fixed&);
	Fixed(const int new_value);
	Fixed(const float new_value);

	int toInt( void ) const;
	float toFloat( void ) const;
	void setRawBits(int const raw);
	int getRawBits() const;
	Fixed& operator=(Fixed&);
	// float operator<<(float output);
	std::ostream& operator<<(std::ostream& stream);
};
