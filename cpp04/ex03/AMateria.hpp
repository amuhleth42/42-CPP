#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>

class AMateria {

public:

	AMateria(std::string const & type);

	//[...]
	std::string const &	getType() const; //Returns the materia type
										 //
	virtual AMateria*	clone() const = 0;
	virtual void 		use(ICharacter& target);

protected:

	std::string	type;
	//[...]
};

#endif
