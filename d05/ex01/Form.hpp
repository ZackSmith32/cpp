#ifndef FORM_H
# define FORM_H

#include <string>
#include <iostream>
#include <ostream>

class Bureaucrat;

class Form {
	public:
		Form(std::string name, int gradeToSign, int gradeToExe);
		Form(Form & src);
		~Form(void);

		// overload
		Form & operator=(Form const & src);
		std::ostream & operator<<(std::ostream & os);

		// getters
		std::string getName() const;
		bool getSigned() const;
		int getGradeToSign() const;
		int getGradeToExe() const;

		// setters
		void setSigned(bool a);
		void beSigned(Bureaucrat & person);

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

#endif