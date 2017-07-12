#ifndef INTERN_H
# define INTERN_H

# include <Form.hpp>
# include <string>
# include <iostream>
# include <ostream>

class Form;

class Intern {
	public:
		Intern();
		Intern(Intern const & src);
		~Intern();

		Intern &	operator=(Intern const & src);
		Form *		makeForm(std::string form, std::string target);

};

#endif