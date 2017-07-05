/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsmith <zsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 12:39:18 by zsmith            #+#    #+#             */
/*   Updated: 2017/07/04 19:04:24 by zsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iomanip>
#include <iostream>
#include <string>

Zombie::Zombie(void) {
	return ;
}

Zombie::~Zombie(void) {
	std::cout << std::setw(10);
	std::cout << this->_name;
	std::cout << " is dead" << std::endl;
	return ;
}

void	Zombie::setParams(std::string name, std::string type) {
	this->_name = name;
	this->_type = type;
	return ;
}

void	Zombie::announce(void) const {
	std::cout << std::setw(10);
	std::cout << this->_name ;
	std::cout << " of type " << this->_type 
				<< " kaboooooom" << std::endl;
}