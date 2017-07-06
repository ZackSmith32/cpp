/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsmith <zsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 16:35:02 by zsmith            #+#    #+#             */
/*   Updated: 2017/07/05 20:03:09 by zsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>
#include <string>

class Weapon {

public:
	Weapon(std::string type);

	const std::string&	getType(void);
	void 				setType(std::string type);

private:
	std::string	_type;

};

#endif