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
}

void	Character::unequip(int idx)
{
}

void	Character::use(int idx, ICharacter& target)
{
}
