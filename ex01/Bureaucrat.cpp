#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string new_name, const unsigned int new_grade): _name(new_name),_grade(new_grade)
{
	if(new_grade < 1)
		throw GradeTooHighException();
	if(new_grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::~Bureaucrat(){};

Bureaucrat::Bureaucrat(const Bureaucrat &other): _name(other.getName()), _grade(other.getGrade()){}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other)
{
	if(this != &other)
		this->_grade = other.getGrade();
	return *this;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat &user)
{
	os << user.getName() << ", Bureaucrat grade " << user.getGrade() << "." << std::endl;
	return os;
}

std::string Bureaucrat::getName() const
{
	 return _name;
}

unsigned int Bureaucrat::getGrade() const
{
	return _grade;
}

void	Bureaucrat::increment()
{
	if(this->getGrade() == 1)
		throw GradeTooHighException();
	_grade -= 1;
}


void	Bureaucrat::decrement()
{
	if(this->getGrade() == 150)
		throw GradeTooLowException();
	_grade += 1;
}

void	Bureaucrat::signForm(Form &f) const
{
	try
	{
		f.beSigned(*this);
		std::cout << getName() << " signed " << f.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << getName() << " couldn't sign " << f.getName() << " because " << e.what() << std::endl;
	}
	
}