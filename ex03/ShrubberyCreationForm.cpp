#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string new_target): AForm("ShrubberyCreationForm", 137, 145), _target(new_target){}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &t): AForm(t), _target(t.getTarget()){}

std::string ShrubberyCreationForm::getTarget() const {return _target;}

void ShrubberyCreationForm::ExecuteAction() const
{
	std::ofstream file((_target + "_shrubbery").c_str());
	if (!file)
		throw std::runtime_error("Cannot create file");

	for(int i =0; i < 2; i++)
	{
		file << "	 /\\ \n";
		file << "   /**\\\n";
		file << "  /****\\\n";
		file << " /******\\\n";
		file << "/********\\\n";
		file << "   ||||\n";
		file << "   ||||\n\n";
	}
}

