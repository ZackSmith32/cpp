/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsmith <zsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 17:51:56 by zsmith            #+#    #+#             */
/*   Updated: 2017/07/05 20:40:53 by zsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_H
# define ZOMBIEHORDE_H

#include <string>
#include <iostream>
#include <Zombie.hpp>

class ZombieHorde {
public:
	ZombieHorde(int n);
	~ZombieHorde(void);
	Zombie* horde;
};

#endif