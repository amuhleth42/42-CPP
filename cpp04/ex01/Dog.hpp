#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Dog : public Animal {

public:

	Dog(void);
	Dog(Dog const & src);
	~Dog(void);

	void	makeSound(void) const;

	Dog&	operator=(Dog const & rhs);

private:

	Brain*	_brain;

};

#endif
