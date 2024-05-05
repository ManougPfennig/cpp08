#include "Span.hpp"

int main( void ){

	try
	{
		Span sp(200);

		// sp.addNumberRange(-9, 5);
		// sp.addNumberRange(200, 205);
		// sp.addNumberRange(0, 100);
		// sp.addNumberRange(200, 200);
		sp.addNumber(-5);
		sp.addNumber(5);
		sp.addNumber(105);
		sp.addNumber(505);
		sp.printList();
		int longest = sp.longestSpan();
		int shortest = sp.shortestSpan();
		std::cout << "Longest span: " << longest << std::endl;
		std::cout << "Shortest span: " << shortest << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}