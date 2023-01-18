#ifndef AMATERIA_HPP
# define AMATERIA_HPP

class ICharacter;
# include <string>
# include "ICharacter.hpp"

class AMateria {

public:

	AMateria(void);
	AMateria(std::string const & type);

	//[...]
	std::string const &	getType() const; //Returns the materia type
										 //
	virtual AMateria*	clone() const = 0;
	virtual void 		use(ICharacter& target);

	AMateria&	operator=(AMateria const & rhs);

protected:

	std::string	type;
	//[...]
};

#endif
