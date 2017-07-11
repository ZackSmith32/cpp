#include <string>
#include <Form.hpp>
#include <Bureaucrat.hpp>

Form::Form(std::string name) :
	_name(name), _signed(false), _gradeToSign(50), _gradeToExe(1) {
	return ;
}

Form::Form(Form const & src) :
	_name(src._name), _signed(false), _gradeToSign(50), _gradeToExe(1) {
	*this = src;
}

Form::~Form() {
	return ;
}

Form & 	Form::operator=(Form const & src) {
	if (this != &src) {
		this->_signed = src._signed;
	}
	return (*this);
}

std::ostream &	Form::operator<<(std::ostream & os) {
	os << "Form name: " << this->getName() << std::endl;
	os << "Signed: " << this->getSigned() << std::endl;
	os << "Grade to sign = " << this->getGradeToSign() << std::endl;
	os << "Grade to execute = " << this->getGradeToExe() << std::endl;
	return (os);
}

std::string Form::getName() {
	return (this->_name);
}

bool Form::getSigned() {
	return (this->_signed);
}

int Form::getGradeToSign() {
	return (this->_gradeToSign);
}

int  Form::getGradeToExe() {
	return (_gradeToExe);
}

void Form::setSigned() {
	_signed = true;
}

void Form::beSigned(Bureaucrat & person) {
	if (person.getGrade() > getGradeToSign()) {
		person.signedForm(*this);
		throw Bureaucrat::GradeTooLowException();
	}
	else {
		setSigned();
		person.signedForm(*this);
	}
}
































