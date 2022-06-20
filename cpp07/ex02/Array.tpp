#ifndef ARRAY_TPP
# define ARRAY_TPP

template< typename T >
class Array
{
public:
	Array( void );
	Array( unsigned int n );
	Array(Array const & src);
	~Array( void );

	T &				operator[](unsigned int idx) const;
	Array<T> &		operator=(Array<T> const &src);
	unsigned int	size() const;

	class	ArrayOutOfRangeException: public std::exception
	{
		virtual const char *	what() const throw();
	};
private:
	T *				_array;
	unsigned int	_size;
};

template< typename T>
Array<T>::Array( void ): _array(NULL), _size(0)
{
	return ;
}

template< typename T>
Array<T>::Array( unsigned int n ): _size(n)
{
	this->_array = new T[n];
	return ;
}

template< typename T>
Array<T>::Array( Array const & src )
{
	this->_array = NULL;
	*this = src;
	return ;
}

template< typename T >
Array<T>::~Array( void )
{
	delete [] this->_array;
	return ;
}

template <typename T>
T &	Array<T>::operator[](unsigned int i) const
{
	if (i >= this->_size)
		throw Array<T>::ArrayOutOfRangeException();
	return (this->_array[i]);
}

template <typename T>
Array<T> &	Array<T>::operator=(Array<T> const &src)
{
	if (this->_array)
		delete [] this->_array;
	this->_size = src.size();
	this->_array = new T[this->_size];
	for (unsigned int i = 0; i < this->_size; i++)
		this->_array[i] = src[i];
	return (*this);
}

template <typename T>
unsigned int	Array<T>::size() const
{
	return (this->_size);
}

template <typename T>
const char *	Array<T>::ArrayOutOfRangeException::what() const throw()
{
	return ("Out of range");
}

template <typename T>
void	showArray(Array<T> const & array)
{
	for(unsigned int i = 0; i < array.size(); i++)
		std::cout << i << ": " << array[i] << std::endl;
}

#endif