#include <Bureaucrat.hpp>
#include <iostream>
#include <ostream>
#include <string>

int main(void) {

	try {
		Bureaucrat ("me", 160);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	Bureaucrat dude("dude", 1);
	try {
		dude.incrementGrade();
	} 
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << dude << std::endl;
}
