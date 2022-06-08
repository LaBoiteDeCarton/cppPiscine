# include "AMateria.abstract.hpp"

AMateria::AMateria(): _type("default")
{
	return ;
}

AMateria::AMateria(std::string const & type): _type(type)
{
	return ;
}

AMateria::~AMateria()
{
	return ;
}

std::string const & AMateria::getType() const
{
	return (this->_type);
}

void	AMateria::use(ICharacter& target)
{
	(void)target;
}