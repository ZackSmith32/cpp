/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsmith <zsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 23:57:32 by zsmith            #+#    #+#             */
/*   Updated: 2017/07/13 15:40:49 by zsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Array.hpp>
#include <iostream>
#include <string>
#include <ctime>
#include <ostream>

int		main(void) {
	int		i = 0;
	int		len = 7;

	Array<int>		a(7);
	srand(time(NULL));
	for ( ; i < len; i++) {
		a[i] = rand() % 100;
		std::cout << a[i] << std::endl;
	}
	std::cout << std::endl;
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	Array<float>	b(4);
	b[0] = 1.15;
	b[1] = -27.33;
	b[2] = 99.99;
	b[3] = 324987.11234;
	std::cout << "size of b = " << b.size() << std::endl;
	for (i = 0 ; i < 4; i++) {
		std::cout << b[i] << std::endl;
	}
	std::cout << std::endl;
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << "size of b = " << b.size() << std::endl;
	
	Array<float>	c(b);
	std::cout << "size of c = " << c.size() << std::endl;
	for (i = 0 ; i < 4; i++) {
		std::cout << c[i] << std::endl;
	}
	std::cout << std::endl;
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << "modify c, then print b" << std::endl;
	c[0] = 42;
	c[1] = 42;
	c[2] = 42;
	c[3] = 42;
	for (i = 0 ; i < 4; i++) {
		std::cout << "c[" << i << "]" << c[i] << std::endl;
	}
	std::cout << std::endl;
	for (i = 0 ; i < 4; i++) {
		std::cout << "b[" << i << "]" << b[i] << std::endl;
	}
	std::cout << std::endl;
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout <<  "initialize array with 'default' type" << std::endl;
	Array<>	d;
	std::cout << "size of empty array = " << d.size() << std::endl;
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << "access member of empty array" << std::endl;
	try {
		d[10];
	} 
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	} 
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << std::endl << std::endl;	
	return (0);
}