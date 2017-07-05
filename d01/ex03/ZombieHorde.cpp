/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsmith <zsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 17:51:50 by zsmith            #+#    #+#             */
/*   Updated: 2017/07/04 19:02:59 by zsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n) {
	int			len;
	std::string randName;

	this->horde = new Zombie[n];
	srand(time(NULL));
	std::string static const alphanum =
		"0123456789"
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		"abcdefghijklmnopqrstuvwxyz";
	for (int j = 0; j < n; j++) {
		len = rand() % 8 + 3;
		for (int i = 0; i < len; i++) {
			randName += alphanum[std::rand() % (62 - 1)];
		}
		this->horde[j].setParams(randName, "rando");
		this->horde[j].announce();
		randName.erase(randName.begin(), randName.end());
	}
	std::cout << std::endl;
}	

ZombieHorde::~ZombieHorde(void) {
	std::cout << "Deleting Zombies" << std::endl;
	delete [] this->horde;
}






