/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsmith <zsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 12:04:02 by zsmith            #+#    #+#             */
/*   Updated: 2017/07/07 14:18:35 by zsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <string>
#include <iostream>
#include <ctime>
#include "FragTrap.hpp"

unsigned int		FragTrap::maxHitPoints = 100;
unsigned int		FragTrap::maxEnergyPoints = 100;

FragTrap::FragTrap(std::string name) {
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->level = 1;
	this->name = name;
	this->meleeAttackDamage = 30;
	this->rangedAttackDamage = 20;
	this->armorDamageReduction = 5;

	std::cout << "New FragTrap named: ";
	std::cout << this->name << std::endl;
	std::cout << "hitPoints : " << this->hitPoints;
	std::cout << " energyPoints : " << this->energyPoints;
	std::cout << std::endl;
	return ;
}

FragTrap &	FragTrap::operator=(FragTrap const & src) {
	if (this != &src)
		this->hitPoints = src.hitPoints;
		this->energyPoints = src.energyPoints;
		this->level = src.level;
		this->name = src.name;
		this->meleeAttackDamage = src.meleeAttackDamage;
		this->rangedAttackDamage = src.rangedAttackDamage;
		this->armorDamageReduction = src.armorDamageReduction;

	return (*this);
}

FragTrap::FragTrap(FragTrap const & src) {
	*this = src;

	std::cout << "New duplicate FragTrap named: ";
	std::cout << this->name;
	std::cout << std::endl;
	return ;
}

FragTrap::~FragTrap(void) {
	std::cout << this->name << " has expired" << std::endl;
	return ;
}


std::string		FragTrap::getName(void) {
	return (this->name);
}
void		FragTrap::rangedAttack(std::string const & target) {
	if (this->energyPoints - this->rangedAttackDamage < 0) {
		std::cout << "Not enough energy";
		return ;
	}
	this->energyPoints -= this->rangedAttackDamage;

	std::cout << "FR4G-TP ";
	std::cout << this->getName();
	std::cout << " attacks ";
	std::cout << target;
	std::cout << " at range, causing ";
	std::cout << this->rangedAttackDamage;
	std::cout << " points of damage !";
	std::cout << std::endl;
}

void		FragTrap::meleeAttack(std::string const & target) {
	if (this->energyPoints - this->meleeAttackDamage < 0) {
		std::cout << "Not enough energy";
		return ;
	}
	this->energyPoints -= this->meleeAttackDamage;

	std::cout << "FR4G-TP ";
	std::cout << this->getName();
	std::cout << " attacks ";
	std::cout << target;
	std::cout << " with assasination melee, causing ";
	std::cout << this->meleeAttackDamage;
	std::cout << " points of damage !";
	std::cout << std::endl;
}

void		FragTrap::takeDamage(unsigned int amount) {
	if (this->hitPoints - amount <= 0) {
		this->hitPoints = 0;
	}
	else {
		this->hitPoints -= amount;
	}

	this->hitPoints -= amount;

	std::cout << "FR4G-TP ";
	std::cout << this->getName();
	std::cout << " took ";
	std::cout << amount;
	std::cout << " points of damage !";
	std::cout << std::endl;
	std::cout << this->getName() << "Now has ";
	std::cout << this->hitPoints << " / " << this->maxHitPoints;
	std::cout << " hit points";
	std::cout << std::endl;

}

void		FragTrap::beRepaired(unsigned int amount) {
	if (this->hitPoints + amount < this->maxHitPoints)
		this->hitPoints += amount;
	else
		this->hitPoints = this->maxHitPoints;

	std::cout << "FR4G-TP ";
	std::cout << this->getName();
	std::cout << " regained ";
	std::cout << amount;
	std::cout << " points of damage !";
	std::cout << std::endl;
	std::cout << "Now has";
	std::cout << this->hitPoints << " / " << this->maxHitPoints;
	std::cout << " hit points";
	std::cout << std::endl;

}

void		FragTrap::vaulthunter_dot_exe(std::string const & target) {
	int			attack_index;
	std::string	attacks[5];

	if (this->energyPoints < 25) {
		std::cout << "Not enough energy" << std::endl;
	} else {
		this->energyPoints -= 25;
	}
	srand((int)time(0));
	attack_index = rand() % 5;
	std::cout << "attack_index = " << attack_index << std::endl;
	attacks[0] = "power bomb";
	attacks[1] = "peoples elbow";
	attacks[2] = "tomb stone pile driver";
	attacks[3] = "choke slam";
	attacks[4] = "German suplex";

	std::cout << "FR4G-TP ";
	std::cout << this->getName();
	std::cout << " attacks ";
	std::cout << target;
	std::cout << " " << attacks[attack_index] << " ";
	std::cout << std::endl;
}


























