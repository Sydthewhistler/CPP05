#include "Bureaucrat.hpp"

int main()
{
	try {
		Bureaucrat b1("Alice", 1);
		Bureaucrat b2("Bob", 150);
		std::cout << b1 << std::endl;
		std::cout << b2 << std::endl;

		// toohigh
		Bureaucrat b3("Charlie", 0);
	}
	catch (std::exception &e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	try {
		// toolow
		Bureaucrat b4("David", 151);
	}
	catch (std::exception &e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	
	try { //toohigh
		Bureaucrat c1("Eve", 2);
		std::cout << c1 << std::endl;

		std::cout << "Incrementing Eve...\n";
		c1.increment();
		std::cout << c1 << std::endl;

		std::cout << "Incrementing Eve again (should throw)...\n";
		c1.increment();
	}
	catch (std::exception &e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	try { //toolow
		Bureaucrat c2("Frank", 149);
		std::cout << c2 << std::endl;

		std::cout << "Decrementing Frank...\n";
		c2.decrement();
		std::cout << c2 << std::endl;

		std::cout << "Decrementing Frank again (should throw)...\n";
		c2.decrement();
	}
	catch (std::exception &e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	return 0;
}