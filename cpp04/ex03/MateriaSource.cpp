#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	//std::cout << "MateriaSource default constructor" << std::endl;
	this->_tab[0] = NULL;
	this->_tab[1] = NULL;
	this->_tab[2] = NULL;
	this->_tab[3] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
	//std::cout << "MateriaSource copy constructor" << std::endl;
	*this = src;
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0 ; i < 4 ; i++)
	{
		if (this->_tab[i] != NULL)
		{
			//std::cout << "p: " << this->_tab[i] << std::endl;
			delete this->_tab[i];
		}
	}
}

void	MateriaSource::learnMateria(AMateria* p)
{
	for (int i = 0 ; i < 4 ; i++)
	{
		if (this->_tab[i] == NULL)
		{
			//std::cout << "learned on " << i << " to " << p << std::endl;
			this->_tab[i] = p;
			return ;
		}

	}
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0 ; i < 4 ; i++)
	{
		if (this->_tab[i] != NULL && this->_tab[i]->getType() == type)
		{
			//std::cout << "transfered!  i:" << i << "addr:" << this->_tab[i] << std::endl;
			return (this->_tab[i]->clone());
		}
	}
	return (NULL);
}

MateriaSource&	MateriaSource::operator=(MateriaSource const & rhs)
{
	for (int i = 0 ; i < 4 ; i++)
	{
		if (this->_tab[i] != NULL)
		{
			//std::cout << "delete" << std::endl;
			delete this->_tab[i];
			this->_tab[i] = NULL;
		}
		if (rhs._tab[i] != NULL)
		{
			//std::cout << "replace" << std::endl;
			this->_tab[i] = rhs._tab[i]->clone();
		}
	}
	return (*this);
}
