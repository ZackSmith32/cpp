/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsmith <zsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 15:21:43 by zsmith            #+#    #+#             */
/*   Updated: 2017/07/05 16:27:23 by zsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <sstream>
#include "Brain.hpp"

Brain::Brain(void) {
	std::stringstream hex;

	hex << this;
	this->addr = hex.str();
	return ;
}

std::string	Brain::identify(void) const {
	return (this->addr);
}