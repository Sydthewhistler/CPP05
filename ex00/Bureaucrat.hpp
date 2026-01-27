#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <string>


class Bureaucrat
{

	public:
		class GradeTooHighException : public std::exception { public: const char* what() const throw() { return "Grade too high"; } };
		class GradeTooLowException  : public std::exception { public: const char* what() const throw() { return "Grade too low"; } };

		Bureaucrat(const std::string new_name, const unsigned int new_grade);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat &other);
		Bureaucrat& operator=(const Bureaucrat &other);
		std::string getName() const;
		unsigned int getGrade() const;
		void	increment();
		void	decrement();


	private :
		const std::string _name;
		unsigned int _grade;


};

std::ostream& operator<<(std::ostream& os, const Bureaucrat &user);



#endif