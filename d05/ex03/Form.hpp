#ifndef FORM_H
# define FORM_H

#include <string>
#include <iostream>
#include <ostream>

class Bureaucrat;

class Form {
	public:
		Form(std::string name, int gradeToSign, int gradeToExe);
		Form(Form const & src);
		~Form(void);

		// overload
		Form & operator=(Form const & src);

		// getters
		std::string getName() const;
		bool getSigned() const;
		int getGradeToSign() const;
		int getGradeToExe() const;

		// setters
		void setSigned(bool a);

		// other
		void beSigned(Bureaucrat & person);
		virtual void execute(Bureaucrat const & executor) const = 0;

		class GradeTooHighException : public std::exception {
			public:
				virtual const char * what() const throw() {
					return ("Form::Grade to High");
				}
		};

		class GradeTooLowException : public std::exception {
			public:
				virtual const char * what() const throw() {
					return ("Form::Grade to Low");
				}
		};

		class BadInput : public std::exception {
			public:
				virtual const char * what() const throw() {
					return ("Form::BadInput");
				}
		};

	private:
		const std::string _name;
		bool _signed;
		const int _gradeToSign;
		const int _gradeToExe;


};

std::ostream & operator<<(std::ostream & rhs, Form const & lhs);


#endif