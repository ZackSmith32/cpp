/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsmith <zsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 15:16:44 by zsmith            #+#    #+#             */
/*   Updated: 2017/07/03 20:13:10 by zsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pb.hpp"

void		print_person(Person person) {
	std::cout << person.first_name << std::endl;
	std::cout << person.last_name << std::endl;
	std::cout << person.nickname << std::endl;
	std::cout << person.login << std::endl;
	std::cout << person.postal_address << std::endl;
	std::cout << person.email_address << std::endl;
	std::cout << person.phone_number << std::endl;
	std::cout << person.birthday << std::endl;
	std::cout << person.meal << std::endl;
	std::cout << person.underwear << std::endl;
	std::cout << person.secret << std::endl;
}

void		print_attribute(std::string str) {
	std::string		temp;

	temp = str.substr(0, 10);
	if (str.size() > 10) {
		temp.pop_back();
		temp.push_back('.');
	}
	std::cout << std::setw(10);
	std::cout << temp;
}

void		display_contacts(Person *pb, int count) {
	std::string		selection_input;
	int				row_num;				
	int				i;

	i = 0;
	while (i < count) {
		std::cout << i << " : ";
		print_attribute(pb[i].first_name);
		std::cout << "|";
		print_attribute(pb[i].last_name);
		std::cout << "|";
		print_attribute(pb[i].nickname);
		std::cout << std::endl;
		i++;
	}
	while (1) {
		std::cout << "Which row? ";
		std::cin >> row_num;
		if (!std::cin.good() || row_num >= count || row_num < 0) {
			std::cout << std::endl << "Bad Input" << std::endl;
			std::cin.clear();
			std::cin.ignore(INT_MAX, '\n');
		}
		else {
			print_person(pb[row_num]);
			return ;
		}
	}
}

Person	new_person() {
	Person			person;

	std::cout << "What is your first name? ";
	std::getline(std::cin, person.first_name);
	std::cout << "What is your last name? ";
	std::getline(std::cin, person.last_name);
	std::cout << "What is your nickname? ";
	std::getline(std::cin, person.nickname);
	std::cout << "What is your login? ";
	std::getline(std::cin, person.login);
	std::cout << "What is your postal address? ";
	std::getline(std::cin, person.postal_address);
	std::cout << "What is your email aaddress? ";
	std::getline(std::cin, person.email_address);
	std::cout << "What is your phone number? ";
	std::getline(std::cin, person.phone_number);
	std::cout << "What is your birthday date (YYYYMMDD)? ";
	std::getline(std::cin, person.birthday);
	std::cout << "What is your favorite meal? ";
	std::getline(std::cin, person.meal);
	std::cout << "What is your underwear color? ";
	std::getline(std::cin, person.underwear);
	std::cout << "What is your darkest secret? ";
	std::getline(std::cin, person.secret);
	return (person);
}

int		main(void) {
	std::string		buff;
	Person			pb[8];
	int				count;

	count = 0;
	while (1) {
		std::cout << "What command? ";
		std::getline(std::cin, buff);
		if (buff.compare("ADD") == 0) {
			pb[count] = new_person();
			count++;
		}
		else if (buff.compare("SEARCH") == 0) {			
			display_contacts(pb, count);
		}
		else if (buff.compare("EXIT") == 0) {
			return (0);
		}
		else
			continue ;
		std::cin.clear();
		std::cin.ignore(INT_MAX, '\n');
	}
	return (0);
}