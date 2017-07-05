/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsmith <zsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 12:39:29 by zsmith            #+#    #+#             */
/*   Updated: 2017/07/04 18:11:46 by zsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <string>

class Zombie
{
public:
	Zombie(void);
	~Zombie(void);

	void			setParams(std::string name, std::string type);
	void			announce(void) const;

private:
	std::string		_type;
	std::string		_name;
	
};

#endif