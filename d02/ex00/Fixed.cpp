/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsmith <zsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 09:57:47 by zsmith            #+#    #+#             */
/*   Updated: 2017/07/06 11:01:28 by zsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed(void) {
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const & src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::~Fixed(void) {
	std::cout << "Deconstructor called" << std::endl;
	return ;
}

Fixed &	Fixed::operator=(Fixed const & rhs) {
	if (this != &rhs)
		this->_rawBits = rhs.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const {
	return (this->_rawBits);
}

void	Fixed::setRawBits(int const raw) {
	this->_rawBits = raw;
}























