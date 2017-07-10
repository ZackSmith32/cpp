/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsmith <zsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 12:04:02 by zsmith            #+#    #+#             */
/*   Updated: 2017/07/07 13:53:58 by zsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include <string>
#include <iostream>

class FragTrap {
	
	public:

		FragTrap(std::string name);
		FragTrap(FragTrap const & src);
		~FragTrap(void);
		FragTrap &	operator=(FragTrap const & src);
		std::string	getName(void);

		void		rangedAttack(std::string const & target);
		void		meleeAttack(std::string const & target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		void		vaulthunter_dot_exe(std::string const & target);


		static unsigned int		maxHitPoints;
		static unsigned int		maxEnergyPoints;
		int				hitPoints;
		int				energyPoints;
		int				level;
		std::string		name;
		int				meleeAttackDamage;
		int				rangedAttackDamage;
		int				armorDamageReduction;

	private:


};

#endif