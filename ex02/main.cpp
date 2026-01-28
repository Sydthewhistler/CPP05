#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>

int main()
{
	try
	{
		Bureaucrat alice("Alice", 1);	// grade élevé
		Bureaucrat bob("Bob", 150);		// grade faible

		// --- SHRUBBERY FORM ---
		ShrubberyCreationForm shrub("home");
		std::cout << "\n--- SHRUBBERY FORM ---\n";
		bob.signForm(shrub);   // echec
		alice.signForm(shrub); // succès
		bob.executeForm(shrub);   // echec
		alice.executeForm(shrub); // succès

		// --- ROBOTOMY FORM --- 
		RobotomyRequestForm robot("Marvin");
		std::cout << "\n--- ROBOTOMY FORM ---\n";
		alice.signForm(robot);
		alice.executeForm(robot);

		// --- PRESIDENTIAL PARDON FORM ---
		PresidentialPardonForm pardon("Douglas");
		std::cout << "\n--- PRESIDENTIAL PARDON FORM ---\n";
		alice.signForm(pardon);
		alice.executeForm(pardon);
		bob.executeForm(pardon); // echec

	}
	catch (std::exception &e)
	{
		std::cerr << "Exception caught in main: " << e.what() << std::endl;
	}
	return 0;
}