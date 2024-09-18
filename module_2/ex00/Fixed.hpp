/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clundber < clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 10:50:43 by clundber          #+#    #+#             */
/*   Updated: 2024/09/18 11:46:29 by clundber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Fixed
{
private:
	int	value;
	static const int fraction = 8;

public:
	~Fixed();
	Fixed();
	void setRawBits(int const raw);
	int getRawBits() const;
	Fixed(Fixed&);
	Fixed& operator=(Fixed&);
};
