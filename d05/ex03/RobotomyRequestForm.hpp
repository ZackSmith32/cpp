#ifndef ROBOTOMY_REQUEST_FORM
# define ROBOTOMY_REQUEST_FORM

# include <Form.hpp>
# include <string>
# include <iostream>
# include <ostream>

class RobotomyRequestForm : public Form {
	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm & src);
		~RobotomyRequestForm();

		RobotomyRequestForm &	operator=(RobotomyRequestForm & rhs);

		std::string 			getTarget() const;
		void 					execute(Bureaucrat const & executor) const;
	
	private:
		void					robo() const;
		std::string 			_target;
	
};

#endif