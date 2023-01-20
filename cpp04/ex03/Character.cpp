#include "Character.hpp"

Character::Character(void)
{
	//std::cout << "Character default constructor" << std::endl;
	this->_materias[0] = NULL;
	this->_materias[1] = NULL;
	this->_materias[2] = NULL;
	this->_materias[3] = NULL;
}

Character::Character(Character const & src)
{
	*this = src;
	//std::cout << "Character copy constructor" << std::endl;
}

Character::Character(std::string const & name) : _name(name)
{
	//std::cout << "Character string constructor" << std::endl;
	this->_materias[0] = NULL;
	this->_materias[1] = NULL;
	this->_materias[2] = NULL;
	this->_materias[3] = NULL;
	//std::cout << "Character string constructor" << std::endl;
}

Character::~Character(void)
{
	//std::cout << "Character destructor" << std::endl;
	for (int i = 0 ; i < 4 ; i++)
	{
		if (this->_materias[i] != NULL)
			delete this->_materias[i];
	}
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
	//std::cout << "already full" << std::endl;
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
		//std::cout << "not used!" << std::endl;

	}
}

Character&	Character::operator=(Character const & rhs)
{
	this->_name = rhs._name;
	for (int i = 0 ; i < 4 ; i++)
	{
		if (this->_materias[i] != NULL)
		{
			//std::cout << "delete " << i << std::endl;
			delete this->_materias[i];
			this->_materias[i] = NULL;
			//std::cout << "delete" << std::endl;
		}
		if (rhs._materias[i] != NULL)
		{
			//std::cout << "replace" << std::endl;
			this->_materias[i] = rhs._materias[i]->clone();
		}
	}
	return (*this);
}
