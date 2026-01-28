#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try {
		Bureaucrat alice("Alice", 50);
		Bureaucrat bob("Bob", 150);
		Bureaucrat charlie("Charlie", 1);

		Form f1("Form1", 100, 50);
		Form f2("Form2", 40, 30);
		Form f3("Form3", 1, 1);

		std::cout << f1 << std::endl;
		std::cout << f2 << std::endl;
		std::cout << f3 << std::endl;

		std::cout << "\n--- SIGNING TEST ---\n";
		bob.signForm(f1);
		alice.signForm(f1);
		charlie.signForm(f2);
		alice.signForm(f2);
		charlie.signForm(f3);

		std::cout << "\n--- FINAL FORM STATES ---\n";
		std::cout << f1 << std::endl;
		std::cout << f2 << std::endl;
		std::cout << f3 << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	try {
		Form invalidHigh("InvalidHigh", 0, 50);//toohigh
	}
	catch (std::exception &e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	try {
		Form invalidLow("InvalidLow", 151, 50); //toolow
	}
	catch (std::exception &e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	return 0;
}