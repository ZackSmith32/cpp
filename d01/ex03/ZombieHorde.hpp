/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsmith <zsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 17:51:56 by zsmith            #+#    #+#             */
/*   Updated: 2017/07/04 18:34:37 by zsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <Zombie.hpp>

class ZombieHorde {
public:
	ZombieHorde(int n);
	~ZombieHorde(void);
	Zombie* horde;
};