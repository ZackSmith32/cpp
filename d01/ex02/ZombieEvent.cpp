/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsmith <zsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 12:40:39 by zsmith            #+#    #+#             */
/*   Updated: 2017/07/04 15:51:01 by zsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h> 
#include "ZombieEvent.hpp"
#include "Zombie.hpp"

ZombieEvent::ZombieEvent(void) {
	return ;
}

ZombieEvent::~ZombieEvent(void) {
	return ;
}

void	ZombieEvent::setZombieType(std::string type) {
	this->_zombieType = type;
	return ;
}

Zombie*	ZombieEvent::newZombie(std::string name) {
	Zombie*		newnew = new Zombie(name, this->_zombieType);

	return (newnew);
}

void	ZombieEvent::randomChump(void) {
	int			len;
	std::string randName;

	srand(time(NULL));
	len = rand() % 8 + 3;
	std::string static const alphanum =
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";

    for (int i = 0; i < len; i++) {
        randName += alphanum[std::rand() % (62 - 1)];
    }
    Zombie rando(randName, this->_zombieType);
    rando.announce();
}