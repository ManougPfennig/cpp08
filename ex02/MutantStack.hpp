#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H

# include <iostream>
# include <deque>
# include <stack>
# include <iterator>

template <typename T>
class MutantStack : public std::stack<T> {

	private:

	public:
		// Default destructor
		~MutantStack<T>( void ) {};
		// Default contructor
		MutantStack<T>( void ) {};
		// Copy constructor
		MutantStack<T>( MutantStack<T> &m )
		{
			for (MutantStack<int>::iterator it = m.begin(); it != m.end(); it++)
				this->push(*it);
			return ;
		};
		// Copy operator override
		MutantStack<T> &operator=( MutantStack<T> &m )
		{
			while (this->empty() == false)
				this->pop();
			for (MutantStack<int>::iterator it = m.begin(); it != m.end(); it++)
				this->push(*it);
		};

		// Define iterator type
		typedef typename std::deque<T>::iterator iterator ;

		// Redifinition of begin() and end() function
		iterator	begin( void ) {return (this->c.begin());};
		iterator	end( void ) {return (this->c.end());};

};

#endif