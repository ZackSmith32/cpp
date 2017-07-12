#include <Bureaucrat.hpp>
#include <Form.hpp>
#include <iostream>
#include <ostream>
#include <string>

int main(void) {

	Bureaucrat me("me", 60);
	Bureaucrat you("you", 1);
	Form doc("Doc", 100, 99);
	Form contract("contract", 2, 20);

	std::cout << std::endl << doc << std::endl;

	try {
		doc.beSigned(me);
	}
	catch (std::exception & e) {
		std::cout << "EXCEPTION " <<  e.what() << std::endl;
	}
	std::cout << std::endl << doc << std::endl;

	std::cout << std::endl;
	std::cout << "test2" << std::endl;
	try {
		for (int i = 0; i < 60; i++) {
			me.decrementGrade();
		}
		contract.beSigned(me);
	}
	catch (std::exception & e) {
		std::cout << "EXCEPTION " <<  e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "test3" << std::endl;
	for (int i = 0; i < 20; i++) {
		me.decrementGrade();
	}
	try {
		contract.beSigned(me);
	}
	catch (std::exception & e) {
		std::cout << "EXCEPTION " <<  e.what() << std::endl;
	}


	std::cout << std::endl << contract << std::endl;
	return (0);
}
