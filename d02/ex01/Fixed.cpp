/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsmith <zsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 09:57:47 by zsmith            #+#    #+#             */
/*   Updated: 2017/07/06 14:10:08 by zsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <ostream>
#include <iostream>
#include <cmath>
#include "Fixed.hpp"

Fixed::Fixed(void) {
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(int const n) {
	this->_rawBits = n << 8;
}

Fixed::Fixed(float const n) : _rawBits( static_cast<int>(roundf(n * pow(2, 8))))
{
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

Fixed &			Fixed::operator=(Fixed const & rhs) {
	std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs)
		this->_rawBits = rhs.getRawBits();
	return (*this);
}

std::ostream&	operator<<(std::ostream &rhs, Fixed const & i) {
	rhs << i.toFloat();
	return (rhs);
}

int		Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_rawBits);
}

void	Fixed::setRawBits(int const raw) {
	this->_rawBits = raw;
}

float	Fixed::toFloat(void) const {
	float	f;
	f = static_cast<float>(this->_rawBits / pow(2, 8));
	return (f);
}

int		Fixed::toInt(void) const {
	return (this->_rawBits >> 8);
}























