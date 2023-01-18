#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class	Dog : public Animal {

public:

	Dog(void);
	Dog(Dog& src);
	~Dog(void);

	void	makeSound(void) const;

	Dog&	operator=(Dog const & rhs);

private:

};

#endif
