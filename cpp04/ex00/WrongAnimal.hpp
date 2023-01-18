#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

# include <iostream>
# include <string>

class	WrongAnimal {

public:

	WrongAnimal(void);
	WrongAnimal(WrongAnimal const & src);
	virtual	~WrongAnimal(void);

	std::string	getType(void) const;

	void	makeSound(void) const;

	WrongAnimal&	operator=(WrongAnimal const & rhs);

protected:

	std::string	type;

};


#endif
