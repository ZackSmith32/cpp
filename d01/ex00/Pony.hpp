/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsmith <zsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 10:33:53 by zsmith            #+#    #+#             */
/*   Updated: 2017/07/04 11:47:17 by zsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_H
# define PONY_H

#include <string>

class Pony
{
public:
	std::string countryOfOrigin;
	Pony(std::string name);
	~Pony(void);
private:
	std::string	_name;
};

#endif