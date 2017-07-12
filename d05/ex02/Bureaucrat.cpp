#include <Bureaucrat.hpp>
#include <Form.hpp>
#include <iostream>
#include <string>
#include <ostream>

Bureaucrat::Bureaucrat(std::string name, int grade) {
	checkException(grade);
	this->_grade = grade;
	this->_name = name;
}

Bureaucrat::Bureaucrat(Bureaucrat & src) {
	*this = src;
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

std::ostream &	operator<<(std::ostream & rhs, Bureaucrat const & lhs) {
	rhs << "Bureaucrat name: " << lhs.getName() << "; ";
	rhs << "grade: " << lhs.getGrade();
	return (rhs);
}

std::string		Bureaucrat::getName() const {
	return (this->_name);
}

int				Bureaucrat::getGrade() const {
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

void			Bureaucrat::signedForm(Form & form) {
	if (getGrade() <= form.getGradeToSign()) {
		form.setSigned(true);
		std::cout << getName() << " signs " << form.getName() << std::endl;
	}
	else {
		std::cout << getName() << " cannot sign " << form.getName() << " because ";
		std::cout << "he/she is grade: " << getGrade();
		std::cout << " and needs to be grade: " << form.getGradeToSign();
		std::cout << std::endl;
	}
}

void			Bureaucrat::executeForm(Form const & form) {
	if (getGrade() <= form.getGradeToExe()) {
		std::cout << getName() << " executes " << form.getName() << std::endl;
	}
	else {
		std::cout << getName() << " not pro enough to execute " << form.getName() << std::endl;
	}
}

























