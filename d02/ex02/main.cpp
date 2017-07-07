/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsmith <zsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 09:58:36 by zsmith            #+#    #+#             */
/*   Updated: 2017/07/06 18:40:25 by zsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

#include <iostream>
int main( void ) {

	Fixed a;
	Fixed b(Fixed(5.05f) * Fixed(2));
	Fixed c(42.42f);
	Fixed d(2);
	Fixed e(d * c);
	
	a.setRawBits(256);
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "d = " << d << std::endl;
	std::cout << "e = " << e << std::endl;

	std::cout << "++a" << std::endl;
	++a;
	std::cout << "a = " << a << std::endl;
	std::cout << "a++" << std::endl;
	a++;
	std::cout << "a = " << a << std::endl;
	std::cout << "a = a + b" << std::endl;
	a = a + b;
	std::cout << "a = " << a << std::endl;
	std::cout << "e = c = b" << std::endl;
	e = c = b;
	std::cout << "e = " << e << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "b = b * b * b * b / a" << std::endl;
	b = b * b * b * b / a;
	std::cout << "b = " << b << std::endl;
	std::cout << "c = e - b" << std::endl << std::endl;
	c = e - b;
	std::cout << "c = " << c << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "c = c - a" << std::endl;
	c = c - a;
	std::cout << "c = " << c << std::endl;
	std::cout << "a--" << std::endl;
	a--;
	std::cout << "a = " << a << std::endl;
	std::cout << "--a" << std::endl;
	--a;
	std::cout << "a = " << a << std::endl;
	std::cout << "min( a, c) " <<  Fixed::min(a, c) << std::endl;
	std::cout << "max( a, c) " <<  Fixed::max(a, c) << std::endl << std::endl;

	std::cout << "a < c :" << (a < c) << std::endl;
	std::cout << "a > c :" << (a > c) << std::endl;
	std::cout << "a == c :" << (a == c) << std::endl;
	std::cout << "a == a :" << (a == a) << std::endl;
	std::cout << "b <= d :" << (a <= c) << std::endl;
	std::cout << "e >= d :" << (e >= c) << std::endl;
	std::cout << "e != e :" << (a != c) << std::endl << std::endl;

	std::cout << "d = " << d << std::endl;	
	std::cout << "d = d / d / d / d / d" << std::endl;
	d = d / d / d / d / d;
	std::cout << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "d = " << d << std::endl;
	std::cout << "e = " << e << std::endl;

	// std::cout << Fixed::max( a, b ) << std::endl;
	
	return 0;
}