#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class	Animal {

public:

	Animal(void);
	Animal(Animal& src);
	virtual	~Animal(void);

	std::string	getType(void) const;

	virtual void	makeSound(void) const;

	Animal&	operator=(Animal const & rhs);

protected:

	std::string	type;

};


#endif
