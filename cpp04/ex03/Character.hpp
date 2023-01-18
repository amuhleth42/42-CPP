#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character {

public:

	Character(void);
	Character(std::string const & name);
	virtual ~Character() {}

	virtual std::string const &	getName() const;

	virtual void 	equip(AMateria* m);
	virtual void 	unequip(int idx);
	virtual void	use(int idx, Character& target);

private:

	std::string	_name;
	AMateria*	_materias[4];
};


#endif
