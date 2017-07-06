/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsmith <zsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 16:35:02 by zsmith            #+#    #+#             */
/*   Updated: 2017/07/05 20:24:46 by zsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB {

public:
	HumanB(std::string name);
	void		setWeapon(Weapon &weapon);
	void		attack(void);

private:
	std::string	_name;
	Weapon*		_weapon;
};

#endif