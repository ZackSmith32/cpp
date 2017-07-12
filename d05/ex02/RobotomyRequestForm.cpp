# include <RobotomyRequestForm.hpp>
# include <Bureaucrat.hpp>
# include <Form.hpp>
# include <ctime>
# include <cstdlib>
# include <iostream>
# include <ostream>
# include <string>


RobotomyRequestForm::RobotomyRequestForm(std::string target) : 
			Form("RobotomyRequestForm", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm & src) : 
			Form("RobotomyRequestForm", src.getGradeToSign(), src.getGradeToExe()),
			_target(src.getTarget()) {
	*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm() {};

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm & src) {
	if (this != &src)
		this->setSigned(src.getSigned());
	return (*this);
}

std::string	RobotomyRequestForm::getTarget() const {
	return (_target);
}

void	RobotomyRequestForm::robo() const {
	srand((int)time(0));
	if (rand() % 100 > 49) {
		std::cout << "beeb bood dee pleep plooop" << std::endl;
	}
	else {
		std::cout << "Robotomy operation was unsuccessful :/" << std::endl;
	}
}

void 		RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	int grade = executor.getGrade();

	if (grade > this->getGradeToExe()|| !getSigned()) {
		throw Form::GradeTooLowException();
	}
	else {
		std::cout << executor.getName() << " has executed " << getTarget() << std::endl;
		robo();
	}

}