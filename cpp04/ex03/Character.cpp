#include "Character.hpp"

Character::Character(void)
{
	//std::cout << "Character default constructor" << std::endl;
}

Character::Character(std::string const & name) : _name(name)
{
	//std::cout << "Character copy constructor" << std::endl;
}

Character::~Character(void)
{
	//std::cout << "Character destructor" << std::endl;
}

std::string const &	Character::getName(void) const
{
	return (this->_name);
}

void	Character::equip(AMateria* m)
{
	for (int i = 0 ; i < 4 ; i++)
	{
		if (this->_materias[i] == NULL)
		{
			//std::cout << "equiped! on " << i << "p:" << m << std::endl;
			this->_materias[i] = m;
			return ;
		} 
	}
}

void	Character::unequip(int idx)
{
	if (0 <= idx && idx < 4)
	{
		if (this->_materias[idx] != NULL)
			this->_materias[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter& target)
{
	if (0 <= idx && idx < 4)
	{
		if (this->_materias[idx] != NULL)
		{
			//std::cout << "used!" << std::endl;
			this->_materias[idx]->use(target);
		}
	}
}
