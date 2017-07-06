/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsmith <zsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 15:21:43 by zsmith            #+#    #+#             */
/*   Updated: 2017/07/05 20:38:19 by zsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

#include <string>
#include <sstream>

class Brain {
public:
	Brain(void);
	std::string addr;
	std::string identify(void) const;
};

#endif