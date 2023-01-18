#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
}

MateriaSource::~MateriaSource(void)
{
}

void	MateriaSource::learnMateria(AMateria* p)
{
	for (int i = 0 ; i < 4 ; i++)
	{
		if (this->_tab[i] == NULL)
			this->_tab[i] = new AMateria(p);

	}
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0 ; i < 4 ; i++)
	{
		if (this->_tab[i] != NULL && this->_tab[i]->getType() == type)
			return (new AMateria(this->_tab[i]));
	}
	return (NULL);
}
