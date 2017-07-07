/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsmith <zsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 12:04:02 by zsmith            #+#    #+#             */
/*   Updated: 2017/07/07 14:19:24 by zsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib> // for random
#include <ctime> // for getting time to seed random
#include "FragTrap.hpp"

int		main(void) {
	FragTrap	trapA("A");
	FragTrap	*trapB = new FragTrap("bambi");
	FragTrap	trapC = FragTrap("Mogenboo");

	trapA = trapC;
	srand((int)time(0));
	std::cout << std::endl;
	trapA.rangedAttack("innocent bystander");

	std::cout << std::endl;
	trapB->meleeAttack("Mogenboo");

	std::cout << std::endl;
	trapA.takeDamage(30);

	std::cout << std::endl;
	trapA.vaulthunter_dot_exe(trapB->getName());
	trapB->takeDamage(rand() % 100);

	std::cout << std::endl;
	delete trapB;
	return (0);
}