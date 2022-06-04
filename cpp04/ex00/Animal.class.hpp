#ifndef ANIMAL_CLASS_HPP
# define ANIMAL_CLASS_HPP
# include <string>

class Animal
{
public:
	Animal( void );
	Animal( Animal const & src);

	Animal&	operator=(Animal const & rhs);
	~Animal( void );
protected:
	std::string	_type;
};

#endif