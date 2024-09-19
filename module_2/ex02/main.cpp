/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clundber < clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 11:59:18 by clundber          #+#    #+#             */
/*   Updated: 2024/09/19 15:14:45 by clundber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"
#include <iostream>

int main( void ) {
// Fixed a;
// Fixed const b( 10 );
// Fixed const c( 42.42f );
// Fixed const d( b );
// a = b;
// a = Fixed( 1234.4321f );
// a = (Fixed(a + c));
// std::cout << "a is " << a << std::endl;
// std::cout << "b is " << b << std::endl;
// std::cout << "c is " << c << std::endl;
// std::cout << "d is " << d << std::endl;
// std::cout << "a is " << a.toInt() << " as integer" << std::endl;
// std::cout << "b is " << b.toInt() << " as integer" << std::endl;
// std::cout << "c is " << c.toInt() << " as integer" << std::endl;
// std::cout << "d is " << d.toInt() << " as integer" << std::endl;

// if (a > b)
// 	std::cout << "> working correctly" << std::endl;
// else
// 	std::cout << "> INOP" << std::endl;

// if (b < a)
// 	std::cout << "< working correctly" << std::endl;
// else
// 	std::cout << "< INOP" << std::endl;

// if (d == b)
// 	std::cout << "== working correctly" << std::endl;
// else
// 	std::cout << "== INOP" << std::endl;

// if (a == b)
// 	std::cout << "== INOP" << std::endl;
// else
// 	std::cout << "== working correctly" << std::endl;	

// if (a != b)
// 	std::cout << "!= working correctly" << std::endl;
// else
// 	std::cout << "!= INOP" << std::endl;

// if (d != b)
// 	std::cout << "!= INOP" << std::endl;
// else
// 	std::cout << "!= working correctly" << std::endl;	
// return 0;
// Fixed const e(Fixed(5.05f) * Fixed(2));
// std::cout << "e is " << e << std::endl;
// Fixed const f(Fixed(10) + Fixed(20));
// std::cout << "f is " << f << std::endl;


Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << Fixed::max( a, b ) << std::endl;
return 0;


}

/* $> ./a.out
Default constructor called
Int constructor called
Float constructor called
Copy constructor called
Copy assignment operator called
Float constructor called
Copy assignment operator called
Destructor called
a is 1234.43
b is 10
c is 42.4219
d is 10
a is 1234 as integer
b is 10 as integer
c is 42 as integer
d is 10 as integer
Destructor called
Destructor called
Destructor called
Destructor called
$> */

// A constructor that takes a constant integer as a parameter.
// It converts it to the corresponding fixed-point value. The fractional bits value is
// initialized to 8 like in exercise 00.
// • A constructor that takes a constant floating-point number as a parameter.
// It converts it to the corresponding fixed-point value. The fractional bits value is
// initialized to 8 like in exercise 00.
// • A member function float toFloat( void ) const;
// that converts the fixed-point value to a floating-point value.
// • A member function int toInt( void ) const;
// that converts the fixed-point value to an integer value.
// And add the following function to the Fixed class files:
// • An overload of the insertion («) operator that inserts a floating-point representation
// of the fixed-point number into the output stream object passed as parameter.