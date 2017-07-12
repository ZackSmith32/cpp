#include <Intern.hpp>
#include <Form.hpp>
#include <ShrubberyCreationForm.hpp>
#include <RobotomyRequestForm.hpp>
#include <PresidentialPardonForm.hpp>
#include <string>
#include <iostream>

Intern::Intern() {}

Intern::Intern(Intern const & src) {
	*this = src;
}

Intern::~Intern() {}

Intern &	Intern::operator=(Intern const & src) {
	if (this == &src)
		return (*this);
	return (*this);
}

Form *	Intern::makeForm(std::string form, std::string target) {
	if (form == "ShrubberyCreationForm") {
		std::cout << "Intern creates ShrubberyCreationForm" << std::endl;
		return (new ShrubberyCreationForm(target));
	}
	else if (form == "RobotomyRequestForm") {
		std::cout << "Intern creates RobotomyRequestForm" << std::endl;
		return (new RobotomyRequestForm(target));
	}
	else if (form == "PresidentialPardonForm") {
		std::cout << "Intern creates PresidentialPardonForm" << std::endl;
		return (new PresidentialPardonForm(target));
	}
	std::cout << "That ain't a form dum dum" << std::endl;
	return (0);
}