#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm : public AForm
{
	public :

		PresidentialPardonForm(const std::string new_target);
		~PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm &target);
		void ExecuteAction() const;
		std::string getTarget() const;

	private :
		std::string _target;


};



#endif