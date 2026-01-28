#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string new_target): AForm("PresidentialPardonForm", 5, 25), _target(new_target){}

PresidentialPardonForm::~PresidentialPardonForm(){}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &t): AForm(t), _target(t.getTarget()){}

std::string PresidentialPardonForm::getTarget() const {return _target;}

void PresidentialPardonForm::ExecuteAction() const
{
	std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

