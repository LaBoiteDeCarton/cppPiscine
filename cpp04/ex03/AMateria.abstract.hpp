#ifndef AMATERIA_INTERFACE_HPP
# define AMATERIA_INTERFACE_HPP
# include <string>
# include <iostream>
# include "ICharacter.interface.hpp"

class ICharacter;

class AMateria
{
public:
	AMateria();
	AMateria(std::string const & type);
	AMateria(AMateria const & src);
	virtual ~AMateria();

	AMateria&	operator=(AMateria const & src);

	std::string const & getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
protected:
	std::string _type;
};

#endif