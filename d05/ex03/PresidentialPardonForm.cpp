# include <PresidentialPardonForm.hpp>
# include <Bureaucrat.hpp>
# include <Form.hpp>
# include <ctime>
# include <cstdlib>
# include <iostream>
# include <ostream>
# include <string>


PresidentialPardonForm::PresidentialPardonForm(std::string target) : 
			Form("PresidentialPardonForm", 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm & src) : 
			Form("PresidentialPardonForm", src.getGradeToSign(), src.getGradeToExe()),
			_target(src.getTarget()) {
	*this = src;
}

PresidentialPardonForm::~PresidentialPardonForm() {};

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm & src) {
	if (this != &src)
		this->setSigned(src.getSigned());
	return (*this);
}

std::string	PresidentialPardonForm::getTarget() const {
	return (_target);
}

void	PresidentialPardonForm::pardon() const {
	std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

void 		PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	int grade = executor.getGrade();

	if (grade > this->getGradeToExe()|| !getSigned()) {
		throw Form::GradeTooLowException();
	}
	else {
		std::cout << executor.getName() << " has executed " << getTarget() << std::endl;
		pardon();
	}

}