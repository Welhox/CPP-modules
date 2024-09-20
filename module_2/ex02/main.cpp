/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clundber < clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 11:59:18 by clundber          #+#    #+#             */
/*   Updated: 2024/09/20 13:24:03 by clundber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"
#include <iostream>

int main( void ) {
// Fixed  a;
// Fixed  b( 10 );
// Fixed  c( 42.42f );
// Fixed  d( b );
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

// std::cout << b + c << std::endl;

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
