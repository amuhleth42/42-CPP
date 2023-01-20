#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	//std::cout << "MateriaSource default constructor" << std::endl;
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
			return (this->_tab[i]);
		}
	}
	return (NULL);
}
