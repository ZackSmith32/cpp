/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsmith <zsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 12:39:18 by zsmith            #+#    #+#             */
/*   Updated: 2017/07/04 15:43:46 by zsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie::Zombie(std::string name, std::string type) : 
					_type(type), _name(name) {
	return ;
}

Zombie::~Zombie(void) {
	std::cout << this->_name << " is dead" << std::endl;
	return ;
}

void	Zombie::announce(void) const {
	std::cout << this->_name << " of type " << this->_type 
				<< " pooOOOOoOoOOooooOOooOOoop" << std::endl;
}