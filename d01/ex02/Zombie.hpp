/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsmith <zsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 12:39:29 by zsmith            #+#    #+#             */
/*   Updated: 2017/07/04 14:47:13 by zsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <string>

class Zombie
{
public:
	Zombie(std::string name, std::string type);
	~Zombie(void);

	void			announce(void) const;

private:
	std::string		_type;
	std::string		_name;
	
};

#endif