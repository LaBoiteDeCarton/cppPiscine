#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <stack>

template<typename T>
class MutantStack: public std::stack<T>
{
public:
	MutantStack( void );
	MutantStack( MutantStack<T> const & src);
	~MutantStack( void );

	MutantStack<T>&	operator=(MutantStack<T> const &src);
	
	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin();
	iterator end();
};

template<typename T>
MutantStack<T>::MutantStack( void )
{
	return ;
}

template<typename T>
MutantStack<T>::MutantStack( MutantStack<T> const & src )
{
	*this = src;
	return ;
}

template<typename T>
MutantStack<T>::~MutantStack( void )
{
	return ;
}

template<typename T>
MutantStack<T>&	MutantStack<T>::operator=(MutantStack<T> const &src)
{
	if (this == &src)
		return (*this);
	std::stack<T>::operator=(src);
	return (*this);
}

template<typename T>
typename std::stack<T>::container_type::iterator MutantStack<T>::begin()
{
	return (this->c.begin());
}

template<typename T>
typename std::stack<T>::container_type::iterator MutantStack<T>::end()
{
	return (this->c.end());
}

#endif