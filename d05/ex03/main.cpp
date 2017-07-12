#include <Bureaucrat.hpp>
#include <Form.hpp>
#include <ShrubberyCreationForm.hpp>
#include <RobotomyRequestForm.hpp>
#include <PresidentialPardonForm.hpp>
#include <Intern.hpp>
#include <iostream>
#include <ostream>
#include <string>

int main(void) {
	ShrubberyCreationForm 	palm("cali");
	RobotomyRequestForm		rosie("rosie");
	PresidentialPardonForm	fucker("shit brain");
	Bureaucrat				dude("dude", 30);
	Bureaucrat				boss("boss", 3);
	Bureaucrat				chump("boss", 150);


	try {
		palm.execute(dude);	
	}
	catch (std::exception &e) {
		std::cout << "EXCEPTION: " << e.what() << std::endl;
	}

	std::cout << std::endl << "test2" << std::endl;	
	try {
		palm.execute(boss);	
	}
	catch (std::exception &e) {
		std::cout << "EXCEPTION: " << e.what() << std::endl;
	}

	std::cout << std::endl << "test3 Bureaucrat.executeForm()" << std::endl;	
	try {
		boss.executeForm(palm);	
	}
	catch (std::exception &e) {
		std::cout << "EXCEPTION: " << e.what() << std::endl;
	}

	std::cout << std::endl << "test4 Bureaucrat.executeForm() (fail)" << std::endl;	
	try {
		dude.executeForm(palm);	
	}
	catch (std::exception &e) {
		std::cout << "EXCEPTION: " << e.what() << std::endl;
	}

	std::cout << std::endl << "test5 RobotomyRequestForm.execute() (fail)" << std::endl;	
	try {
		rosie.execute(chump);
	}
	catch (std::exception &e) {
		std::cout << "EXCEPTION: " << e.what() << std::endl;
	}

	std::cout << std::endl << "test6 RobotomyRequestForm.execute() (success)" << std::endl;	
	try {
		rosie.execute(boss);
	}
	catch (std::exception &e) {
		std::cout << "EXCEPTION: " << e.what() << std::endl;
	}

	std::cout << std::endl << "test7  (fail)" << std::endl;	
	try {
		rosie.execute(chump);
	}
	catch (std::exception &e) {
		std::cout << "EXCEPTION: " << e.what() << std::endl;
	}

	std::cout << std::endl << "test8 PresidentialPardonForm.execute() (success)" << std::endl;	
	try {
		fucker.execute(boss);
	}
	catch (std::exception &e) {
		std::cout << "EXCEPTION: " << e.what() << std::endl;
	}

	Intern someRandomIntern;
	Form* rrf;	
	std::cout << std::endl << "test9 Intern.makeForm() (fail)" << std::endl;	
	try {
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	}
	catch (std::exception & e) {
		std::cout << "EXCEPTION: " << e.what() << std::endl;		
	}

	std::cout << std::endl << "test10 Intern.makeForm() (success)" << std::endl;	
	try {
		rrf = someRandomIntern.makeForm("RobotomyRequestForm", "Bender");
	}
	catch (std::exception & e) {
		std::cout << "EXCEPTION: " << e.what() << std::endl;		
	}

	std::cout << std::endl << "test11 form from intern, sign with boss (success)" << std::endl;	
	try {
		rrf->execute(boss);
	}
	catch (std::exception & e) {
		std::cout << "EXCEPTION: " << e.what() << std::endl;		
	}
			


			
	return (0); 	
}


// test if Class ex(Class first) works correctly;
// espescially with signed