#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class RobotomyRequestForm : public AForm
{
	public :

		RobotomyRequestForm(const std::string new_target);
		~RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm &target);
		void ExecuteAction() const;
		std::string getTarget() const;

	private :
		std::string _target;


};



#endif