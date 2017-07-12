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

Form::Form(Form const & src) :
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

std::ostream &	operator<<(std::ostream & rhs, Form const & lhs) {
	rhs << "Form name: " << lhs.getName() << std::endl;
	rhs << "Signed: " << lhs.getSigned() << std::endl;
	rhs << "Grade to sign = " << lhs.getGradeToSign() << std::endl;
	rhs << "Grade to execute = " << lhs.getGradeToExe() << std::endl;
	return (rhs);
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
		throw Form::GradeTooLowException();
	}
	else {
		setSigned(true);
		person.signedForm(*this);
	}
}

// need to check params on constructor for exception
// 




























