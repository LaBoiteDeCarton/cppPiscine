#ifndef DOG_CLASS_HPP
# define DOG_CLASS_HPP
# include <string>
# include <iostream>
# include "Animal.class.hpp"
# include "Brain.class.hpp"

class Dog : public Animal
{
public:
	Dog( void );
	Dog( Dog const & src);
	virtual ~Dog( void );

	Dog&			operator=(Dog const & rhs);

	virtual void	makeSound() const;
	const Brain &	getBrain() const;
	void			printIdeas() const;
	void			addIdea( std::string idea );
private:
	Brain*			_brain;
};

#endif