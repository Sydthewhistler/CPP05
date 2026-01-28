#include "AForm.hpp"

AForm::AForm(const std::string new_name, const unsigned int new_ExeGrade, const unsigned int new_SignGrade): _name(new_name), _signed(false), _SignGrade(new_SignGrade), _ExeGrade(new_ExeGrade)
{
	if(new_ExeGrade < 1 || new_SignGrade < 1)
		throw GradeTooHighException();
	if(new_ExeGrade > 150 || new_SignGrade > 150)
		throw GradeTooLowException();
}

AForm::~AForm(){};

AForm::AForm(const AForm &other): _name(other.getName()), _signed(other.isSigned()), _SignGrade(other.getSignGrade()), _ExeGrade(other.getExeGrade()){}

std::ostream& operator<<(std::ostream& os, const AForm &f)
{
	if(f.isSigned())
		os << f.getName() << ", AForm signed\n" << "Grade required to sign it : " << f.getSignGrade() << "\nGrade required to execute it : " << f.getExeGrade() << std::endl;
	else
		os << f.getName() << ", AForm unsigned\n" << "Grade required to sign : " << f.getSignGrade() << "\nGrade required to execute : " << f.getExeGrade() << std::endl;
	return os;
}

std::string AForm::getName() const{return _name;}

bool AForm::isSigned() const{return _signed;}

unsigned int AForm::getSignGrade() const{return _SignGrade;}

unsigned int AForm::getExeGrade() const{return _ExeGrade;}


void	AForm::beSigned(const Bureaucrat& user)
{
	if(user.getGrade() <= _SignGrade)
		_signed = true;
	else
		throw GradeTooLowException();
}

void	AForm::execute(Bureaucrat const &executor) const
{
	if(!isSigned())
		throw FormNotSigned();
	else if(executor.getGrade() > getExeGrade())
		throw GradeTooLowException();
	else
		ExecuteAction();
}