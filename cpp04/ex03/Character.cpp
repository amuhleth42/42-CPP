#include "Character.hpp"

Character::Character(void)
{
}

Character::Character(std::string const & name) : _name(name)
{
}

Character::~Character(void)
{
}

std::string const &	Character::getName(void) const
{
	return (this->_name);
}

void	Character::equip(AMateria* m)
{
	if (m != NULL)
		std::cout << "notnull" << std::endl;
	std::cout << "yoo" << std::endl;
}

void	Character::unequip(int idx)
{
	(void)idx;
	std::cout << "yoo" << std::endl;
}

void	Character::use(int idx, ICharacter& target)
{
	if (0 <= idx && idx < 4)
	{
		if (this->_materias[idx] != NULL)
			this->_materias[idx]->use(target);
	}
}
