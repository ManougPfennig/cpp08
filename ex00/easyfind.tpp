#include "easyfind.hpp"

template <typename T, typename E>
E	easyfind(T ar, const E toFind){

	for (typename T::iterator ptr = ar.begin(); ptr != ar.end(); ptr++)
		if (*ptr == toFind)
			return (*ptr);
	throw (ValueNotFoundException());
}
