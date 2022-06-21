#include "Span.hpp"
#include <algorithm>
#include <iterator>
#include <vector>

Span::Span(unsigned int n): _maxSize(n), _stock(0)
{
	return ;
}

Span::Span(Span const &src)
{
	*this = src;
	return ;
}

Span::~Span()
{
	return ;
}

Span &	Span::operator=(Span const &s)
{
	this->_maxSize = s.getMaxSize();
	// for (std::vector<int>::const_iterator it = s.getStock().cbegin(); it != s.getStock().cend(); it++)
	// 	this->addNumber(*it);
	this->assign(s.getStock().cbegin(), s.getStock().cend() - 1);
	return (*this);
}

void	Span::addNumber(int n)
{
	if (this->_stock.size() >= static_cast<size_t>(this->_maxSize))
		throw Span::SizeOverflowException();
	this->_stock.push_back(n);
	return ;
}


void				Span::assign(std::vector<int>::const_iterator first, std::vector<int>::const_iterator last)
{
	if (std::distance(first, last) > static_cast<ptrdiff_t>(this->_maxSize))
		throw Span::SizeOverflowException();
	this->_stock.assign(first, last);
	return ;
}

const char *	Span::SizeOverflowException::what() const throw()
{
	return ("Span overflow");
}

const char *	Span::UndefinedDistance::what() const throw()
{
	return ("Distance cannot be defined with 0 or 1 argument");
}

unsigned int		Span::getMaxSize()	const
{
	return (this->_maxSize);
}

const std::vector<int>&	Span::getStock()	const
{
	return (this->_stock);
}

int					Span::shortestSpan()	const
{
	int shortest = INT_MAX;

	if (this->_stock.size() <= 1)
		throw Span::UndefinedDistance();
	for(std::vector<int>::const_iterator cit = this->_stock.cbegin(); cit != this->_stock.cend(); cit++)
		for(std::vector<int>::const_iterator cjt = cit + 1; cjt != this->_stock.cend(); cjt++)
			shortest = std::min<int>(shortest, abs(*cit - *cjt));
	return (shortest);
}

int					Span::longestSpan()	const
{
	int longest = 0;

	if (this->_stock.size() <= 1)
		throw Span::UndefinedDistance();
	for(std::vector<int>::const_iterator cit = this->_stock.cbegin(); cit != this->_stock.cend(); cit++)
		for(std::vector<int>::const_iterator cjt = cit + 1; cjt != this->_stock.cend(); cjt++)
			longest = std::max<int>(longest, abs(*cit - *cjt));
	return (longest);
}

