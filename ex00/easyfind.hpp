#ifndef EASYFIND_H
# define EASYFIND_H

# include <iostream>
# include <exception>

template <typename T, typename E>
E	easyfind(T ar, const E toFind);

class ValueNotFoundException : public std::exception
{
	const char *what() const throw()
	{
		return ("Value not in container exception");
	}
};


# include "easyfind.tpp"

#endif