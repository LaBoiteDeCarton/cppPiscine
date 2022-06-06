#ifndef ANIMAL_CLASS_HPP
# define ANIMAL_CLASS_HPP
# include <string>
# include <iostream>
# include "Brain.class.hpp"

class AAnimal
{
public:
	AAnimal( void );
	AAnimal( std::string type );
	AAnimal( AAnimal const & src);
	virtual ~AAnimal( void );

	virtual AAnimal&		operator=(AAnimal const & rhs) = 0;

	std::string				getType() const;
	virtual const Brain &	getBrain() const = 0;
	virtual void			makeSound() const = 0;
	virtual void			printIdeas() const = 0;
	virtual void			addIdea( std::string idea ) = 0;
protected:
	std::string	_type;
};

#endif