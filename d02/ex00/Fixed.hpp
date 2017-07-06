/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsmith <zsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 09:57:52 by zsmith            #+#    #+#             */
/*   Updated: 2017/07/06 10:58:51 by zsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <string>
#include <iostream>

class Fixed {

public:
	Fixed(void);
	Fixed(Fixed const & src);
	~Fixed(void);

	Fixed &	operator=(Fixed const & rhs);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);

private:
	int		_rawBits;

};

#endif