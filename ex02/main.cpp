#include "MutantStack.hpp"
#include <list>

#define RESET   "\033[0m"
#define RED     "\033[31m"      
#define GREEN   "\033[32m"      
#define YELLOW  "\033[33m"      
#define BLUE    "\033[34m"      
#define MAGENTA "\033[35m"      
#define CYAN    "\033[36m"      
#define WHITE   "\033[37m"

int main()
{
	std::cout << "\n";
	try
	{
		std::cout << YELLOW << "Adding values:	 " << MAGENTA << "{1, 2, 3, 4, 5} " << YELLOW "to MutantStack:\n" << RESET;
		MutantStack<int> ms;
		ms.push(1);
		ms.push(2);
		ms.push(3);
		ms.push(4);
		ms.push(5);
		std::cout << GREEN << "Popped values:	 " << CYAN << "{" << BLUE;
		for (int i = 0; i < 5; i++)
		{
			std::cout << ms.top();
			ms.pop();
			if (i + 1 < 5)
				std::cout << ", ";
		}
		std::cout << "}\n" << std::endl;
	}
	catch(const std::exception& e){std::cerr << RED << e.what() << RESET << "\n";}

	try
	{
		std::cout << YELLOW << "Adding values:	 " << MAGENTA << "{1, 2, 3, 4, 5} " << YELLOW "to MutantStack:\n" << RESET;
		MutantStack<int> ms;	
		ms.push(1);
		ms.push(2);
		ms.push(3);
		ms.push(4);
		ms.push(5);
		std::cout << GREEN << "Iterated values: " << CYAN << "{" << BLUE;
		for (MutantStack<int>::iterator it = ms.begin(); it != ms.end(); it++)
		{
			std::cout << *it;
			if (it + 1 != ms.end())
				std::cout << ", ";
		}
		std::cout << "}\n" << std::endl;
	}
	catch(const std::exception& e){std::cerr << RED << e.what() << RESET << "\n";}



	try
	{
		std::cout << YELLOW << "Subject's tests (as MutantStack):\n" << CYAN;
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
		std::cout << std::endl;
	}
	catch(const std::exception& e){std::cerr << RED << e.what() << RESET << "\n";}


	try
	{
		std::cout << YELLOW << "Subject's tests (as list):\n" << CYAN;
		std::list<int> mstack;
		mstack.push_back(5);
		mstack.push_back(17);
		std::cout << mstack.back() << std::endl;
		mstack.pop_back();
		std::cout << mstack.size() << std::endl;
		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		//[...]
		mstack.push_back(0);
		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::list<int> s(mstack);
		std::cout << std::endl;
	}
	catch(const std::exception& e){std::cerr << RED << e.what() << RESET << "\n";}
	return 0;
}