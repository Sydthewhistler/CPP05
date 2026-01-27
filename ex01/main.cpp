#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{

	Bureaucrat Tom("Tom",20);
	Form f("Buy the company", 15, 10);

	std::cout << f;
	
	try
	{
		//f.beSigned(Tom);
		Tom.signForm(f);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}