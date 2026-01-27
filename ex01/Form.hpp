#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{

	public:
		class GradeTooHighException : public std::exception { public: const char* what() const throw() { return "Grade too high"; } };
		class GradeTooLowException  : public std::exception { public: const char* what() const throw() { return "Grade too low"; } };

		Form(const std::string new_name, const unsigned int new_ExeGrade, const unsigned int new_SignGrade);
		~Form();
		Form(const Form &other);
		std::string getName() const;
		bool isSigned() const;
		unsigned int getSignGrade() const;
		unsigned int getExeGrade() const;
		void	beSigned(const Bureaucrat& user);


	private :
		const std::string _name;
		bool _signed;
		const unsigned int _SignGrade;
		const unsigned int _ExeGrade;


};

std::ostream& operator<<(std::ostream& os, const Form &user);



#endif