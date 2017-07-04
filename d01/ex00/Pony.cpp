/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsmith <zsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 10:33:49 by zsmith            #+#    #+#             */
/*   Updated: 2017/07/04 10:59:29 by zsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <string>
#include <iostream>

Pony::Pony(std::string arg) : _name(arg) {
	std::cout << "pony created " << this->_name << std::endl;
}

Pony::~Pony(void) {
	std::cout << "pony destroyed " << this->_name << std::endl;
}