#ifndef SPAN_H
# define SPAN_H

# include <iostream>
# include <deque>
# include <algorithm>
# include <exception>
# include <iterator>
# include <climits>

class Span {

	private:
		std::deque<int> _num;
		size_t			_maxSize;

	public:
		// by default, Span will set _maxSize to 100
		Span( void );
		Span( const size_t n );
		Span( const Span &s );
		~Span( void );
		Span	&operator=( const Span &s);

		// will add value to _numbers list
		void	addNumber( int value );
		// will add all values (including start and end) to _numbers list
		//- can be called with a third int as modulo (int start, int end, int modulo)
		void	addNumberRange( int start, int end );
		// will add all values divisible by modulo (including start and end) to _numbers list
		void	addNumberRange( int start, int end, int modulo );
		// will return the shortest possible span between two values in _numbers
		size_t	shortestSpan( void ) const;
		// will return the longest possible span between two values in _numbers
		size_t	longestSpan( void ) const;
		// returns _maxSize value
		size_t	getMaxSize( void ) const;
		// returns the lowest value in _num
		int		getLowest( void ) const;
		// return the highest value in _num
		int		getHighest( void ) const;
		// print all of _num's values to standard output
		void	printList( void ) const;

	class MaximumCapacityReachedException : public std::exception
	{
		const char *what() const throw()
		{
			return ("Span at maximum capacity");
		}
	};

	class NotEnoughValuesException : public std::exception
	{
		const char *what() const throw()
		{
			return ("Not enough values stored to create a span");
		}
	};
};

#endif