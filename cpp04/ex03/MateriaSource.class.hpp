#ifndef MATERIALSOURCE_CLASS_HPP
# define MATERIALSOURCE_CLASS_HPP
# include "IMateriaSource.interface.hpp"
# include "AMateria.abstract.hpp"

class MateriaSource: public IMateriaSource
{
public:
	MateriaSource( void );
	MateriaSource( MateriaSource const & src);
	~MateriaSource( void );

	MateriaSource&	operator=(MateriaSource const & src);
	
	void			learnMateria(AMateria* item);
	AMateria*		createMateria(std::string const & type);
	AMateria*		getItem(int idx) const;
private:
	AMateria*		_inventory[4];
};

#endif