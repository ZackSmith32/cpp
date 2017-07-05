/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsmith <zsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 15:21:50 by zsmith            #+#    #+#             */
/*   Updated: 2017/07/05 16:08:46 by zsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Human.hpp"

Human::Human(void) : brain() {
	return ;
}

std::string Human::identify(void) const {
	return (this->brain.identify());
}

Brain		Human::getBrain(void) const {
	return (this->brain);
}
