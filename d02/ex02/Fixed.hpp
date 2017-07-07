/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsmith <zsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 09:57:52 by zsmith            #+#    #+#             */
/*   Updated: 2017/07/06 18:30:05 by zsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <string>
#include <iostream>
#include <ostream>

class Fixed {

public:
	Fixed(void);
	Fixed(int const n);
	Fixed(float const n);
	Fixed(Fixed const & src);
	~Fixed(void);

	Fixed &		operator=(Fixed const & rhs);
	bool		operator<(Fixed const & rhs) const;
	bool		operator>(Fixed const & rhs);
	bool		operator<=(Fixed const & rhs);
	bool		operator>=(Fixed const & rhs);
	bool		operator==(Fixed const & rhs);
	bool		operator!=(Fixed const & rhs);
	Fixed		operator+(Fixed const & rhs);
	Fixed		operator-(Fixed const & rhs);
	Fixed		operator*(Fixed const & rhs);
	Fixed		operator/(Fixed const & rhs);
	Fixed		operator++(int);
	Fixed&		operator++();
	Fixed		operator--(int);
	Fixed&		operator--();
	static Fixed&		min(Fixed & l, Fixed & r);
	static Fixed&		max(Fixed & l, Fixed & r);


	int			getRawBits(void) const;
	void		setRawBits(int const raw);
	float		toFloat(void) const;
	int			toInt(void) const;

private:
	int		_rawBits;
	static int const bits = 8;

};


std::ostream &	operator<<(std::ostream& str, Fixed const & i);


#endif