# include "AMateria.abstract.hpp"

AMateria::AMateria(): _type("unknown source of power")
{
	return ;
}

AMateria::AMateria(std::string const & type): _type(type)
{
	return ;
}

AMateria::AMateria(AMateria const & src)
{
	*this = src;
	return ;
}

AMateria::~AMateria()
{
	return ;
}

AMateria&	AMateria::operator=(AMateria const & src)
{
	this->_type = src.getType();
	return (*this);
}

std::string const & AMateria::getType() const
{
	return (this->_type);
}

void	AMateria::use(ICharacter& target)
{
	std::cout << "* a small breeze rise around "<< target.getName() << " and nothing happens *" << std::endl;
	return ;
}