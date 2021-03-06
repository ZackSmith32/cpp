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

		std::string 	getName() const;
		int			 	getGrade() const;
		void			incrementGrade();
		void			decrementGrade();
		void			checkException(int grade);
		void			signedForm(Form & form);
		void			executeForm(Form const & form);

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

std::ostream & 	operator<<(std::ostream & rhs, Bureaucrat const & lhs);

#endif