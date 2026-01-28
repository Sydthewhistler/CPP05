#include "Intern.hpp"
#include <iostream>

Intern::Intern() {}
Intern::Intern(const Intern &other) { (void)other; }
Intern::~Intern() {}
Intern &Intern::operator=(const Intern &other) { (void)other; return *this; }

static AForm* createShrubbery(const std::string &target) { return new ShrubberyCreationForm(target); }
static AForm* createRobotomy(const std::string &target) { return new RobotomyRequestForm(target); }
static AForm* createPresidential(const std::string &target) { return new PresidentialPardonForm(target); }


AForm* Intern::makeForm(const std::string &formName, const std::string &target) const
{
	struct FormPair {
		const char* name;
		AForm* (*create)(const std::string &target);
	};

	static FormPair forms[] = {
		{"shrubbery creation", createShrubbery},
		{"robotomy request",   createRobotomy},
		{"presidential pardon", createPresidential}
	};

	for (int i = 0; i < 3; ++i)
	{
		if (formName == forms[i].name)
		{
			std::cout << "Intern creates " << formName << std::endl;
			return forms[i].create(target);
		}
	}

	std::cout << "Intern cannot create " << formName << " because it does not exist!" << std::endl;
	return NULL;
}