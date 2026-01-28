#ifndef AFORM_HPP
#define AFORM_HPP
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{

	public:
		class GradeTooHighException : public std::exception { public: const char* what() const throw() { return "Grade too high"; } };
		class GradeTooLowException  : public std::exception { public: const char* what() const throw() { return "Grade too low"; } };
		class FormNotSigned  : public std::exception { public: const char* what() const throw() { return "Form not executable : not signed"; } };

		AForm(const std::string new_name, const unsigned int new_ExeGrade, const unsigned int new_SignGrade);
		virtual ~AForm();
		AForm(const AForm &other);
		std::string getName() const;
		bool isSigned() const;
		unsigned int getSignGrade() const;
		unsigned int getExeGrade() const;
		void	beSigned(const Bureaucrat& user);
		void execute(Bureaucrat const &executor) const;



	private :
		const std::string _name;
		bool _signed;
		const unsigned int _SignGrade;
		const unsigned int _ExeGrade;
	
	protected :
		virtual void ExecuteAction() const = 0;


};

std::ostream& operator<<(std::ostream& os, const AForm &user);



#endif