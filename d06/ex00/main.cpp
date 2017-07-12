#include <string>
#include <iostream>
#include <sstream>

int		main(int ac, char *av[]) {
	std::string		str;
	float			f;
	int				i;
	double			d;

	if (ac != 2) {
		std::cout << "bad paramaters" << std::endl;
		return (0);
	}

	std::stringstream ss(av[1]);
	ss >> f;
	ss >> i;
	ss >> d;
	// try {
	// 	f = static_cast<float>(ss);
	// 	// f = 15.34;
	// } 
	// catch (...) {
	// 	std::cout << "catch" << std::endl;
	// }
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << f << std::endl;
	std::cout << "double: " << d << std::endl;

	return (0);
}