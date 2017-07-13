/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsmith <zsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 22:10:41 by zsmith            #+#    #+#             */
/*   Updated: 2017/07/12 22:32:10 by zsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

template <class T>
void		swap(T & a, T & b) {
	T	temp = a;
	a = b;
	b = temp;
}

template <class T>
T			min(T & a, T & b) {
	return (a >= b ? b : a);
}

template <class T>
T			max(T & a, T & b) {
	return (b >= a ? b : a);
}


int		main(void) {
	int		a = 42;
	int		b = 15;
	float	c = 99.99;
	float	d = 100.7;
	char	e = 'x';
	char 	f = 'z';

	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	swap<int>(a, b);
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;

	std::cout << "c = " << c << std::endl;
	std::cout << "d = " << d << std::endl;
	swap<float>(c, d);
	std::cout << "c = " << c << std::endl;
	std::cout << "d = " << d << std::endl;
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;

	std::cout << "c = " << c << std::endl;
	std::cout << "d = " << d << std::endl;
	std::cout << "min = " << min<float>(c, d) << std::endl;
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;

	std::cout << e << std::endl;
	std::cout << f << std::endl;
	std::cout << "max = " << max<char>(e, f) << std::endl;
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	return (0);
}
