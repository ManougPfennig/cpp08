#include "Span.hpp"

Span::~Span( void ){}

Span::Span( void ): _maxSize(100){}

Span::Span( const size_t n ): _maxSize(n){}

Span::Span( const Span &s ): _maxSize(s.getMaxSize()){

	std::deque<int>::const_iterator it;
	for (it = s._num.begin(); it != s._num.end(); it++)
		this->_num.push_back(*it);
	return ;
}

Span	&Span::operator=( const Span &s ){

	// empty current _num list
	while (_num.size())
		_num.pop_front();

	// copies _maxSize and _num list from s
	std::deque<int>::const_iterator it;
	for (it = s._num.begin(); it != s._num.end(); it++)
		_num.push_back(*it);
	_maxSize = s.getMaxSize();
	return (*this);
}

void	Span::addNumber( int value ){

	if (_num.size() == _maxSize)
		throw (MaximumCapacityReachedException());
	_num.push_back(value);
	return ;
}

void	Span::addNumberRange( int start, int end ){

	if (start <= end)
	{
		while (start <= end)
		{
			this->addNumber(start);
			start++;
		}
	}
	else
	{
		while (start >= end)
		{
			this->addNumber(start);
			start--;
		}
	}
	return ;
}

void	Span::addNumberRange( int start, int end, int modulo ){

	if (start <= end)
	{
		while (start <= end)
		{
			if (start % modulo == 0)
				this->addNumber(start);
			start++;
		}
	}
	else
	{
		while (start >= end)
		{
			if (start % modulo == 0)
				this->addNumber(start);
			start--;
		}
	}
	return ;
}

size_t	Span::shortestSpan( void ) const{

	if (_num.size() <= 1)
		throw (NotEnoughValuesException());

	Span s(*this);
	size_t	shortest = LONG_MAX;
	std::deque<int>::const_iterator it;

	std::sort(s._num.begin(), s._num.end());
	for (it = s._num.begin(); it != s._num.end(); it++)
		if ((*(it + 1) - *it) < shortest)
			shortest = (*(it + 1) - *it);
	return (shortest);
}

size_t	Span::longestSpan( void ) const{

	if (_num.size() <= 1)
		throw (NotEnoughValuesException());
	
	return (this->getHighest() - this->getLowest());
}

size_t	Span::getMaxSize( void ) const{

	return (this->_maxSize);
}

int	Span::getLowest( void ) const{

	std::deque<int>::const_iterator it = _num.begin();
	int	lowest = *it;

	while (it != _num.end())
	{
		if (*it < lowest)
			lowest = *it;
		it++;
	}
	return (lowest);
}

int	Span::getHighest( void ) const{

	std::deque<int>::const_iterator it = _num.begin();
	int	highest = *it;

	while (it != _num.end())
	{
		if (*it > highest)
			highest = *it;
		it++;
	}
	return (highest);
}

void	Span::printList( void ) const{

	std::deque<int>::const_iterator it;
	std::cout << "-------------\n";
	for (it = _num.begin(); it != _num.end(); it++)
		std::cout << *it << " ";
	std::cout << "\n-------------" << std::endl;
	return ;
}