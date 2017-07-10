#include <Bureaucrat.hpp>
#include <iostream>
#include <string>
#include <ostream>

Bureaucrat::Bureaucrat(std::string name, int grade) {
	checkException(grade);
	this->_grade = grade;
	this->_name = name;
}

Bureaucrat::Bureaucrat(Bureaucrat & src) {
	src = *this;
}

Bureaucrat::~Bureaucrat() {
	return ;
}

Bureaucrat &	Bureaucrat::operator=(Bureaucrat const & rhs) {
	if (this != &rhs) {
		this->_name = rhs._name;
		this->_grade = rhs._grade;
	}
	return (*this);
}

std::ostream &	Bureaucrat::operator<<(std::ostream & os) {
	os << "Bureaucrat name: " << this->_name << "; ";
	os << "grade: " << this->_grade << std::endl;
	return (os);
}

std::string		Bureaucrat::getName() {
	return (this->_name);
}

int				Bureaucrat::getGrade() {
	return (this->_grade);
}

void			Bureaucrat::incrementGrade() {
	checkException(this->_grade - 1);
	this->_grade--;
}

void			Bureaucrat::decrementGrade() {
	checkException(this->_grade + 1);
	this->_grade++;
}

void			Bureaucrat::checkException(int grade) {
	if (grade < 1)
		throw Bureaucrat::GradeTooLowException();
	if (grade > 150)
		throw Bureaucrat::GradeTooHighException();
}




























