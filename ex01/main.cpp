#include "Span.hpp"

#define RESET   "\033[0m"
#define RED     "\033[31m"      
#define GREEN   "\033[32m"      
#define YELLOW  "\033[33m"      
#define BLUE    "\033[34m"      
#define MAGENTA "\033[35m"      
#define CYAN    "\033[36m"      
#define WHITE   "\033[37m"

int main( void )
{
	try
	{
		std::cout << YELLOW << "\nConstructing Span and filling every available slot:\n" << RESET;
		Span sp(20);
		std::cout << MAGENTA << "Span" << BLUE << " with maxSize " << MAGENTA << sp.getMaxSize() << BLUE << ":\n" << BLUE;
		sp.addNumberRange(1, 20);
		sp.printList();
		std::cout << YELLOW << "\nAdding another value (going over capacity):\n" << RESET;
		sp.addNumber(21);
	}
	catch(const std::exception& e)
	{
		std::cout << GREEN << "Exception: " << RESET;
		std::cout << RED << e.what() << '\n' << RESET;
	}
	std::cout << "\n" << std::endl;





	try
	{
		std::cout << YELLOW << "\nTesting longestSpan() and shortestSpan() function:\n" << RESET;
		Span sp(20);
		std::cout << MAGENTA << "Span" << BLUE << " with maxSize " << MAGENTA << sp.getMaxSize() << BLUE << ":\n" << BLUE;
		sp.addNumberRange(101, 115, 5);
		sp.addNumberRange(-30, -1, 3);
		sp.addNumberRange(116, 130, 5);
		sp.printList();
		std::cout << GREEN << "Longest span: " << BLUE << sp.longestSpan();
		std::cout << GREEN << "\nShortest span: " << BLUE << sp.shortestSpan();
	}
	catch(const std::exception& e)
	{
		std::cout << GREEN << "Exception: " << RESET;
		std::cout << RED << e.what() << '\n' << RESET;
	}
	std::cout << "\n" << std::endl;





	try
	{
		std::cout << YELLOW << "\nTesting longestSpan() and shortestSpan() with only one value:\n" << RESET;
		Span sp(20);
		std::cout << MAGENTA << "Span" << BLUE << " with maxSize " << MAGENTA << sp.getMaxSize() << BLUE << ":\n" << BLUE;
		sp.addNumber(1);
		sp.printList();
		sp.longestSpan();
		sp.shortestSpan();
	}
	catch(const std::exception& e)
	{
		std::cout << GREEN << "Exception: " << RESET;
		std::cout << RED << e.what() << '\n' << RESET;
	}
	std::cout << "\n" << std::endl;




	try
	{
		std::cout << YELLOW << "\nTesting longestSpan() and shortestSpan() with no value:\n" << RESET;
		Span sp(20);
		std::cout << MAGENTA << "Span" << BLUE << " with maxSize " << MAGENTA << sp.getMaxSize() << BLUE << ":\n" << BLUE;
		sp.printList();
		sp.longestSpan();
		sp.shortestSpan();
	}
	catch(const std::exception& e)
	{
		std::cout << GREEN << "Exception: " << RESET;
		std::cout << RED << e.what() << '\n' << RESET;
	}
	std::cout << "\n" << std::endl;




	try
	{
		std::cout << YELLOW << "\nTests from the subject:\n" << BLUE;
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << GREEN << "Exception: " << RESET;
		std::cout << RED << e.what() << '\n' << RESET;
	}
	std::cout << "\n" << std::endl;



	try
	{
		std::cout << YELLOW << "\nTesting copy operator override:\n\n" << RESET;
		Span sp1(20);
		std::cout << RED << "Before copy:\n" << RESET;
		std::cout << MAGENTA << "Span1 " << BLUE << "with maxSize " << MAGENTA << sp1.getMaxSize() << ":\n" << BLUE;
		sp1.addNumberRange(1, 50, 3);
		sp1.printList();
		Span sp2(10);
		sp2.addNumberRange(-8, 7, 3);
		std::cout << MAGENTA << "Span2 " << BLUE << "with maxSize " << MAGENTA << sp2.getMaxSize() << ":\n" << CYAN;
		sp2.printList();
		sp2 = sp1;
		std::cout << RED << "\nAfter copy:\n" << RESET;
		std::cout << MAGENTA << "Span1 " << BLUE << "with maxSize " << MAGENTA << sp1.getMaxSize() << ":\n" << BLUE;
		sp1.printList();
		std::cout << MAGENTA << "Span2 " << BLUE << "with maxSize " << MAGENTA << sp2.getMaxSize() << ":\n" << BLUE;
		sp2.printList();
	}
	catch(const std::exception& e)
	{
		std::cout << GREEN << "Exception: " << RESET;
		std::cout << RED << e.what() << '\n' << RESET;
	}
	std::cout << "\n" << std::endl;
}
