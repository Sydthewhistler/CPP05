#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class ShrubberyCreationForm : public AForm
{
	public :

		ShrubberyCreationForm(const std::string new_target);
		~ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm &target);
		void ExecuteAction() const;
		std::string getTarget() const;

	private :
		std::string _target;


};



#endif