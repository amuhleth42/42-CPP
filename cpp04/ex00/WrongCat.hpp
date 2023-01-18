#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP

# include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal {

public:

	WrongCat(void);
	WrongCat(WrongCat& src);
	~WrongCat(void);

	void	makeSound(void) const;

	WrongCat&	operator=(WrongCat const & rhs);

private:

};

#endif
