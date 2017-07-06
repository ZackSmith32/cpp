/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsmith <zsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 16:35:02 by zsmith            #+#    #+#             */
/*   Updated: 2017/07/05 20:07:11 by zsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : 
			_name(name), _weapon(weapon) {
	return ;
}

void	HumanA::attack(void) {
	std::cout << this->_name << " attacks with ";
	std::cout << this->_weapon.getType() << std::endl;
}