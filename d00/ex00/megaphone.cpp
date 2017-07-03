/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsmith <zsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 11:23:47 by zsmith            #+#    #+#             */
/*   Updated: 2017/07/03 14:40:49 by zsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(int ac, char **av) {
	char	*word;
	int		i;
	int		j;

	if (ac < 2) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE * " << std::endl;
		return (0);
	}
	i = 1;
	while (i < ac) {
		word = av[i];
		j = 0;
		while (word[j] != '\0') {
			std::cout << (char)std::toupper(word[j]);
			j++;
		}
		i++;
	}
	std::cout << std::endl;
	return (0);
}