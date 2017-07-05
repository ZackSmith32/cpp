/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsmith <zsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 15:24:55 by zsmith            #+#    #+#             */
/*   Updated: 2017/07/05 16:08:53 by zsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Brain.hpp"

class Human {

public:
	Brain const brain;
	Human(void);
	std::string identify(void) const;
	Brain getBrain(void) const;

};
