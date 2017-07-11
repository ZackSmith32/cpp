 #ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <exception>
#include <iostream>
#include <string>

class Form;

class Bureaucrat {

	public:
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat & src);
		~Bureaucrat();

		Bureaucrat &	operator=(Bureaucrat const & rhs);
		std::ostream & 	operator<<(std::ostream & os);

		std::string 	getName();
		int			 	getGrade();
		void			incrementGrade();
		void			decrementGrade();
		void			checkException(int grade);
		void			signedForm(Form & form);

		class GradeTooHighException : public std::exception {
			public:
				virtual const char * what() const throw() {
					return ("Grade to High");
				}
		};

		class GradeTooLowException : public std::exception {
			public:
				virtual const char * what() const throw() {
					return ("Grade to Low");
				}
		};

	private:
		int				_grade;
		std::string 	_name;
};

#endif