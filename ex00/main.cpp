#include "Bureaucrat.hpp"

int main()
{

	Bureaucrat Tom("Tom",15);
	std::cout << Tom;
	Tom.increment();
	std::cout << "Tom a gagne un grade" << std::endl;
	std::cout << Tom;


	//Bureaucrat Jeremy("Jeremy", 1);
	try
	{
		//Bureaucrat David("David", 200);
		//Bureaucrat Mathieu("Mathieu", 0);
		//Jeremy.increment();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}