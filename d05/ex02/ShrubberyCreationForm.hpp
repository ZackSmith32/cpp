#ifndef SHRUBBERY_CREATION_FORM
# define SHRUBBERY_CREATION_FORM

# include <Form.hpp>
# include <string>
# include <iostream>
# include <ostream>

class ShrubberyCreationForm : public Form {
	public:
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm & src);
		~ShrubberyCreationForm();

		ShrubberyCreationForm &	operator=(ShrubberyCreationForm & rhs);

		std::string 	getTarget() const;
		void 			execute(Bureaucrat const & executor) const;
	private:
		std::string _target;
	
		void			trees() const;
};

#endif