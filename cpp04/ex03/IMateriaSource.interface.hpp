#ifndef IMATERIALSOURCE_INTERFACE_HPP
# define IMATERIALSOURCE_INTERFACE_HPP
# include <string>
# include "AMateria.abstract.hpp"

class IMateriaSource
{
public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif