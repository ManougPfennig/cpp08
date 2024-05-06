#include <iostream>
#include <array>
#include <vector>
#include <deque>
#include <forward_list>
#include <list>

#define RESET   "\033[0m"
#define RED     "\033[31m"      
#define GREEN   "\033[32m"      
#define YELLOW  "\033[33m"      
#define BLUE    "\033[34m"      
#define MAGENTA "\033[35m"      
#define CYAN    "\033[36m"      
#define WHITE   "\033[37m"

#include "easyfind.hpp"

int main()
{

	// Testing with 'array' type container
	std::cout << "\n";
	try
	{
		std::cout << YELLOW << "Trying with" << MAGENTA << " array " << YELLOW "container (existing value):\n" << RESET;
		std::array<int, 10> ar = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
		std::cout << GREEN << "Value: " << BLUE << 5;
		std::cout << GREEN << "\nResult: " << RESET;
		std::cout << BLUE << easyfind(ar, 5) << "\n";
	}
	catch(const std::exception& e){std::cerr << RED << e.what() << RESET << "\n";}
	try
	{
		std::cout << YELLOW <<"Trying with" << MAGENTA << " array " << YELLOW "container (non-existing value):\n" << RESET;
		std::array<int, 10> ar = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
		std::cout << GREEN << "Value: " << BLUE << 11;
		std::cout << GREEN << "\nResult: " << RESET;
		std::cout << BLUE << easyfind(ar, 11) << "\n";
	}
	catch(const std::exception& e){std::cerr << RED << e.what() << RESET << "\n";}
	std::cout << "\n" << std::endl;


	// Testing with 'vector' type container
	try
	{
		std::cout << YELLOW <<"Trying with" << MAGENTA << " vector " << YELLOW "container (existing value):\n" << RESET;
		std::vector<size_t> ar = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
		std::cout << GREEN << "Value: " << BLUE << 5;
		std::cout << GREEN << "\nResult: " << RESET;
		std::cout << BLUE << easyfind(ar, 5) << std::endl;
	}
	catch(const std::exception& e){std::cerr << RED << e.what() << RESET << std::endl;}
	try
	{
		std::cout << YELLOW <<"Trying with" << MAGENTA << " vector " << YELLOW "container (non-existing value):\n" << RESET;
		std::vector<size_t> ar = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
		std::cout << GREEN << "Value: " << BLUE << 11;
		std::cout << GREEN << "\nResult: " << RESET;
		std::cout << BLUE << easyfind(ar, 11) << std::endl;
	}
	catch(const std::exception& e){std::cerr << RED << e.what() << RESET << std::endl;}
	std::cout << "\n" << std::endl;
	

	// Testing with 'deque' type container
	try
	{
		std::cout << YELLOW <<"Trying with" << MAGENTA " deque " << YELLOW "container (existing value):\n" << RESET;
		std::deque<size_t> ar = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
		std::cout << GREEN << "Value: " << BLUE << 5;
		std::cout << GREEN << "\nResult: " << RESET;
		std::cout << BLUE << easyfind(ar, 5) << std::endl;
	}
	catch(const std::exception& e){std::cerr << RED << e.what() << RESET << std::endl;}
	try
	{
		std::cout << YELLOW <<"Trying with" << MAGENTA " deque " << YELLOW "container (non-existing value):\n" << RESET;
		std::deque<size_t> ar = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
		std::cout << GREEN << "Value: " << BLUE << 11;
		std::cout << GREEN << "\nResult: " << RESET;
		std::cout << BLUE << easyfind(ar, 11) << std::endl;
	}
	catch(const std::exception& e){std::cerr << RED << e.what() << RESET << std::endl;}
	std::cout << "\n" << std::endl;


	// Testing with 'forward_list' type container
	try
	{
		std::cout << YELLOW <<"Trying with" << MAGENTA << " forward_list " << YELLOW "container (existing value):\n" << RESET;
		std::forward_list<size_t> ar = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
		std::cout << GREEN << "Value: " << BLUE << 5;
		std::cout << GREEN << "\nResult: " << RESET;
		std::cout << BLUE << easyfind(ar, 5) << std::endl;
	}
	catch(const std::exception& e){std::cerr << RED << e.what() << RESET << std::endl;}
	try
	{
		std::cout << YELLOW <<"Trying with" << MAGENTA << " forward_list " << YELLOW "container (non-existing value):\n" << RESET;
		std::forward_list<size_t> ar = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
		std::cout << GREEN << "Value: " << BLUE << 11;
		std::cout << GREEN << "\nResult: " << RESET;
		std::cout << BLUE << easyfind(ar, 11) << std::endl;
	}
	catch(const std::exception& e){std::cerr << RED << e.what() << RESET << std::endl;}
	std::cout << "\n" << std::endl;


	// Testing with 'list' type container
	try
	{
		std::cout << YELLOW <<"Trying with" << MAGENTA << " list " << YELLOW "container (existing value):\n" << RESET;
		std::list<size_t> ar = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
		std::cout << GREEN << "Value: " << BLUE << 5;
		std::cout << GREEN << "\nResult: " << RESET;
		std::cout << BLUE << easyfind(ar, 5) << std::endl;
	}
	catch(const std::exception& e){std::cerr << RED << e.what() << RESET << std::endl;}
	try
	{
		std::cout << YELLOW <<"Trying with" << MAGENTA << " list " << YELLOW "container (non-existing value):\n" << RESET;
		std::list<size_t> ar = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
		std::cout << GREEN << "Value: " << BLUE << 11;
		std::cout << GREEN << "\nResult: " << RESET;
		std::cout << BLUE << easyfind(ar, 11) << std::endl;
	}
	catch(const std::exception& e){std::cerr << RED << e.what() << RESET << std::endl;}
	std::cout << "\n" << std::endl;
	return (0);
}
