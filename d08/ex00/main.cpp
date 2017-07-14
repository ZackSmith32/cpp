#include <iostream>
#include <string>
#include <list>
#include <easyfind.hpp>

int		main() {
	std::list<int>					lst;
	std::list<int>::const_iterator	a;

	lst.push_back(42);
	lst.push_back(15);
	lst.push_back(2);
	lst.push_back(23);
	lst.push_back(60);

	a = easyfind(lst, 60);
	std::cout << *a << std::endl;

	return (0);
}