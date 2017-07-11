#ifndef FORM_H
# define FORM_H

#include <string>
#include <iostream>
#include <ostream>

class Bureaucrat;

class Form {
	public:
		Form(std::string name);
		Form(Form const & src);
		~Form(void);

		// overload
		Form & operator=(Form const & src);
		std::ostream & operator<<(std::ostream & os);

		// getters
		std::string getName();
		bool getSigned();
		int getGradeToSign();
		int getGradeToExe();

		// setters
		void setSigned();
		void beSigned(Bureaucrat & person);

	private:
		const std::string _name;
		bool _signed;
		const int _gradeToSign;
		const int _gradeToExe;


};

#endif