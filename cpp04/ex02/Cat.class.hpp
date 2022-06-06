#ifndef CAT_CLASS_HPP
# define CAT_CLASS_HPP
# include <string>
# include <iostream>
# include "Animal.class.hpp"
# include "Brain.class.hpp"

class Cat : public AAnimal
{
public:
	Cat( void );
	Cat( Cat const & src);
	virtual ~Cat( void );

	Cat&			operator=(Cat const & rhs);
	AAnimal&		operator=(AAnimal const & rhs);

	virtual void	makeSound() const;
	const Brain &	getBrain() const;
	void			printIdeas() const;
	void			addIdea( std::string idea );
private:
	Brain*			_brain;
};

#endif