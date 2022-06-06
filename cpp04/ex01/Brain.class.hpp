#ifndef BRAIN_CLASS_HPP
# define BRAIN_CLASS_HPP
# include <string>
# include <iostream>

class Brain
{
public:
	Brain( void );
	Brain (Brain const & b);
	~Brain( void );

	Brain&			operator=(Brain const & rhs);
	std::string		getIdea(int index) const;
private:
	std::string		ideas[100];
};

#endif