#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"


#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>

int main()
{
	Intern someIntern;
	Bureaucrat alice("Alice", 1); // grade élevé
	Bureaucrat bob("Bob", 150);   // grade faible

	// --- Création de formulaires par l'intern ---
	std::cout << "\n--- TEST INTERN ---\n";

	AForm* f1 = someIntern.makeForm("shrubbery creation", "home");
	AForm* f2 = someIntern.makeForm("robotomy request", "Marvin");
	AForm* f3 = someIntern.makeForm("presidential pardon", "Douglas");
	AForm* f4 = someIntern.makeForm("invalid form", "Nobody"); // échoue

	std::cout << "\n--- TEST SIGNATURE / EXECUTION ---\n";

	// Test Shrubbery
	bob.signForm(*f1);   // échoue
	alice.signForm(*f1); // succès
	bob.executeForm(*f1);   // échoue
	alice.executeForm(*f1); // succès

	// Test Robotomy
	alice.signForm(*f2);
	alice.executeForm(*f2);

	// Test Presidential
	alice.signForm(*f3);
	alice.executeForm(*f3);
	bob.executeForm(*f3); // échoue

	delete f1;
	delete f2;
	delete f3;
	delete f4;

	return 0;
}