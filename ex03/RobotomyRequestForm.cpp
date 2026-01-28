#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string new_target): AForm("RobotomyRequestForm", 45, 72), _target(new_target){}

RobotomyRequestForm::~RobotomyRequestForm(){}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &t): AForm(t), _target(t.getTarget()){}

std::string RobotomyRequestForm::getTarget() const {return _target;}

void RobotomyRequestForm::ExecuteAction() const
{
	std::srand(std::time(NULL));
	std::cout << "BrrrrrrrTTTrrtRrtTTrrTTr" << std::endl;
	if(std::rand() % 2 == 0)
		std::cout << getTarget() << " has been robotomized" << std::endl;
	else
		std::cout << getTarget() << " robotomy has failed" << std::endl;
}

