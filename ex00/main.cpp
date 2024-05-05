#include <iostream>
#include <array>
#include <vector>
#include <deque>
#include <forward_list>
#include <list>

#include "easyfind.hpp"

int main()
{

	// Testing with 'array' type container
	std::cout << "\n";
	try
	{
		std::cout << "Trying with 'array' container (existing value):\n";
		std::array<int, 10> ar = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
		std::cout << "Result: ";
		std::cout << easyfind(ar, 5) << "\n";
	}
	catch(const std::exception& e){std::cerr << e.what() << "\n";}
	try
	{
		std::cout << "Trying with 'array' container (non-existing value):\n";
		std::array<int, 10> ar = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
		std::cout << "Result: ";
		std::cout << easyfind(ar, 11) << "\n";
	}
	catch(const std::exception& e){std::cerr << e.what() << "\n";}
	std::cout << "\n" << std::endl;


	// Testing with 'vector' type container
	try
	{
		std::cout << "Trying with 'vector' container (existing value):\n";
		std::vector<size_t> ar = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
		std::cout << "Result: ";
		std::cout << easyfind(ar, 5) << std::endl;
	}
	catch(const std::exception& e){std::cerr << e.what() << std::endl;}
	try
	{
		std::cout << "Trying with 'vector' container (non-existing value):\n";
		std::vector<size_t> ar = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
		std::cout << "Result: ";
		std::cout << easyfind(ar, 11) << std::endl;
	}
	catch(const std::exception& e){std::cerr << e.what() << std::endl;}
	std::cout << "\n" << std::endl;
	

	// Testing with 'deque' type container
	try
	{
		std::cout << "Trying with 'deque' container (existing value):\n";
		std::deque<size_t> ar = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
		std::cout << "Result: ";
		std::cout << easyfind(ar, 5) << std::endl;
	}
	catch(const std::exception& e){std::cerr << e.what() << std::endl;}
	try
	{
		std::cout << "Trying with 'deque' container (non-existing value):\n";
		std::deque<size_t> ar = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
		std::cout << "Result: ";
		std::cout << easyfind(ar, 11) << std::endl;
	}
	catch(const std::exception& e){std::cerr << e.what() << std::endl;}
	std::cout << "\n" << std::endl;


	// Testing with 'forward_list' type container
	try
	{
		std::cout << "Trying with 'forward_list' container (existing value):\n";
		std::forward_list<size_t> ar = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
		std::cout << "Result: ";
		std::cout << easyfind(ar, 5) << std::endl;
	}
	catch(const std::exception& e){std::cerr << e.what() << std::endl;}
	try
	{
		std::cout << "Trying with 'forward_list' container (non-existing value):\n";
		std::forward_list<size_t> ar = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
		std::cout << "Result: ";
		std::cout << easyfind(ar, 11) << std::endl;
	}
	catch(const std::exception& e){std::cerr << e.what() << std::endl;}
	std::cout << "\n" << std::endl;


	// Testing with 'list' type container
	try
	{
		std::cout << "Trying with 'list' container (existing value):\n";
		std::list<size_t> ar = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
		std::cout << "Result: ";
		std::cout << easyfind(ar, 5) << std::endl;
	}
	catch(const std::exception& e){std::cerr << e.what() << std::endl;}
	try
	{
		std::cout << "Trying with 'list' container (non-existing value):\n";
		std::list<size_t> ar = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
		std::cout << "Result: ";
		std::cout << easyfind(ar, 11) << std::endl;
	}
	catch(const std::exception& e){std::cerr << e.what() << std::endl;}
	std::cout << "\n" << std::endl;
	return (0);
}
