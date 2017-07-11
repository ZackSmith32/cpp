#include <string>
#include <Form.hpp>
#include <Bureaucrat.hpp>

Form::Form(std::string name, int gradeToSign, int gradeToExe) :
	_name(name), _signed(false), 
	_gradeToSign(gradeToSign), _gradeToExe(gradeToExe) {
	if (gradeToExe > 150 || gradeToSign > 150) {
		throw Form::BadInput();
	}
	if (gradeToExe < 1 || gradeToSign < 1) {
		throw Form::BadInput();
	}
	return ;
}

Form::Form(Form & src) :
	_name(src.getName()), _signed(src.getSigned()), _gradeToSign(src.getGradeToSign()),
		_gradeToExe(src.getGradeToExe()) {
}

Form::~Form() {
	return ;
}

Form & 	Form::operator=(Form const & src) {
	if (this != &src) {
		this->setSigned(src.getSigned());
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

std::string Form::getName() const {
	return (this->_name);
}

bool Form::getSigned() const {
	return (this->_signed);
}

int Form::getGradeToSign() const {
	return (this->_gradeToSign);
}

int  Form::getGradeToExe() const {
	return (_gradeToExe);
}

void Form::setSigned(bool a) {
	_signed = a;
}

void Form::beSigned(Bureaucrat & person) {
	if (person.getGrade() > getGradeToSign()) {
		person.signedForm(*this);
		throw GradeTooLowException();
	}
	else {
		setSigned(true);
		person.signedForm(*this);
	}
}
































