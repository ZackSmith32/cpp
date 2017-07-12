#ifndef PRESIDENTIAL_PARDON_FORM_H
# define PRESIDENTIAL_PARDON_FORM_H

# include <string>
# include <iostream>
# include <ostream>

# include <Form.hpp>
# include <string>
# include <iostream>
# include <ostream>

class PresidentialPardonForm : public Form {
	public:
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm & src);
		~PresidentialPardonForm();

		PresidentialPardonForm &	operator=(PresidentialPardonForm & rhs);

		std::string 			getTarget() const;
		void 					execute(Bureaucrat const & executor) const;
	
	private:
		void					pardon() const;
		std::string 			_target;
	
};

#endif