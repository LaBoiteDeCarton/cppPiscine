#ifndef SPAN_HPP
# define SPAN_HPP
#include <vector>

class Span
{
public:
	Span(unsigned int n);
	Span(Span const & src);
	~Span( void );

	Span &				operator=(Span const &s);

	void				addNumber(int n);
	void				assign(std::vector<int>::const_iterator first, std::vector<int>::const_iterator last);
	int					shortestSpan()	const;
	int					longestSpan()	const;

	unsigned int		getMaxSize()	const;
	const std::vector<int>&	getStock()		const;

	class SizeOverflowException: public std::exception
	{
	public:
		virtual const char *	what() const throw();
	};
	class UndefinedDistance: public std::exception
	{
	public:
		virtual const char *	what() const throw();
	};
private:
	Span( void );
	unsigned int		_maxSize;
	std::vector<int>	_stock;
};

#endif