/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsmith <zsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 12:39:42 by zsmith            #+#    #+#             */
/*   Updated: 2017/07/04 15:55:10 by zsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int		main(void) {
	ZombieEvent		ze;

	ze.setZombieType("hyper-active Zombie");
	ze.randomChump();

	Zombie* you = ze.newZombie("you");
	you->announce();
	delete you;

	Zombie*	puppers = new Zombie("puppers", "doggo");
	puppers->announce();
	delete puppers;
	
	Zombie	zack("Zack", "tree");
	zack.announce();




	return (0);
}