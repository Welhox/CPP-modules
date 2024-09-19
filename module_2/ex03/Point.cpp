/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clundber < clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:16:25 by clundber          #+#    #+#             */
/*   Updated: 2024/09/19 16:39:22 by clundber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Point.hpp"

Point::Point()
{
	std::cout << "Default constructor called" << std::endl;
}

Point::~Point()
{
	std::cout << "Destructor called" << std::endl;
}

Point::Point(const float x_value, const float y_value): x(x_value), y(y_value)
{
	std::cout << "constructor called" << std::endl;
}

Point::Point(const Point& oldClass): x(oldClass.x), y(oldClass.y)
{
	std::cout << "Copy constructor called" << std::endl;
}

Point& Point::operator=(const Point& oldClass)
{

	
}
