/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsmith <zsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 13:17:30 by zsmith            #+#    #+#             */
/*   Updated: 2017/07/04 15:27:16 by zsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_H
# define ZOMBIEEVENT_H

#include <string>
#include <Zombie.hpp>

class ZombieEvent
{
public:
	ZombieEvent(void);
	~ZombieEvent(void);
	void			setZombieType(std::string type);
	void			randomChump(void);
	Zombie*			newZombie(std::string name);
private:
	std::string		_zombieType;
};
#endif