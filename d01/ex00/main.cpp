/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsmith <zsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 10:33:58 by zsmith            #+#    #+#             */
/*   Updated: 2017/07/04 11:52:54 by zsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

void	ponyOnTheHeap(void) {
	// create reference : heap
	Pony*	shanniah = new Pony("shnniah");
	shanniah->countryOfOrigin = "Magrathea";
	std::cout << "Country of Origin : " << 
		shanniah->countryOfOrigin << std::endl;
	delete	shanniah;
}

void	ponyOnTheStack(void) {
	// static alloction : stack
	Pony	jeremy("jeremy");
	jeremy.countryOfOrigin = "Florida";
	std::cout << "Country of Origin : " << 
		jeremy.countryOfOrigin << std::endl;
}

int		main(void) {
	ponyOnTheHeap();
	ponyOnTheStack();
	return (0);
}

// clang++ -Wall -Werror -Wextra Pony.cpp main.cpp -I Pony.hpp